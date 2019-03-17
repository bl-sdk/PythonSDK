local packages = {
"Core",
"Engine",
"GameFramework",
"GfxUI",
"GearboxFramework",
"WillowGame",
"AkAudio",
"IpDrv",
"WinDrv",
"XAudio2",
"OnlineSubsystemSteamworks"
}

include("TArrayTypes.lua")

for _,pkg in ipairs(packages) do
	profiling.TrackMemory("loadpackage", "Loading " .. pkg)
	include("consts/" .. pkg .. ".lua")
	include("enums/" .. pkg .. ".lua")
	include("structs/" .. pkg .. ".lua")
	include("classes/" .. pkg .. ".lua")
	include("funcs/" .. pkg .. ".lua")
	profiling.GetMemoryUsage("loadpackage")
end

profiling.GetMemoryUsage("loadsdk")

print("[SDKGen] Generated SDK loaded")
