local ffi = require("ffi")
local setmetatable = setmetatable
local error = error
local type = type
local print = print
local setmetatable = setmetatable
local rawget = rawget
local memory = memory

local TArrayMT = {}

function TArrayMT.__index(self, idx)
	if type(idx) == "number" then
		if idx < self.Count and idx >= 0 then
			if self.Data[idx] ~= nil then
				return self.Data[idx]
			end
		else
			print("[TArray] Warning: Index out of range")
		end

		return nil
	end

	return rawget(self, idx)
	--error("TArray must be indexed by number")
end

-- Using pairs is probably slower than a normal for loop, but it's a tad more convenient
local function TArrayIter(obj, k)
	if k < (obj.Count - 1) then -- If current index is before the last index
		k = k + 1

		local v = obj.Data[k]
		if v ~= nil then
			return k, v
		else
			return TArrayIter(obj, k)
		end
	end
end

function TArrayMT.__pairs(self)
	return TArrayIter, self, -1 -- neg 1 because TArrayIter will increment this to 0
end

function TArrayMT.__ipairs(self)
	return TArrayIter, self, -1 -- neg 1 because TArrayIter will increment this to 0
end

function TArrayMT.__len(self)
	return self.Count
end

function TArrayMT.__gc(self)
	print(string.format("TArray GC: %d, 0x%X", self.Count, PtrToNum(self.Data)))
	memory.Free(self.Data)
end

ffi.metatype("struct TArray", TArrayMT)

local TArray = {}

function TArray.Create(innerType, cdata)
	local type = ffi.typeof([[
	struct {
		$* Data;
		int Count;
		int Max;
	}]], ffi.typeof(innerType))
	local type_mt = ffi.metatype(type, TArrayMT)
	local type_ptr = ffi.typeof("$ *", type_mt)

	local data = ffi.cast(type_ptr, cdata)

	--[[
	local mt = {
		__index = data,
		__newindex = function(self, k, v)
			error("Cannot set property '" .. k .. "' on TArray")
		end,
		--__pairs = TArrayMT.__pairs,
	}
	]]
	--local mt = TArrayMT

	--return setmetatable({}, mt)
	local mt = {}
	function mt.__index(self, idx)
		return data[0][idx]
	end
	
	return setmetatable({}, mt)
end

TArray.BaseMT = TArrayMT

return TArray
