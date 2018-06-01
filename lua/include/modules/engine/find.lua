local engine = engine
local Objects = engine.Objects
local Names = engine.Names
local NameHash = engine.NameHash
local Classes = engine.Classes
local GetNameHash = engine.GetNameHash
local string = string

local ffi = require("ffi")
local bit = require("bit")

local function FindObjectWithClass(objectName, class)
	for i=0,(Objects.Count-1) do
		local obj = Objects[i]
		if obj == nil then goto continue end
		if not obj:IsA(class) then goto continue end

		if obj:GetFullName() == objectName then
			return obj
		end

		::continue::
	end

	return nil
end

local function FindObject(objectName, class)
	if class ~= nil then
		return FindObjectWithClass(objectName, class)
	end

	for i=0,(Objects.Count-1) do
		local obj = Objects[i]
		if obj == nil then goto continue end

		if obj:GetFullName() == objectName then
			return obj
		end

		::continue::
	end

	return nil
end

local function FindObjectExactClass(objectName, class)
	for i=0,(Objects.Count-1) do
		local obj = Objects[i]
		if obj == nil then goto continue end
		if obj.UObject.Class ~= class.static then goto continue end

		if obj:GetFullName() == objectName then
			return obj
		end

		::continue::
	end

	return nil
end

local function FindClass(className)
	local obj
	if Classes.UClass ~= nil then
		obj = FindObjectWithClass(className, Classes.UClass)
	else
		obj = FindObject(className)
	end
	
	if obj == nil then
		return nil
	else
		return ffi.cast("struct UClass*", obj)
	end
end

local function FindName(str)
	str = string.upper(str)
	local iHash = GetNameHash(str)

	local hash = NameHash[iHash]
	while hash ~= nil do
		if string.upper(ffi.string(hash.Name)) == str then
			return ffi.new("struct FName", bit.rshift(hash.Index, 1), 0)
		end

		hash = hash.HashNext
	end

	return nil
end

-- Public functions
engine.FindObject = FindObject
engine.FindObjectExactClass = FindObjectExactClass
engine.FindClass = FindClass
engine.FindName = FindName
