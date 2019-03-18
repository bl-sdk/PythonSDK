local string = string
local ffi = require("ffi")
local bit = require("bit")

local OBJECT_HASH_BINS = 32*1024
local NAME_HASH_BINS = 65536

local ObjHash = ffi.cast("struct UObject**", bl2sdk.GObjHash)
local CRCTable = ffi.cast("unsigned int*", bl2sdk.GCRCTable)
local NameHash = ffi.cast("struct FNameEntry**", bl2sdk.NameHash)

local function GetObjectHash(objName)
	return bit.band(bit.bxor(objName.Index, objName.Number), OBJECT_HASH_BINS - 1)
end

local function Strihash(str)
	str = string.upper(str)
	local hash = 0

	for i=1,string.len(str) do
		local cc = string.byte(str, i)
		-- hash = ((hash >> 8) & 0x00FFFFFF) ^ CRCTable[(hash ^ cc) & 0x000000FF]
		-- hash = bit.bxor(bit.band(bit.rshift(hash, 8), 0x00FFFFFF), CRCTable[bit.band(bit.bxor(hash, cc), 0x000000FF)])
		hash = bit.bxor(bit.rshift(hash, 8), CRCTable[bit.band(bit.bxor(hash, cc), 0x000000FF)])
	end

	return hash
end

local function GetNameHash(str)
	return bit.band(Strihash(str), NAME_HASH_BINS - 1)
end

-- Public members
engine.ObjHash = ObjHash
engine.NameHash = NameHash
engine.GetObjectHash = GetObjectHash
engine.GetNameHash = GetNameHash