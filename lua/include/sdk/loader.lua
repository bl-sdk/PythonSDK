local packages = { 
}

include("TArrayTypes.lua")

profiling.TrackMemory("loadsdk", "Loading everything")

for _,pkg in ipairs(packages) do
	profiling.TrackMemory("loadpackage", "Loading " .. pkg)
	include("include/sdk/consts/" .. pkg .. ".lua")
	include("include/sdk/enums/" .. pkg .. ".lua")
	include("include/sdk/structs/" .. pkg .. ".lua")
	include("include/sdk/classes/" .. pkg .. ".lua")
	include("include/sdk/funcs/" .. pkg .. ".lua")
	profiling.GetMemoryUsage("loadpackage")
end

profiling.GetMemoryUsage("loadsdk")

print("[SDKGen] Generated SDK loaded")
