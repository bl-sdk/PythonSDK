import bl2sdk
import math

class Controller():
	CurrentKeys = set()
	isThirdPerson = False

	def process_input(self, caller, function, parms, result):
		ControllerId = parms.popInt()
		Key = parms.popFName()
		EventType = parms.popByte()
		name = Key.GetName()
		if EventType == 0:
			self.CurrentKeys.add(name)
			if 'LeftControl' in self.CurrentKeys or 'RightControl' in self.CurrentKeys:
				if name == 'Up':
					move_forward_backward(100)
				if name == 'Down':
					move_forward_backward(-100)
				if name == 'Left':
					move_left_right(-100)
				if name == 'Right':
					move_left_right(100)
			if 'NumPadNine' == name:
				self.toggle_third_person()
		elif EventType == 1 and name in self.CurrentKeys:
			self.CurrentKeys.remove(name)

	def toggle_third_person(self):
		engine = bl2sdk.GetEngine()
		pc = engine.GamePlayers[0].Actor
		new_mode = 'camera ' + ('1st' if self.isThirdPerson else '3rd')
		pc.ConsoleCommand(bl2sdk.FString(new_mode), 0)
		print(new_mode)
		self.isThirdPerson = not self.isThirdPerson

def convert_rotation(rotation):
	conversion = 65535.0 / math.pi / 2.0
	degree_pitch = rotation.Pitch / conversion
	degree_yaw = rotation.Yaw / conversion
	return degree_pitch, degree_yaw

def move_forward_backward(distance):
	engine = bl2sdk.GetEngine()
	pawn = engine.GamePlayers[0].Actor.AcknowledgedPawn
	position = pawn.Location
	pitch, yaw = convert_rotation(pawn.Rotation)
	position.Z += math.sin(pitch) * distance
	position.X += math.cos(yaw) * math.cos(pitch) * distance
	position.Y += math.sin(yaw) * math.cos(pitch) * distance

def move_left_right(distance):
	engine = bl2sdk.GetEngine()
	pawn = engine.GamePlayers[0].Actor.AcknowledgedPawn
	position = pawn.Location
	pitch, yaw = convert_rotation(pawn.Rotation)
	position.X += math.cos(yaw + math.pi / 2) * distance
	position.Y += math.sin(yaw + math.pi / 2) * distance


bl2sdk.RemoveEngineHook("Function WillowGame.WillowGameViewportClient.InputKey", "DoCommanderThings")
bl2sdk.RegisterEngineHook("Function WillowGame.WillowGameViewportClient.InputKey", "DoCommanderThings", Controller().process_input)


# def noclip():
#	 pc = engine.GamePlayers[0].Actor
#	 pawn = pc.AcknowledgedPawn
#	 pc.WorldInfo.Game.AllowCheats(pc)
#	 if pc.bCheatFlying:
#		 pawn.Physics = 0x1
#		 pawn.PhysicsVolume.FluidFriction = 0.3
#		 pawn.MovementSpeedModifier = 1.0
#		 print("Disabling noclip")
#		 pc.bCheatFlying = False
#		 pawn.CheatWalk()
#		 pc.Restart(False)
#		 pawn.AccelRate = 2048
#		 pawn.AirSpeed = 440
#	 else:
#		 print("Enabling noclip")
#		 pawn.Physics = 0x4
#		 pawn.PhysicsVolume.FluidFriction = 2.0
#		 pawn.MovementSpeedModifier = 40
#		 pawn.CheatFly()
#		 pc.bCheatFlying = True
#		 pc.ClientGotoState(bl2sdk.FName("PlayerFlying"), bl2sdk.FName())
#		 pawn.AccelRate = 20000
#		 pawn.AirSpeed = 3000
#		 pawn.CheatGhost()
