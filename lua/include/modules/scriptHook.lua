local ffi = require("ffi")
local engine = engine
local PtrToNum = PtrToNum
local table = table
local type = type
local print = print
local error = error
local pairs = pairs
local string = string
local bl2sdk = bl2sdk
local pcall = pcall

ffi.cdef[[
typedef bool (*tCallFunctionHook) (struct UObject*, struct FFrame&, void* const Result, struct UFunction*);
void LUAFUNC_AddStaticScriptHook(struct UFunction* pFunction, tCallFunctionHook funcHook);
void LUAFUNC_RemoveStaticScriptHook(struct UFunction* pFunction);
typedef void (__thiscall *tCallFunction) (struct UObject*, struct FFrame*, void* const, struct UFunction*);
]]

local RegisteredHooks = {}
local scriptHook = {}

scriptHook.CallFunction = ffi.cast("tCallFunction", bl2sdk.CallFunction)

function scriptHook.ProcessHooks(Object, Stack, Result, Function)
	local ptrNum = PtrToNum(Function)
	local hookTable = RegisteredHooks[ptrNum]

	if hookTable == nil then
		print(string.format("[Lua] Warning: scriptHook.ProcessHooks called for %s (0x%X) with no hook table",
			Function:GetName(),
			ptrNum))
		return true
	end

	for _,v in pairs(hookTable) do
		local codePtr = Stack.Code

		local hookFunc = v[1]
		local isRaw = v[2]

		local status, ret
		if isRaw then
			status, ret = pcall(hookFunc, Object, Stack, Result, Function)
		end

		if not status then
			print("Error in ScriptHook: " .. ret)
			ret = false
		end

		-- A non-nil/false value means that we probably created a new stack and executed
		-- the function with it, so we don't want the original call to go through.
		if not ret then
			Stack.Code = codePtr -- Restore the code pointer to what it was originally
		else
			return false
		end
	end

	return true
end

local EngineCallback = ffi.cast("tCallFunctionHook", scriptHook.ProcessHooks)

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
		ffi.C.LUAFUNC_AddStaticScriptHook(funcData.ptr, EngineCallback)
	end

	RegisteredHooks[ptrNum][hookName] = { hookFunc, rawHook }

	print(string.format("[Lua] UnrealScript Hook added for function %q", funcData.ptr:GetFullName()))
end

function scriptHook.Add(className, funcName, hookName, hookFunc)
	error("Adding normal script hooks is not yet implemented")
	--return AddInternal(className, funcName, hookName, hookFunc, false)
end

function scriptHook.AddRaw(className, funcName, hookName, hookFunc)
	return AddInternal(className, funcName, hookName, hookFunc, true)
end

function scriptHook.RemoveAll()
	-- Foreach function
	for ptrNum,_ in pairs(RegisteredHooks) do
		-- Remove the hook inside the engine
		local ptr = ffi.cast("struct UFunction*", ptrNum)
		ffi.C.LUAFUNC_RemoveStaticScriptHook(ptr)

		-- nil it
		RegisteredHooks[ptrNum] = nil
	end
end

function scriptHook.Remove(className, funcName, hookName)
	if engine.Classes[className] == nil then error("Class " .. className .. " not found") end
	
	local funcData = engine.Classes[className].funcs[funcName]
	if funcData == nil then error("Function " .. funcName .. " not found") end

	if not funcData.ptr then error("Function has no pointer") end
	if type(hookName) ~= "string" then error("Hook name must be a string") end

	local ptrNum = PtrToNum(funcData.ptr)
	if RegisteredHooks[ptrNum] == nil then print("Hook table for function does not exist") return end

	RegisteredHooks[ptrNum][hookName] = nil
	if table.count(RegisteredHooks[ptrNum]) == 0 then
		ffi.C.LUAFUNC_RemoveStaticScriptHook(funcData.ptr)
		RegisteredHooks[ptrNum] = nil
	end

	print(string.format("[Lua] UnrealScript Hook removed for function %q", funcData.ptr:GetFullName()))
end

return scriptHook
