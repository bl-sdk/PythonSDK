local ffi = require("ffi")
local bit = require("bit")

ffi.cdef[[
struct UPackage* LUAFUNC_LoadPackage(struct UPackage* outer, const char* filename, unsigned long flags);
]]

local engine = engine
local error = error
local string = string

local function LoadPackage(name)
	local loadedPackage = ffi.C.LUAFUNC_LoadPackage(nil, name, 0)
	if loadedPackage == nil then
		error(string.format("Failed to load package %q", name))
	end

	-- Set the RF_RootSet flag on all the objects we loaded so they don't get
	-- garbage collected. TODO: This might have side effects.
	for i=0,(engine.Objects.Count-1) do
		local obj = engine.Objects[i]
		if obj == nil then goto continue end

		local pkg = obj:GetPackageObject()
		if pkg == loadedPackage then
			print("Loaded Object: " .. obj:GetFullName())
			obj.UObject.ObjectFlags.A = bit.bor(obj.UObject.ObjectFlags.A, 0x4000)
		end
		
		::continue::
	end

	return loadedPackage
end

-- Public functions
engine.LoadPackage = LoadPackage
