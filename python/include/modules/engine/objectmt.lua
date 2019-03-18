local print = print
local debug = debug
local string = string
local error = error
local PtrToNum = PtrToNum
local setmetatable = setmetatable
local type = type

local ffi = require("ffi")

local _ClassesInternal = engine._ClassesInternal

local LogObjectIndex = false
local BaseObjFuncs = UObject.BaseFuncs
local FuncMT = engine.FuncMT

local function LogSlowObjectIndex(b)
	LogObjectIndex = b
end

local UObjectMT = {}

function UObjectMT.__index(self, k)
	if self == nil then error("Object is null - cannot access field") end

	-- First check the base functions
	if BaseObjFuncs[k] ~= nil then return BaseObjFuncs[k] end

	if LogObjectIndex then print("Calling UObjectMT.__index", self, k) end

	-- Get the actual class information for this object
	local classInfo = _ClassesInternal[PtrToNum(self.UObject.Class)]

	-- Check that we actually have the info for this class
	if classInfo == nil then
		print(debug.traceback())
		error(string.format("Class info not found: Name = %s, Ptr = 0x%X",
			self.UObject.Class:GetCName(),
			PtrToNum(self.UObject.Class)
		))
	end

	-- Cast this object to the right type
	local obj = ffi.cast(classInfo.ptrType, self)

	-- This seems to be working now. If problems come back, just flip this
	-- Also remember to jit.on() on ALL returns!
	-- 1/07/2013 - Scratch that, still seems to break after lots of calls
	jit.off()

	-- Since we have casted, check the actual class type first
	-- Then while this class has a base class, check that.
	local baseClass = classInfo
	while baseClass do
		local v = obj[baseClass.name][k]
		if v ~= nil then
			jit.on()
			return v
		elseif v == nil and type(v) == "cdata" then -- null pointer
			jit.on()
			return nil
		elseif baseClass.funcs[k] ~= nil then
			jit.on()
			return setmetatable(baseClass.funcs[k], FuncMT)
		else
			baseClass = baseClass.base
		end
	end
	
	print("[Lua] Warning: Object index not found for __index", k)

	jit.on()
	return nil
end

function UObjectMT.__newindex(self, k, v)
	if self == nil then error("Object is null - cannot set field") end

	if LogObjectIndex then print("Calling UObjectMT.__newindex", self, k, v) end

	-- Get the actual class information for this object
	local classInfo = _ClassesInternal[PtrToNum(self.UObject.Class)]

	-- Check that we actually have the info for this class
	if classInfo == nil then
		print(debug.traceback())
		error(string.format("Class info not found: Name = %s, Ptr = 0x%X",
			self.UObject.Class:GetCName(),
			PtrToNum(self.UObject.Class)
		))
	end

	-- Cast this object to the right type
	local obj = ffi.cast(classInfo.ptrType, self)

	jit.off()

	-- Since we have casted, check the actual class type first
	-- Then while this class has a base class, check that.
	local baseClass = classInfo
	while baseClass do
		local cv = obj[baseClass.name][k]
		if cv == nil and type(cv) ~= "cdata" then
			baseClass = baseClass.base
		else
			obj[baseClass.name][k] = v
			jit.on()
			return
		end
	end
	
	print("[Lua] Warning: Object index not found for __newindex", k)
	jit.on()
end

local UObjectDataMT = {}

function UObjectDataMT.__index(self, k)
	return nil
end

-- Public members
engine.LogSlowObjectIndex = LogSlowObjectIndex
engine.UObjectMT = UObjectMT
engine.UObjectDataMT = UObjectDataMT