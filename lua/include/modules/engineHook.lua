local ffi = require("ffi")
local engine = engine
local PtrToNum = PtrToNum
local table = table
local type = type
local print = print
local error = error
local unpack = unpack
local pairs = pairs
local string = string
local pcall = pcall

ffi.cdef[[
typedef bool (*tProcessEventHook) (struct UObject*, struct UFunction*, char*, void*);
void LUAFUNC_AddStaticEngineHook(struct UFunction* pFunction, tProcessEventHook funcHook);
void LUAFUNC_RemoveStaticEngineHook(struct UFunction* pFunction);
]]

local RegisteredHooks = {}
local engineHook = {}

local function GetArg(arg, pParms)
	return ffi.cast(arg.castTo, pParms + arg.offset)[0]
end

function engineHook.ProcessHooks(pObject, pFunction, pParms, pResult)
	local ptrNum = PtrToNum(pFunction)
	local hookTable = RegisteredHooks[ptrNum]

	if hookTable == nil then
		print(string.format("[Lua] Warning: engineHook.ProcessHooks called for %s (0x%X) with no hook table",
			pFunction:GetName(),
			ptrNum))
		return true
	end

	-- TODO: This section is always run even if there are no hooks (which shouldn't happpen) or
	-- even if all the hooks are raw hooks and don't get given argData anyway.
	local fields = engine._FuncsInternal[ptrNum].fields

	local argData = {}
	for i=1,#fields do
		if not fields[i].isRet then
			argData[fields[i].name] = GetArg(fields[i], pParms)
		end
	end

	for _,v in pairs(hookTable) do
		local hookFunc = v[1]
		local isRaw = v[2]

		local status, ret
		if not isRaw then
			status, ret = pcall(hookFunc, pObject, argData)
		else
			status, ret = pcall(hookFunc, pObject, pFunction, pParms, pResult)
		end

		if not status then
			print("Error in EngineHook: " .. ret)
		end
	end

	return true
end

local function SafeProcessHooks(pObject, pFunction, pParms, pResult)
	local status, ret = pcall(ProcessHooks, pObject, pFunction, pParms, pResult)
	print(status, ret)

	return true
end

local EngineCallback = ffi.cast("tProcessEventHook", engineHook.ProcessHooks)

local function AddInternal(className, funcName, hookName, hookFunc, rawHook)
	if engine.Classes[className] == nil then error("Class " .. className .. " not found") end
	
	local funcData = engine.Classes[className].funcs[funcName]
	if funcData == nil then error("Function " .. funcName .. " not found") end
	
	if not funcData.ptr or funcData.ptr == nil then error("Function has no pointer") end
	if type(hookName) ~= "string" then error("Hook name must be a string") end
	if type(hookFunc) ~= "function" then error("Hook function must be a function") end

	local ptrNum = PtrToNum(funcData.ptr)
	if RegisteredHooks[ptrNum] == nil then
		RegisteredHooks[ptrNum] = {}
		ffi.C.LUAFUNC_AddStaticEngineHook(funcData.ptr, EngineCallback)
	end

	RegisteredHooks[ptrNum][hookName] = { hookFunc, rawHook }

	print(string.format("[Lua] Engine Hook added for function %q", funcData.ptr:GetFullName()))
end

function engineHook.Add(className, funcName, hookName, hookFunc)
	return AddInternal(className, funcName, hookName, hookFunc, false)
end

function engineHook.AddRaw(className, funcName, hookName, hookFunc)
	return AddInternal(className, funcName, hookName, hookFunc, true)
end

function engineHook.RemoveAll()
	-- Foreach function
	for ptrNum,_ in pairs(RegisteredHooks) do
		-- Remove the hook inside the engine
		local ptr = ffi.cast("struct UFunction*", ptrNum)
		ffi.C.LUAFUNC_RemoveStaticEngineHook(ptr)

		-- nil it
		RegisteredHooks[ptrNum] = nil
	end
end

function engineHook.Remove(className, funcName, hookName)
	if engine.Classes[className] == nil then error("Class " .. className .. " not found") end
	
	local funcData = engine.Classes[className].funcs[funcName]
	if funcData == nil then error("Function " .. funcName .. " not found") end
	
	if not funcData.ptr then error("Function has no pointer") end
	if type(hookName) ~= "string" then error("Hook name must be a string") end

	local ptrNum = PtrToNum(funcData.ptr)
	if RegisteredHooks[ptrNum] == nil then print("Hook table for function does not exist") return end

	RegisteredHooks[ptrNum][hookName] = nil
	if table.count(RegisteredHooks[ptrNum]) == 0 then
		ffi.C.LUAFUNC_RemoveStaticEngineHook(funcData.ptr)
		RegisteredHooks[ptrNum] = nil
	end

	print(string.format("[Lua] Engine Hook removed for function %q", funcData.ptr:GetFullName()))
end

return engineHook
