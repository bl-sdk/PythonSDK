local tonumber = tonumber
local debug = debug

function IsNull(ptr)
	return ptr == nil
end

function NotNull(ptr)
	return ptr ~= nil
end

local ffi = require("ffi")

local uint_t = ffi.typeof("unsigned int")
function PtrToNum(ptr)
	return tonumber(ffi.cast(uint_t, ptr))
end

require("luaextensions.math")
require("luaextensions.table")
require("luaextensions.string")
