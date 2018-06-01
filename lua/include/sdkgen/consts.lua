local ffi = require("ffi")
local engine = engine
local Package = SDKGen.Package

local GeneratedConsts = {}
local DefaultConst = engine.FindObject("Const Core.Default__Const", engine.Classes.UConst)

local function FixConstValue(value)
	if string.sub(value, -1) == "f" then -- Floats in C++ have the f at the end
		return string.sub(value, 1, -2) -- Remove it
	else
		return value
	end
end

local function CountName(idx)
	local count = 0
	for _,v in ipairs(GeneratedConsts) do
		if v.Index == idx then
			count = count + 1
		end
	end

	return count
end

local function SameNameValue(idx, value)
	for _,v in ipairs(GeneratedConsts) do
		if v.Index == idx and v.Value == value then
			return true
		end
	end

	return false
end

function Package:ProcessConst(const)
	if const == DefaultConst then return end

	SDKGen.DebugPrint("[SDKGen] Constant " .. const:GetFullName())

	local value = const.UConst.Value:GetLuaString()
	local idx = const.UObject.Name.Index

	local nameCount = CountName(idx)
	if nameCount == 0 then
		local name = const:GetName()

		self.File:write(string.format("UCONST_%s = %s\n", name, FixConstValue(value)))
		table.insert(GeneratedConsts, { Value = value, Index = idx })
	elseif not SameNameValue(idx, value) then
		local name = const:GetName()

		SDKGen.AddError("Duplicate constant name " .. const:GetFullName())

		self.File:write(string.format("UCONST_%s%d = %s\n", name, nameCount, FixConstValue(value)))
		table.insert(GeneratedConsts, { Value = value, Index = idx })
	end
end


function Package:ProcessConstants()
	self:CreateFile("consts")
	self:WriteFileHeader("Constants")

	-- Foreach object, check if it's a const, then check if it's in the package.
	-- If it is, then process the const
	for i=0,(engine.Objects.Count-1) do

		local obj = engine.Objects[i]
		if IsNull(obj) then goto continue end

		local package_object = obj:GetPackageObject()
		if IsNull(package_object) then goto continue end
		if package_object ~= self.PackageObj then goto continue end

		if not obj:IsA(engine.Classes.UConst) then goto continue end

		obj = ffi.cast("struct UConst*", obj)

		self:ProcessConst(obj)

		::continue::
	end

	self:CloseFile()
end