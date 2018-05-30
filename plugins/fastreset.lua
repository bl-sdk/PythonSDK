local ffi = require("ffi")

local P = {}
local pluginName = "fastreset"

local function P.Reset()
end

function P.ExampleHook()

end

function P.ExampleCallback()

end

function P.initialize()
	addEngineHook("Function WillowGame.WillowSeqAct_BossBar:Activated", pluginName..".ExampleHook")
end

function P.cleanup()
	removeEngineHook(pluginName..".ExampleHook")
end

return P