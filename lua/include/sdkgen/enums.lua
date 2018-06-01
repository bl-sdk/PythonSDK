local ffi = require("ffi")
local engine = engine
local Package = SDKGen.Package

local DefaultEnum = engine.FindObject("Enum Core.Default__Enum", engine.Classes.UEnum)

function Package:ProcessEnum(enum)
	if enum == DefaultEnum then return end

	SDKGen.DebugPrint("[SDKGen] Enum " .. enum:GetFullName())

	local enumText = string.format("enum.MakeEnum(\"%s\", {\n", enum:GetName())

	local processedNames = {}
	local names = enum.UEnum.Names

	for i=0,(names.Count-1) do
		local name = names.Data[i]:GetName()

		enumText = enumText .. "\t\"" .. name

		if processedNames[name] ~= nil then
			enumText = enumText .. tostring(processedNames[name])
			SDKGen.AddError("Duplicate enum identifier " .. name .. " in " .. enum:GetFullName())
			processedNames[name] = processedNames[name] + 1
		else
			processedNames[name] = 1
		end

		enumText = enumText .. "\""

		if i ~= (names.Count-1) then -- It's not the last one, so put a comma on the end
			enumText = enumText .. ","
		end

		enumText = enumText .. "\n"
	end

	enumText = enumText .. "})\n\n"

	self.File:write(enumText)
end


function Package:ProcessEnums()
	self:CreateFile("enums")
	self:WriteFileHeader("Enums")

	-- Foreach object, check if it's an enum, then check if it's in the package.
	-- If it is, then process the enum
	for i=0,(engine.Objects.Count-1) do

		local obj = engine.Objects[i]
		if IsNull(obj) then goto continue end

		local package_object = obj:GetPackageObject()
		if IsNull(package_object) then goto continue end
		if package_object ~= self.PackageObj then goto continue end

		if not obj:IsA(engine.Classes.UEnum) then goto continue end

		obj = ffi.cast("struct UEnum*", obj)

		self:ProcessEnum(obj)

		::continue::
	end

	self:CloseFile()
end