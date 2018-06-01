local ffi = require("ffi")
local string = string
local memory = memory

ffi.cdef[[
size_t wcstombs(char* dest, const wchar_t* src, size_t max);
size_t mbstowcs(wchar_t* dest, const char* src, size_t max);
int _wcsnicmp(const wchar_t* wcs1, const wchar_t* wcs2, size_t num);
]]

local FStringMT = { __index = {} }

function FStringMT.__index:GetLuaString()
	if self.Data == nil then return "<NULL>" end
	
	local buff = ffi.new("char[?]", self.Count)
	-- TODO: This is not secure
	local size = ffi.C.wcstombs(buff, self.Data, self.Count)
	buff[self.Count - 1] = 0
	return ffi.string(buff, size)
end

function FStringMT.__index:IsValid()
	return self.Data ~= nil
end

FStringMT.__tostring = FStringMT.__index.GetLuaString

function FStringMT.__eq(self, cmp)
	if ffi.istype("struct FString", cmp) then
		if self.Data ~= nil and cmp.Data ~= nil then
			return ffi.C._wcsnicmp(self.Data, cmp.Data, self.Count) == 0
		end
	end

	return rawequal(self, cmp)
end

-- This will only be called if we've explicitly ffi.new'd a string (or implicitly through
-- FString.GetFromLuaString). The .Data is always allocated with the engine allocator,
-- so it's safe to free it with the engine allocator here also.
function FStringMT.__gc(self)
	if self == nil then print("FString was nil in __gc") return end
	print(string.format("FString GC: %d, 0x%X", self.Count, PtrToNum(self.Data)))
	print(tostring(self))
	memory.Free(self.Data)
	print("Memory freed")
end

ffi.metatype("struct FString", FStringMT)

local FString = {}

function FString.GetFromLuaString(str)
	local len = string.len(str) + 1
	local buff = memory.Malloc(2 * len) -- sizeof(wchar_t) * len
	ffi.C.mbstowcs(buff, str, len)
	print(string.format("FString.GetFromLuaString: %q, 0x%X", str, PtrToNum(buff)))
	return ffi.new("struct FString", buff, len, len)
end

return FString
