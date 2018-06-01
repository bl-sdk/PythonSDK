--require("jit.v")
--jit.v.on("jitv.txt")

g_loadedClasses = {}
g_classFuncs = {}
g_TArrayTypes = {}

-- Load extensions to the Lua standard library
require("luaextensions")

-- Some types used in FFI
require("ffitypes")

-- Profiling library
profiling = require("profiling")

-- Flags
flags = require("flags")

-- OO Helpers
oo = require("oo")

-- Enum library
enum = require("enum")

-- Engine memory allocator library
memory = require("memory")

-- Load Unreal Engine interface
require("engine")

local function NeedsSDKGenerated()
	local generateSDK = true

	if file.Exists("sdkgen/version.lua") then
		include("../sdkgen/version.lua")

		if SDKGEN_ENGINE_VERSION == bl2sdk.EngineVersion and
		SDKGEN_CHANGELIST_NUMBER == bl2sdk.ChangeListNumber and
		SDKGEN_BL2SDK_VERSION == bl2sdk.SDKVersion then
			generateSDK = false
		end
	end

	return generateSDK
end

-- Security
package.preload.ffi = nil
package.loaders[3] = nil
package.loaders[4] = nil

if NeedsSDKGenerated() then
	-- Log calls to the slow object index if we're generating the SDK
	engine.LogSlowObjectIndex(true)
	engine.Initialize()
	include("sdkgen/sdkgen.lua")
else
	file = nil
	
	include("../sdkgen/loader.lua")
	engine.Initialize()

	-- Some convenience MTs for engine types
	require("engine.helpers.FColor")

	engineHook = require("engineHook")
	scriptHook = require("scriptHook")

	require("localPC")

	command = require("command")
	include("luacommands.lua")

	canvas = require("canvas")

	-- package.loaded.ffi.cdef = nil -- No more defining

	function OnShutdown()
		scriptHook.RemoveAll()
		engineHook.RemoveAll()
	end
end

--jit.v.off()
