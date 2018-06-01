local ffi = require("ffi")
local GEngine = ffi.cast("struct UWillowGameEngine*", engine.FindObjectExactClass("WillowGameEngine Transient.WillowGameEngine_0", engine.Classes.UWillowGameEngine))

function LocalPlayer()
	return GEngine.UEngine.GamePlayers[0]
end

function LocalPC()
	return GEngine.UEngine.GamePlayers[0].UPlayer.Actor
end
