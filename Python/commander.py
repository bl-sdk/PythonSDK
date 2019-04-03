import bl2sdk
import math

def convert_rotation(rotation):
	conversion = 65535.0 / math.pi / 2.0
	degree_pitch = rotation.Pitch / conversion
	degree_yaw = rotation.Yaw / conversion
	return degree_pitch, degree_yaw

def move_forward_backward(distance):
	pawn = engine.GamePlayers[0].Actor.AcknowledgedPawn
	position = pawn.Location
	pitch, yaw = convert_rotation(pawn.Rotation)
	position.Z += math.sin(pitch) * distance
	position.X += math.cos(yaw) * math.cos(pitch) * distance
	position.Y += math.sin(yaw) * math.cos(pitch) * distance

def noclip():
	pc = engine.GamePlayers[0].Actor
	pawn = pc.AcknowledgedPawn
	pc.WorldInfo.Game.AllowCheats(pc)
	if pc.bCheatFlying:
		pawn.Physics = 0x1
		pawn.PhysicsVolume.FluidFriction = 0.3
		pawn.MovementSpeedModifier = 1.0
		print("Disabling noclip")
		pc.bCheatFlying = False
		pawn.CheatWalk()
		pc.Restart(False)
		pawn.AccelRate = 2048
		pawn.AirSpeed = 440
	else:
		print("Enabling noclip")
		pawn.Physics = 0x4
		pawn.PhysicsVolume.FluidFriction = 2.0
		pawn.MovementSpeedModifier = 40
		pawn.CheatFly()
		pc.bCheatFlying = True
		pc.ClientGotoState(bl2sdk.FName("PlayerFlying"), bl2sdk.FName())
		pawn.AccelRate = 20000
		pawn.AirSpeed = 3000
		pawn.CheatGhost()


def process_input(caller, function, parms, result):
    ControllerId = parms.popInt()
    Key = parms.popFName()
    EventType = parms.popByte()
    if EventType == 0:
        name = Key.GetName()
        if name == 'NumPadEight':
        	move_forward_backward(100)
        if name == 'NumPadFive':
        	noclip()


engine = bl2sdk.UObject.FindObjectByFullName("WillowGameEngine Transient.WillowGameEngine")
bl2sdk.RemoveEngineHook("Function WillowGame.WillowGameViewportClient.InputKey", "DoCommanderThings")
bl2sdk.RegisterEngineHook("Function WillowGame.WillowGameViewportClient.InputKey", "DoCommanderThings", process_input)
