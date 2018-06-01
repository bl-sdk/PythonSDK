local ffi = require("ffi")

local P = {}
local pluginName = "template"

function P.ExampleHook()

end

function P.PrerenderCallbacks()

end

function P.initialize()
	addEngineHook("Function WillowGame.WillowSeqAct_BossBar:Activated", pluginName..".ExampleHook")
	addPrerenderCallback(pluginName..".PrerenderCallback")
end

function P.cleanup()
	removeEngineHook(pluginName..".ExampleHook")
	removePrerenderCallback(pluginName..".PrerenderCallback")
end