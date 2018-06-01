local ffi = require("ffi")
local bit = require("bit")
local pairs = pairs
local PtrToNum = PtrToNum
local print = print
local string = string
local profiling = profiling

-- Import core data structures
require("engine.core.structs")
require("engine.core.classes")

-- Load Lua helpers for core engine types
TArray = require("engine.helpers.TArray")
FString = require("engine.helpers.FString")
UObject = require("engine.helpers.UObject")
require("engine.helpers.FOutParmRec")

engine = {}
local engine = engine

-- Core engine data structures that we'll need access to
engine.Objects = TArray.Create("struct UObject*", ffi.cast("struct TArray*", bl2sdk.GObjects))
engine.Names = TArray.Create("struct FNameEntry*", ffi.cast("struct TArray*", bl2sdk.GNames))

engine._ClassesInternal = {} -- maps a class pointer to its metadata
engine.Classes = {} -- maps a name to a class

engine._FuncsInternal = {} -- maps a function pointer to its metadata

require("engine.hash")
require("engine.find")
require("engine.funcmt")
require("engine.objectmt")
require("engine.package")

require("engine.helpers.FName")
FFrame = require("engine.helpers.FFrame")

ffi.cdef[[
void LUAFUNC_LogAllProcessEventCalls(bool enabled);
void LUAFUNC_LogAllUnrealScriptCalls(bool enabled);
]]

function engine.LogAllProcessEventCalls(enabled)
	ffi.C.LUAFUNC_LogAllProcessEventCalls(enabled)
end

function engine.LogAllUnrealScriptCalls(enabled)
	ffi.C.LUAFUNC_LogAllUnrealScriptCalls(enabled)
end

local function InitializeFunctions(funcsTable)
	if funcsTable == nil then return 0 end

	-- Foreach function, get its pointer and add it to the _FuncsInternal map
	local count = 0
	for _,funcData in pairs(funcsTable) do
		funcData.ptr = ffi.cast("struct UFunction*", engine.Objects[funcData.index])
		funcData.index = nil

		engine._FuncsInternal[PtrToNum(funcData.ptr)] = funcData
		count = count + 1
	end

	return count
end

local function InitializeClasses()
	for i=1,#g_loadedClasses do
		ffi.metatype("struct " .. g_loadedClasses[i][1], engine.UObjectMT) -- Everything is a UObject, so set its MT on everything
		ffi.metatype("struct " .. g_loadedClasses[i][1] .. "_Data", engine.UObjectDataMT) -- Makes the _Data types return nil
	end

	local funcCount = 0

	for i=1,#g_loadedClasses do
		local class = g_loadedClasses[i] -- 1 = name, 2 = Full Name, 3 = Base name

		local members = {
			name = class[1],
			base = engine.Classes[class[3]],
			ptrType = ffi.typeof("struct " .. class[1] .. "*"),
			funcs = g_classFuncs[class[1]] or {}
		}

		-- If it's a string, it's a full name and we need to search.
		if type(class[2]) == "string" then
			members.static = ffi.cast("struct UClass*", engine.FindClass(class[2]))
		else -- Otherwise it's just an offset and we can just get it out of the array
			members.static = ffi.cast("struct UClass*", engine.Objects[class[2]])
		end

		if members.static == nil then
			error("Failed to find class '" .. class[1]  .. "'")
		end

		engine._ClassesInternal[PtrToNum(members.static)] = members
		engine.Classes[class[1]] = members

		funcCount = funcCount + InitializeFunctions(members.funcs)
	end

	print(string.format("[Lua] %d classes initialized", #g_loadedClasses))
	print(string.format("[Lua] %d functions initialized", funcCount))

	g_loadedClasses = nil
	g_classFuncs = nil
end

local function InitializeTArrays()
	for i=1,#g_TArrayTypes do
		ffi.metatype("struct TArray_" .. g_TArrayTypes[i], TArray.BaseMT)
	end

	print(string.format("[Lua] %d TArray types initialized", #g_TArrayTypes))

	g_TArrayTypes = nil
end

local function ResolveArgClasses()
	for _,funcData in pairs(engine._FuncsInternal) do
		for _,arg in ipairs(funcData.fields) do
			if arg.className ~= nil then
				arg.class = engine.Classes[arg.className]
				arg.className = nil
			end
		end
	end
end

function engine.Initialize()
	profiling.StartTimer("engineinit", "Engine Initialization")

	print("[Lua] Initializing engine classes...")

	-- Initialize metatables on all classes
	InitializeClasses()

	-- Add the TArray metatable to all the template types
	InitializeTArrays()

	-- Resolve the classes in the function arguments
	ResolveArgClasses()

	profiling.StopTimer("engineinit")
end
