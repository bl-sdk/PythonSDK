local ffi = require("ffi")
local engine = engine

local GeneratedTArrays = { "FName", "char" } -- An array of inner type name strings
local TARRAY_TEMPLATE = [[%s
struct TArray_%s {
	%s* Data;
	int Count;
	int Max;
};
]]

local defFile = false

local TArrayTypes = {}

function TArrayTypes.Init()
	if not defFile then defFile = file.Open("sdkgen/TArrayTypes.lua", "w+") end
	
	defFile:write(
[[-- ###################################
-- # Borderlands 2 SDK
-- # File Contents: TArray definitions
-- ###################################

local ffi = require("ffi")

ffi.cdef[[
]]
	)
end

-- innerType should be a UProperty*
function TArrayTypes.IsGenerated(innerType)
	local propTypeClean = SDKGen.GetCleanPropertyType(innerType)
	return table.contains(GeneratedTArrays, propTypeClean)
end

function TArrayTypes.Generate(innerType)
	local propType = SDKGen.GetPropertyType(innerType)
	local propTypeClean = SDKGen.GetCleanPropertyType(innerType)
	local propTypeData = SDKGen.GetPropertyTypeData(innerType)

	local forwardDec = ""
	if propTypeData.generated then
		forwardDec = "\n" .. string.gsub(propType, "*", "") .. ";"
	end

	table.insert(GeneratedTArrays, propTypeClean)

	SDKGen.DebugPrint("[SDKGen] TArray for " .. propType)

	defFile:write(string.format(TARRAY_TEMPLATE, forwardDec, propTypeClean, propType))
end

function TArrayTypes.Finalize()
	defFile:write("]]\n\n")

	for _,v in ipairs(GeneratedTArrays) do
		defFile:write("table.insert(g_TArrayTypes, \"" .. v .. "\")\n")
	end

	defFile:close()
end

SDKGen.TArrayTypes = TArrayTypes
