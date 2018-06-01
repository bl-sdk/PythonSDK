local ffi = require("ffi")
local bit = require("bit")
local PtrToNum = PtrToNum

ffi.cdef[[
typedef void (__thiscall *tFrameStep) (struct FFrame*, struct UObject*, void*);
]]
local pFrameStep = ffi.cast("tFrameStep", bl2sdk.FrameStep)

local FFrameMT = {}

function FFrameMT.GetFuncCodeHex(self)
	local originalCode = self.Code
	local out = ""

	-- TODO: Limit
	while true do
		local opcode = self.Code[0]
		out = out .. bit.tohex(opcode, 2) .. " "
		if opcode == 0x16 then break end
		self.Code = self.Code + 1
	end

	self.Code = originalCode

	return out
end

function FFrameMT.GetLocalsHex(self, length)
	local out = ""

	for i=1,length do
		out = out .. bit.tohex(self.Locals[i - 1], 2) .. " "
	end

	return out
end

-- Use this function if you're reading out something that's not a struct
-- ie. an int, float, pointer, etc.
function FFrameMT.ReadBasicType(self, ptrType, size)
	local result = ffi.cast(ptrType, self.Code)[0]
	self.Code = self.Code + size
	return result
end

function FFrameMT.ReadStructType(self, structType, ptrType, size)
	local inCode = ffi.cast(ptrType, self.Code)[0]
	self.Code = self.Code + size

	local result = ffi.new(structType)
	ffi.copy(result, inCode, size)
	return result
end

function FFrameMT.ReadInt(self)
	return self:ReadBasicType(ffi.typeof("int*"), 4)
end

function FFrameMT.ReadFloat(self)
	return self:ReadBasicType(ffi.typeof("float*"), 4)
end

function FFrameMT.ReadName(self)
	return self:ReadStructType(ffi.typeof("struct FName"), ffi.typeof("struct FName*"), ffi.sizeof("struct FName"))
end

function FFrameMT.ReadObject(self)
	return self:ReadBasicType(ffi.typeof("struct UObject**"), 8) -- In C++, size = sizeof(ScriptPointerType) = sizeof(QWORD) = 8
end

function FFrameMT.ReadWord(self)
	return self:ReadBasicType(ffi.typeof("unsigned short*"), 2)
end

FFrameMT.Step = pFrameStep

function FFrameMT:GetBasicType(arrayType, default)
	local var = ffi.new(arrayType, default)
	pFrameStep(self, self.Object, var)
	return var[0]
end

function FFrameMT:GetStructType(structType, arrayType, size)
	local var = ffi.new(arrayType)
	pFrameStep(self, self.Object, var)

	local result = ffi.new(structType)
	ffi.copy(result, var[0], size)
	return result
end

function FFrameMT:GetBool()
	return self:GetBasicType(ffi.typeof("BOOL[1]"), false)
end

function FFrameMT:GetStruct(structType)
	return self:GetStructType(structType, ffi.typeof("$[1]", structType), ffi.sizeof(structType))
end

function FFrameMT:GetInt()
	return self:GetBasicType(ffi.typeof("int[1]"), 0)
end

function FFrameMT:GetFloat()
	return self:GetBasicType(ffi.typeof("float[1]"), 0)
end

function FFrameMT:GetByte()
	return self:GetBasicType(ffi.typeof("int[1]"), 0) -- TODO: What does Unreal do here?
end

function FFrameMT:GetName()
	return self:GetStructType("struct FName", "struct FName[1]", ffi.sizeof("struct FName"))
end

function FFrameMT:GetString()
	return self:GetStructType("struct FString", "struct FString[1]", ffi.sizeof("struct FString"))
end

function FFrameMT:GetTArray(innerType)
	-- If you get an error here, it means that you've specified an invalid inner type,
	-- or there is no pre-existing definition for a TArray of the type you specified.
	local actualType = ffi.typeof("struct TArray_" .. innerType)
	return self:GetStructType(actualType, ffi.typeof("$[1]", actualType), ffi.sizeof("struct TArray"))
end

-- This function expects exactType to be an ffi.typeof'd TArray type (eg. ffi.typeof("struct TArray_char"))
function FFrameMT:GetTArrayRaw(exactType)
	return self:GetStructType(exactType, ffi.typeof("$[1]", exactType), ffi.sizeof("struct TArray"))
end

function FFrameMT:GetObject(className)
	local class = engine.Classes[className]
	if class == nil then error(string.format("Class %q not found", className)) end

	return self:GetBasicType(ffi.typeof("$[1]", class.ptrType))
end

function FFrameMT.WriteOpToCode(self, opCode)
	self.Code[0] = opCode -- Code is already an unsigned char*
	self.Code = self.Code + 1
end

function FFrameMT.WriteToCode(self, castTo, size, value)
	ffi.cast(castTo, self.Code)[0] = value
	self.Code = self.Code + size
end

local CopyNatives = {}

-- execLocalVariable
CopyNatives[0x00] = function(Stack, Object, newStack)
	local value = Stack:ReadObject()
	newStack:WriteOpToCode(0x00)
	newStack:WriteToCode("struct UObject**", 8, value)
end

-- execInstanceVariable
CopyNatives[0x01] = function(Stack, Object, newStack)
	local value = Stack:ReadObject()
	newStack:WriteOpToCode(0x01)
	newStack:WriteToCode("struct UObject**", 8, value)
end

-- execObjectConst
CopyNatives[0x20] = function(Stack, Object, newStack)
	local value = Stack:ReadObject()
	newStack:WriteOpToCode(0x20)
	newStack:WriteToCode("struct UObject**", 8, value)
end

-- execLocalVariableOffsetInt
CopyNatives[0x4C] = function(Stack, Object, newStack)
	local value = Stack:ReadInt()
	newStack:WriteOpToCode(0x4C)
	newStack:WriteToCode("int*", 4, value)
end

function FFrameMT.CopyStep(self, newStack)
	local native = CopyNatives[self.Code[0]]
	print("Calling native " .. tostring(self.Code[0]))
	self.Code = self.Code + 1
	native(self, self.Object, newStack)
end

function FFrameMT.PrintStackInfo(self)
	print(string.format("Stack Frame: \n\tbAllowSuppression = %d\n\tbSuppressEventTag = %d\n\tbAutoEmitLineTerminator = %d\n\tNode = 0x%X\n\tObject = 0x%X\n\tCode = 0x%X\n\tLocals = 0x%X\n\tPreviousFrame = 0x%X\n\tOutParms = 0x%X", 
		self.bAllowSuppression,
		self.bSuppressEventTag,
		self.bAutoEmitLineTerminator,
		PtrToNum(self.Node),
		PtrToNum(self.Object),
		PtrToNum(self.Code),
		PtrToNum(self.Locals),
		PtrToNum(self.PreviousFrame),
		PtrToNum(self.OutParms)
	))
end

function FFrameMT.SkipFunction(self)
	-- TODO: Limit
	while true do
		local opcode = self.Code[0]
		self.Code = self.Code + 1
		if opcode == 0x16 then break end
	end
end

ffi.metatype("struct FFrame", { __index = FFrameMT })

local FFrame = {}

function FFrame.NewStack(oldStack)
	local stack = ffi.new("struct FFrame")
	local buffer = ffi.new("unsigned char[?]", 128)

	stack.Code = buffer

	stack.VfTable = oldStack.VfTable
	stack.bAllowSuppression = oldStack.bAllowSuppression
	stack.bSuppressEventTag = oldStack.bSuppressEventTag
	stack.bAutoEmitLineTerminator = oldStack.bAutoEmitLineTerminator
	stack.Node = oldStack.Node
	stack.Object = oldStack.Object
	stack.Locals = oldStack.Locals
	stack.PreviousFrame = oldStack.PreviousFrame
	stack.OutParms = oldStack.OutParms

	return stack
end

return FFrame
