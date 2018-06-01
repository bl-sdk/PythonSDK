local ffi = require("ffi")

local funcs = {}

function funcs.IsA(self, class)
	-- class is a table from engine.Classes
	local class_instance = class.static

	local superclass = self.UObject.Class

	while superclass ~= nil do
		if superclass == class_instance then
			return true
		end

		superclass = ffi.cast("struct UClass*", superclass.UStruct.SuperField)
	end

	return false
end

function funcs.GetName(self)
	return self.UObject.Name:GetName()
end

ffi.cdef[[
	struct std_string* LUAFUNC_UObjectGetFullName(struct UObject* obj);
]]

function funcs.GetFullName(self)
	local cast = ffi.cast("struct UObject*", self)

	local std_str = ffi.C.LUAFUNC_UObjectGetFullName(cast)
	local luaStr = std_str:ToLuaString()
	std_str:Delete()

	return luaStr
end

-- TOOD: Fix this steaming pile of shit.
function funcs.GetCName(self)
	local cname
	if self:IsA(engine.Classes.UClass) then
		cname = "U" -- Just a plain old object by default

		local class = ffi.cast("struct UClass*", self)
		while class ~= nil do
			if class:GetName() == "Actor" then
				cname = "A"
				break
			end
			class = ffi.cast("struct UClass*", class.UStruct.SuperField)
		end
	else
		cname = "F"
	end

	return cname .. self:GetName()
end

function funcs.GetPackageObject(self)
	local pkg
	local outer = self.UObject.Outer

	while outer ~= nil do
		pkg = outer
		outer = outer.UObject.Outer
	end

	return pkg
end

local UObject = {}
UObject.BaseFuncs = funcs

return UObject
