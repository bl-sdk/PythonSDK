local ffi = require("ffi")
local bit = require("bit")
local ipairs = ipairs
local error = error
local string = string
local flags = flags
local type = type
local FString = FString
local print = print
local tostring = tostring
local table = table
local unpack = unpack

local TArrayEngineFinalizer = TArray.EngineFinalizer
local FindName = engine.FindName

FUNCPARM_CLASS = 1
FUNCPARM_NAME = 2
FUNCPARM_STRING = 4
FUNCPARM_TARRAY = 8
FUNCPARM_OBJPOINTER = 16
FUNCPARM_LUATYPE = 32
FUNCPARM_STRUCT = 64

FUNC_Native = 0x00000400
FUNC_Defined = 0x00000002
FUNC_HasOptionalParms = 0x00004000

-- ProcessEvent - basically lets us call any engine function
ffi.cdef[[
typedef void (__thiscall *tProcessEvent) (struct UObject*, struct UFunction*, void*, void*);
]]
local pProcessEvent = ffi.cast("tProcessEvent", bl2sdk.ProcessEvent)

local FuncMT = {}

local function GetReturn(retVal, pParamBlockBase)
	local field = ffi.cast(retVal.castTo, pParamBlockBase + retVal.offset)

	-- The param block will be freed when we're done with the function call, so
	-- if there's a struct that we want, we need to copy it out so that our reference
	-- doesn't get GCed while we're still using it.

	-- HOWEVER, if the return type is an FString or TArray (or anything else where we
	-- become the owners of a heap allocated block of memory) then we need to make sure 
	-- that we free that when we're done.
	if not retVal.cType then
		return field[0]
	else
		local new = ffi.new(retVal.cType)
		ffi.copy(new, field, ffi.sizeof(retVal.cType))
		return new
	end
end

function FuncMT.__call(funcData, obj, ...)
	if obj == nil then error("Cannot execute function on null object") end

	local args = { ... }
	--local n = select("#", ...)

	-- This is the maximum code size that could be required
	local codeSize = 9 * (#funcData.fields) + 10
	local codeBuffer = ffi.new("char[?]", codeSize)
	local codeBufferBase = ffi.cast("char*", codeBuffer)
	ffi.fill(codeBuffer, codeSize, 0)

	local nextCodeOffset = 0

	local iNative = funcData.ptr.UFunction.iNative
	if iNative > 0 then
		if iNative >= 256 then
			codeBuffer[0] = 0x60 + math.floor(iNative / 256) -- EX_ExtendedNative
			codeBuffer[1] = iNative % 256
			nextCodeOffset = 2
		else
			codeBuffer[0] = iNative
			nextCodeOffset = 1
		end
	else
		codeBuffer[0] = 0x1C -- EX_FinalFunction
		local funcPtr = ffi.cast("struct UFunction**", codeBufferBase + 1)
		funcPtr[0] = funcData.ptr
		nextCodeOffset = 9
	end

	local paramBlock = ffi.new("char[?]", funcData.dataSize)
	ffi.fill(paramBlock, funcData.dataSize, 0)
	local pParamBlockBase = ffi.cast("char*", paramBlock)

	-- We need to create an FOutParmRec for every out parm that isn't a return
	-- value. They are combined in a linked list, so define the head here.
	local outParmHead = nil
	local previousOutParm = nil

	-- Process function arguments
	local argNum = 1
	for _,v in ipairs(funcData.fields) do
		-- Out parameters that aren't the return value need some code
		if v.isOutParm then
			-- Add the code
			codeBuffer[nextCodeOffset] = 0x29 -- EX_NativeParm
			local codeProp = ffi.cast("struct UProperty**", codeBufferBase + nextCodeOffset + 1)
			local outParmProp = ffi.cast("struct UProperty*", engine.Objects[v.index])
			codeProp[0] = outParmProp
			nextCodeOffset = nextCodeOffset + 9

			-- Create the FOutParmRec
			local outParmRec = ffi.new("struct FOutParmRec")
			outParmRec.Property = outParmProp
			outParmRec.PropAddr = pParamBlockBase + v.offset
			if not outParmHead then
				outParmHead = outParmRec
			else
				previousOutParm.NextOutParm = outParmRec
			end

			previousOutParm = outParmRec

			goto continue
		end

		if v.isRet then
			goto continue
		end

		local luaArg = args[argNum]

		if not v.optional then
			-- If the arg is nil and not a pointer type (where nil == NULL)
			if luaArg == nil and not flags.IsSet(v.flags, FUNCPARM_OBJPOINTER) then
				error(string.format("Arg #%d (%s) is required", argNum, v.name))
			end
		end

		-- If the luaArg is nil here, it's either a null pointer or an unspecified optional arg.
		-- We can safely skip it
		if luaArg == nil then
			codeBuffer[nextCodeOffset] = 0x4A -- EX_EmptyParmValue
			nextCodeOffset = nextCodeOffset + 1
			goto continue
		end

		codeBuffer[nextCodeOffset] = 0x29 -- EX_NativeParm
		local codeProp = ffi.cast("struct UProperty**", codeBufferBase + nextCodeOffset + 1)
		codeProp[0] = ffi.cast("struct UProperty*", engine.Objects[v.index])
		nextCodeOffset = nextCodeOffset + 9

		-- If arg expects a lua type, and it's not the right lua type
		if flags.IsSet(v.flags, FUNCPARM_LUATYPE) and type(luaArg) ~= v.type then
			error(string.format("Arg #%d (%s) expects the Lua type %q", argNum, v.name, v.type))
		

		-- If we're expecting a class, it should be a UClass* or an engine.Classes.name table with a static member
		elseif flags.IsSet(v.flags, FUNCPARM_CLASS) then
			if type(luaArg) == "table" then
				if luaArg.static ~= nil then
					luaArg = ffi.cast("struct UClass*", luaArg.static)
				else
					error(string.format("Arg #%d (%s) did not contain a valid class table", argNum, v.name))
				end
			elseif not ffi.istype(v.type, luaArg) then
				error(string.format("Arg #%d (%s) expects a class", argNum, v.name))
			end
		

		-- If we're expecting a name and we get a string, we need to convert it to an FName
		-- If it's not a string, it should be a struct FName
		elseif flags.IsSet(v.flags, FUNCPARM_NAME) then
			if type(luaArg) == "string" then
				local name = FindName(luaArg)
				if name == nil then
					error(string.format("Arg #%d (%s): Name for %q not found", argNum, v.name, luaArg))
				end
				luaArg = name
			elseif not ffi.istype(v.type, luaArg) then
				error(string.format("Arg #%d (%s) expects a name", argNum, v.name))
			end
		

		-- If we're expecting an FString, and we get a normal string, convert it to an FString
		-- Otherwise make sure it's a struct FString
		elseif flags.IsSet(v.flags, FUNCPARM_STRING) then
			if type(luaArg) == "string" then
				-- TODO: If GC is run between here and ProcessEvent call, this string will
				-- be deleted and there's going to be issues.
				luaArg = FString.GetFromLuaString(luaArg)
			elseif not ffi.istype(v.type, luaArg) then
				error(string.format("Arg #%d (%s) expects a string", argNum, v.name))
			end
		

		-- If it's a TArray, accept a table or an actual struct TArray
		elseif flags.IsSet(v.flags, FUNCPARM_TARRAY) then
			if type(luaArg) == "table" then
				-- TODO: Convert table, set luaArg to struct
				error("NYI: Converting lua table to TArray")
			elseif not ffi.istype(v.type, luaArg) then
				error(string.format("Arg #%d (%s) expects a %q", argNum, v.name, v.type))
			end
		

		elseif flags.IsSet(v.flags, FUNCPARM_STRUCT) and not ffi.istype(v.type, luaArg) then
			error(string.format("Arg #%d (%s) expects a %q", argNum, v.name, tostring(v.type)))
		

		elseif flags.IsSet(v.flags, FUNCPARM_OBJPOINTER) then
			if type(luaArg) ~= "cdata" or luaArg.IsA == nil or not luaArg:IsA(v.class) then
				error(string.format("Arg #%d (%s) expects an object pointer for %s", argNum, v.name, v.class.name))
			else
				luaArg = ffi.cast("struct UObject*", luaArg)
			end
		end

		-- Finally set the actual field
		local field = ffi.cast(v.castTo, pParamBlockBase + v.offset)
		field[0] = luaArg

		argNum = argNum + 1

		::continue::
	end

	codeBuffer[nextCodeOffset] = 0x16 -- EX_EndFunctionParms

	--[[
	local parms = ""
	for i=0,(funcData.dataSize-1) do
		parms = parms .. string.format("%s ", bit.tohex(paramBlock[i], 2))
	end
	print(parms)
	]]

	-- Have we got a pointer?
	if not funcData.ptr or funcData.ptr == nil then
		error("Function does not have a valid pointer")
	end

	-- Call func
	local stack = ffi.new("struct FFrame")
	stack.Code = codeBuffer
	stack.VfTable = ffi.cast("void*", 0x16BF480)
	stack.bAllowSuppression = true
	stack.bSuppressEventTag = false
	stack.bAutoEmitLineTerminator = true
	stack.Node = ffi.cast("struct UStruct*", engine.Classes.UObject.static)
	stack.Object = ffi.cast("struct UObject*", obj)
	stack.Locals = paramBlock
	stack.PreviousFrame = nil
	stack.OutParms = outParmHead

	--stack.OutParms:PrintInfo()

	--print("Code:")
	--print(stack:GetFuncCodeHex())
	--print("Locals:")
	--print(stack:GetLocalsHex(funcData.dataSize))

	if funcData.retOffset ~= nil then
		--print("With return val")
		stack:Step(stack.Object, pParamBlockBase + funcData.retOffset)
	else
		--print("Without return val")
		stack:Step(stack.Object, nil)
	end

	--print("Locals after call:")
	--print(stack:GetLocalsHex(funcData.dataSize))

	-- TODO: Investigate having a special case for a single return value.
	-- Is there any performance to be gained here? (Is unpack NYI?)
	local returns = {}
	for _,v in ipairs(funcData.fields) do
		if v.isRet then
			--print("Adding return value")
			table.insert(returns, GetReturn(v, pParamBlockBase))
		end
	end

	return unpack(returns)
end

-- Public members
engine.FuncMT = FuncMT
