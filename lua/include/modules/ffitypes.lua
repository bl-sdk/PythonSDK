local ffi = require("ffi")

--[[
CAUTION: DO NOT USE THIS TYPE UNLESS YOU REALLY KNOW WHAT YOU'RE DOING.
]]

ffi.cdef[[
	// Needed since default bool in LuaJIT is 1 byte and screws with alignment
	typedef _Bool int BOOL;

	// Taken from xstring in VC source (class _String_val)
	struct std_string {
		union _Bxty
		{
			char _Buf[16];
			char* _Ptr;
		} _Bx;

		size_t _Mysize;
		size_t _Myres;
	};

	void LUAFUNC_DeleteString(struct std_string* str);
]]

local stdStringMT = { __index = {} }

function stdStringMT.__index.Delete(self)
	ffi.C.LUAFUNC_DeleteString(self)
end

function stdStringMT.__index.Ptr(self)
	if self._Myres >= 16 then
		return self._Bx._Ptr
	else
		return self._Bx._Buf
	end
end

function stdStringMT.__index.ToLuaString(self)
	return ffi.string(self:Ptr())
end

ffi.metatype("struct std_string", stdStringMT)
