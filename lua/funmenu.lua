local ffi = require("ffi")

local P = {}
local pluginName = "funmenu"

function P.ToggleFly()
end


function ToggleNoclip()
	print("Toggling Noclip")

	local pc = LocalPC()
	local pawn = pc.AcknowledgedPawn
	
	if pc.bCheatFlying then
		pc.bCheatFlying = false
		pawn:CheatWalk()
		pc:Restart(false)

		pawn.AccelRate = 2048
		pawn.AirSpeed = 440
	else
		pawn:CheatFly()
		pc.bCheatFlying = true
		pc:ClientGotoState("PlayerFlying")

		pawn.AccelRate = 20000
		pawn.AirSpeed = 3000

		pawn:CheatGhost()
	end
end

function P.ToggleGod()
end

function P.TeleportToPlayer(player)
end

function P.BringPlayer(player)
end

function P.TeleportToPosition(x, y, z)
end

function P.TeleportToLocation(location)
end

function P.KillEnemies()
end

function P.KickPlayer(player)
end

function P.BanPlayer(player)
end