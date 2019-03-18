# local ffi = require("ffi")
# local setmetatable = setmetatable
# local error = error
# local type = type
# local print = print
# local setmetatable = setmetatable
# local rawget = rawget
# local memory = memory
from cffi import FFI
import BL2SDK

ffi = FFI()


class TArray():
	data = None
	inner_type = None
	def __init__(self, inner_type, cdata):
		if inner_type in BL2SDK.g_TArrayTypes:
			self.data = ffi.cast("struct TArray_{} *".format(inner_type), cdata)
			self.inner_type = inner_type

	def __getitem__(self, indices):
		return ffi.cast("struct TArray_{}".format(self.inner_type), self.data[0].data[indices]) 

# function TArrayMT.__index(self, idx)
# 	if type(idx) == "number" then
# 		if idx < self.Count and idx >= 0 then
# 			if self.Data[idx] ~= nil then
# 				return self.Data[idx]
# 			end
# 		else
# 			print("[TArray] Warning: Index out of range")
# 		end

# 		return nil
# 	end

# 	return rawget(self, idx)
# 	--error("TArray must be indexed by number")
# end

# -- Using pairs is probably slower than a normal for loop, but it's a tad more convenient
# local function TArrayIter(obj, k)
# 	if k < (obj.Count - 1) then -- If current index is before the last index
# 		k = k + 1

# 		local v = obj.Data[k]
# 		if v ~= nil then
# 			return k, v
# 		else
# 			return TArrayIter(obj, k)
# 		end
# 	end
# end

# function TArrayMT.__pairs(self)
# 	return TArrayIter, self, -1 -- neg 1 because TArrayIter will increment this to 0
# end

# function TArrayMT.__ipairs(self)
# 	return TArrayIter, self, -1 -- neg 1 because TArrayIter will increment this to 0
# end

# function TArrayMT.__len(self)
# 	return self.Count
# end

# function TArrayMT.__gc(self)
# 	print(string.format("TArray GC: %d, 0x%X", self.Count, PtrToNum(self.Data)))
# 	memory.Free(self.Data)
# end

# ffi.metatype("struct TArray", TArrayMT)


# TArray.BaseMT = TArrayMT

# return TArray
