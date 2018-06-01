local ffi = require("ffi")
local bit = require("bit")
local engine = engine
local Package = SDKGen.Package
local DefaultClass = engine.FindObject("Class Core.Default__Class", engine.Classes.UClass)

local CPF_OptionalParm = 0x0000000000000010
local CPF_Parm = 0x0000000000000080
local CPF_OutParm = 0x0000000000000100
local CPF_SkipParm = 0x0000000000000200
local CPF_ReturnParm = 0x0000000000000400

local FUNC_Event = 0x00000800

function Package:ProcessClassForFuncs(class)
	if class == DefaultClass then return end

	self.File:write(string.format("c[%q] = {\n", class:GetCName()))

	local classProperty = ffi.cast("struct UProperty*", class.UStruct.Children)
	while NotNull(classProperty) do
		if classProperty:IsA(engine.Classes.UFunction) then
			self:ProcessFunction(ffi.cast("struct UFunction*", classProperty))
		end
		classProperty = ffi.cast("struct UProperty*", classProperty.UField.Next)
	end

	self.File:write("}\n")
end

local function ProcessRetval(field)
	local text = "\t\t\t{\n"

	-- Name
	text = text .. string.format("\t\t\t\tname = %q,\n", field:GetName())

	-- We're some kind of return value (out parm)
	text = text .. "\t\t\t\tisRet = true,\n"

	-- Object Index
	text = text .. string.format("\t\t\t\tindex = %d,\n", field.UObject.Index)

	-- Out parm => needs an FOutParmRec when called
	local fieldflags = field.UProperty.PropertyFlags.A
	if flags.IsSet(fieldflags, CPF_OutParm) and not flags.IsSet(fieldflags, CPF_ReturnParm) then
		text = text .. "\t\t\t\tisOutParm = true,\n"
	end

	-- Type
	local propData = SDKGen.GetPropertyTypeData(field)
	if not propData then return "" end
	local propType = SDKGen.GetPropertyType(field)

	-- not basic means it's cdata, and not objPointer means that it's cdata, but a pointer
	-- so it doesn't need to be cloned.
	if not propData.basic and not propData.objPointer then
		text = text .. string.format("\t\t\t\tcType = ffi.typeof(%q),\n", propType)
	end

	text = text .. string.format("\t\t\t\tcastTo = ffi.typeof(%q),\n", propType .. "*")

	-- Byte properties usually mean an enum, so list that
	if field:IsA(engine.Classes.UByteProperty) then
		field = ffi.cast("struct UByteProperty*", field)
		if NotNull(field.UByteProperty.Enum) then
			text = text .. string.format("\t\t\t\tenumName = %q,\n", field.UByteProperty.Enum:GetName())
		end
	end

	-- TArray and FStrings need a flag so we can free them properly later on
	if field:IsA(engine.Classes.UArrayProperty) or field:IsA(engine.Classes.UStrProperty) then
		text = text .. "\t\t\t\tTArray = true,\n"
	end

	-- Offset and closing bracket
	text = text .. string.format("\t\t\t\toffset = %d\n\t\t\t},\n", field.UProperty.Offset)

	return text
end

local function ProcessArgument(field)
	local text = "\t\t\t{\n"

	-- Name
	text = text .. string.format("\t\t\t\tname = %q,\n", field:GetName())

	-- Object Index
	text = text .. string.format("\t\t\t\tindex = %d,\n", field.UObject.Index)

	-- Optional or not
	if flags.IsSet(field.UProperty.PropertyFlags.A, CPF_OptionalParm) then
		text = text .. "\t\t\t\toptional = true,\n"
	end

	-- Type
	local propData = SDKGen.GetPropertyTypeData(field)
	if not propData then return "" end
	local propType = SDKGen.GetPropertyType(field)

	local flags = 0

	if not propData.basic then -- not basic means it's cdata
		if field:IsA(engine.Classes.UClassProperty) then
			flags = bit.bor(flags, FUNCPARM_CLASS)
		elseif field:IsA(engine.Classes.UNameProperty) then
			flags = bit.bor(flags, FUNCPARM_NAME)
		elseif field:IsA(engine.Classes.UStrProperty) then
			flags = bit.bor(flags, FUNCPARM_STRING)
		elseif field:IsA(engine.Classes.UStructProperty) then
			flags = bit.bor(flags, FUNCPARM_STRUCT)
		elseif field:IsA(engine.Classes.UArrayProperty) then
			flags = bit.bor(flags, FUNCPARM_TARRAY)
		end

		if field:IsA(engine.Classes.UObjectProperty) and not field:IsA(engine.Classes.UClassProperty) then
			flags = bit.bor(flags, FUNCPARM_OBJPOINTER)
			field = ffi.cast("struct UObjectProperty*", field)
			text = text .. string.format("\t\t\t\tclassName = %q,\n", field.UObjectProperty.PropertyClass:GetCName())
			propType = "struct UObject*"
		else
			text = text .. string.format("\t\t\t\ttype = ffi.typeof(%q),\n", propType)
		end
	else
		flags = bit.bor(flags, FUNCPARM_LUATYPE)
		text = text .. string.format("\t\t\t\ttype = %q,\n", propData.lua)
	end

	text = text .. string.format("\t\t\t\tcastTo = ffi.typeof(%q),\n", propType .. "*")

	-- Byte properties usually mean an enum, so list that
	if field:IsA(engine.Classes.UByteProperty) then
		field = ffi.cast("struct UByteProperty*", field)
		if NotNull(field.UByteProperty.Enum) then
			text = text .. string.format("\t\t\t\tenumName = %q,\n", field.UByteProperty.Enum:GetName())
		end
	end

	-- Write flags
	text = text .. string.format("\t\t\t\tflags = %d,\n", flags)

	-- Offset and closing bracket
	text = text .. string.format("\t\t\t\toffset = %d\n\t\t\t},\n", field.UProperty.Offset)

	return text
end

function Package:ProcessFunction(func)
	-- First, we'll get all the fields and sort them
	local fields = {}
	local funcProperty = ffi.cast("struct UProperty*", func.UStruct.Children)
	while NotNull(funcProperty) do
		if funcProperty.UProperty.ElementSize > 0 then
			table.insert(fields, funcProperty)
		end

		funcProperty = ffi.cast("struct UProperty*", funcProperty.UField.Next)
	end

	table.sort(fields, SDKGen.SortProperty)

	-- Now we'll go through them and separate them into args and return values
	local luaFields = ""
	local retVal = nil

	for _,field in ipairs(fields) do
		if field:IsA(engine.Classes.UArrayProperty) then
			field = ffi.cast("struct UArrayProperty*", field)

			local innerProperty = field.UArrayProperty.Inner

			-- Check if we need to generate the TArray template for the inner type
			-- and do it if we need to.
			if not SDKGen.TArrayTypes.IsGenerated(innerProperty) then
				SDKGen.TArrayTypes.Generate(innerProperty)
			end
		end

		local funcflags = field.UProperty.PropertyFlags.A
		if flags.IsSet(funcflags, CPF_OutParm) then
			-- If it's the return value, we want that first in the fields list
			if flags.IsSet(funcflags, CPF_ReturnParm) then
				luaFields = ProcessRetval(field) .. luaFields
				retVal = field
			else
				luaFields = luaFields .. ProcessRetval(field)
			end
		elseif flags.IsSet(funcflags, CPF_Parm) then
			-- It's just a regular old arg
			luaFields = luaFields .. ProcessArgument(field)
		end
	end

	local name = func:GetName()
	if flags.IsSet(func.UFunction.FunctionFlags, FUNC_Event) then
		name = "event" .. name
	end

	self.File:write(string.format("\t[%q] = {\n", name))

	self.File:write("\t\tfields = {\n")
	self.File:write(luaFields)
	self.File:write("\t\t},\n")

	self.File:write(string.format("\t\tdataSize = %d,\n", func.UStruct.PropertySize))
	self.File:write(string.format("\t\tindex = %d,\n", func.UObject.Index))

	if retVal ~= nil then
		self.File:write(string.format("\t\tretOffset = %d,\n", retVal.UProperty.Offset))
	end

	self.File:write("\t},\n")
end

function Package:ProcessFunctions()
	self:CreateFile("funcs")
	self:WriteFileHeader("Function structures")
	self.File:write("local ffi = require(\"ffi\")\nlocal c = g_classFuncs\n\n")

	-- Foreach object, check if it's a class, then check if it's in the package.
	-- If it is, then process the class, in turn processing all the functions in it.
	for i=0,(engine.Objects.Count-1) do
		local obj = engine.Objects[i]
		if IsNull(obj) then goto continue end

		local package_object = obj:GetPackageObject()
		if IsNull(package_object) then goto continue end
		if package_object ~= self.PackageObj then goto continue end

		if not obj:IsA(engine.Classes.UClass) then goto continue end

		self:ProcessClassForFuncs(ffi.cast("struct UClass*", obj)) -- Get all the function defs

		::continue::
	end

	self:WriteClassMetaData()
	self:CloseFile()
end
