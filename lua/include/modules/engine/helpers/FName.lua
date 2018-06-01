local ffi = require("ffi")
local Names = engine.Names

local FNameMT = { __index = {} }

function FNameMT.__index.GetName(self)
	return ffi.string(Names[self.Index].Name)
end

function FNameMT.__eq(self, cmp)
	if type(cmp) ~= "string" then 
		return rawequal(self, cmp)
	else
		return self:GetName() == cmp
	end
end

function FNameMT.__tostring(self)
	return self:GetName()
end

ffi.metatype("struct FName", FNameMT)
