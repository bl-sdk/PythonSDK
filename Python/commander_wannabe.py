import bl2sdk
import math


class Commander(bl2sdk.BL2MOD):
	Name = "Commander"
	Description =  "Do Commander things!"

	def Enable(self):
		bl2sdk.RegisterEngineHook("Function WillowGame.WillowGameViewportClient.InputKey", "CommanderHook", Commander().handleInput)

	def Disable(self):
		bl2sdk.RemoveEngineHook("Function WillowGame.WillowGameViewportClient.InputKey", "CommanderHook")


	###########################
	###### USER SETTINGS ######
	###########################

	ShowFeedback = True
	Bindings = "symbol"
	# Bindings = "numpad"


	###########################
	########## CODE ###########
	###########################

	def Feedback(self, feedback):
		print(feedback)
		# If the user has feedback enabled, we will display their actions in
		# ingame chat.
		if self.ShowFeedback:
			# Get the current player controller object, and use it to perform
			# a "say" console command with the feedback message.
			playerController = bl2sdk.GetEngine().GamePlayers[0].Actor
			playerController.ConsoleCommand(bl2sdk.FString("say " + feedback), 0)


	ControlPressed = False

	KeysEnabled = True

	def handleInput(self, caller, function, parms, result):
		# Pop the controller ID off the parameters (we will not be using it).
		parms.popInt()

		# Pop the key for the event off the parameters, and look up its name.
		key = parms.popFName().GetName()
		# Pop the event type off the parameters.
		event = parms.popByte()

		# An event of 0 correlates to the key being pressed.
		if event == 0:

			if key == 'LeftControl' or key == 'RightControl':
				self.ControlPressed = True

			# elif key == 'F7':
			# 	self.KeysEnabled = not KeysEnabled

			elif key == 'Equals':
				self.ToggleThirdPerson()

			elif key == 'LeftBracket':
				self.HalveGameSpeed()
			elif key == 'RightBracket':
				self.DoubleGameSpeed()
			elif key == 'Backslash':
				self.ResetGameSpeed()

			elif key == 'Semicolon':
				self.ToggleHUD()
			elif key == 'Quote':
				self.ToggleDamageNumbers()

			elif key == 'Comma':
				self.RestorePosition()
			elif key == 'Period':
				self.SavePosition()
			elif key == 'Slash':
				self.TogglePlayersOnly()

			elif key == 'Up' and self.ControlPressed:
				self.MoveForwardBackward(250)
			elif key == 'Down' and self.ControlPressed:
				self.MoveForwardBackward(-250)
			# elif self.ControlPressed and key == 'Left':
			# 	self.MoveLeftRight(-250)
			# elif self.ControlPressed and key == 'Right':
			# 	self.MoveLeftRight(250)

			elif key == 'End' and self.ControlPressed:
				self.QuitWithoutSaving()

		# An event of 1 correlates to the key being released.
		elif event == 1:
			if key == 'LeftControl' or key == 'RightControl':
				self.ControlPressed = False


	def ToggleThirdPerson(self):
		# Assume our local player controller is the first in the engine's list.
		playerController = bl2sdk.GetEngine().GamePlayers[0].Actor
		# Check the state of the current player controller's camera. If it is
		# in third person, we will be switching to first, and vice versa.
		camera = "3rd" if playerController.UsingFirstPersonCamera() else "1st"
		# Perform the "camera" console command using the player controller, with
		# the argument as determined above.
		playerController.ConsoleCommand(bl2sdk.FString("camera " + camera), 0)


	def HalveGameSpeed(self):
		worldInfo = bl2sdk.GetEngine().GetCurrentWorldInfo()
		gameInfo = worldInfo.Game

		speed = gameInfo.GameSpeed / 2
		self.Feedback("Game Speed: %s" % speed)
		gameInfo.GameSpeed = speed
		worldInfo.TimeDilation = speed


	def DoubleGameSpeed(self):
		worldInfo = bl2sdk.GetEngine().GetCurrentWorldInfo()
		gameInfo = worldInfo.Game

		speed = gameInfo.GameSpeed * 2
		self.Feedback("Game Speed: %s" % speed)
		gameInfo.GameSpeed = speed
		worldInfo.TimeDilation = speed


	def ResetGameSpeed(self):
		worldInfo = bl2sdk.GetEngine().GetCurrentWorldInfo()
		gameInfo = worldInfo.Game

		self.Feedback("Game Speed: 1")
		gameInfo.GameSpeed = 1
		worldInfo.TimeDilation = 1


	def ToggleHUD(self):
		playerController = bl2sdk.GetEngine().GamePlayers[0].Actor
		playerController.ConsoleCommand(bl2sdk.FString("ToggleHUD"), 0)


	ShowDamageNumbers = True

	def ToggleDamageNumbers(self):
		# Save the inversion of our damage number visibility.
		self.ShowDamageNumbers = not self.ShowDamageNumbers
		# Format the string to be printed as feedback to the user.
		self.Feedback("Damage numbers: " + ("On" if self.ShowDamageNumbers else "Off"))

		# The object we will be modifying to affect damage number display.
		emitterObject = "FX_CHAR_Damage_Matrix.Particles.Part_Dynamic_Number"
		# The format of the particle sprite emitter object references as they
		# will appear in the object.
		spriteFormat = "ParticleSpriteEmitter'" + emitterObject + ":ParticleSpriteEmitter_%i'"

		# An array of the particle sprite emitter object suffixes, in order of
		# how they appear in the emitter array.
		spriteSuffixes = [1, 3, 0, 17, 5, 9, 8, 16, 7, 6, 10, 13, 12, 14, 11, 2, 4]

		# Create an array to store the full damage number emitter objects.
		sprites = []
		for index in range(len(spriteSuffixes)):
			# If we are hiding damage numbers, specific damage number sprite
			# emitter objects should be set to None.
			showSprite = self.ShowDamageNumbers or (index != 0 and index != 1)
			sprites.append((spriteFormat % spriteSuffixes[index]) if showSprite else "None")

		# Format the array of emitter objects by separating each emitter with a
		# comma, and surrounding them in parentheses.
		spriteArray = "(" + ",".join(sprites) + ")"
		# Format the set command to apply the change.
		setCommand = "set %s Emitters %s" % (emitterObject, spriteArray)

		playerController = bl2sdk.GetEngine().GamePlayers[0].Actor
		playerController.ConsoleCommand(bl2sdk.FString(setCommand), 0)


	def GetRotationAndLocation(self):
		# Assume our local player controller is the first in the engine's list.
		playerController = bl2sdk.GetEngine().GamePlayers[0].Actor
		# Our rotation struct is stored in the player controller, while our
		# location struct is stored in its associated pawn object.
		return playerController.Rotation, playerController.Pawn.Location

	def ConvertPitchAndYaw(self, rotation):
		# Compute the convertion from the engine's angle units to radians.
		radiansConversion = 65535.0 / math.pi / 2.0
		return rotation.Pitch / radiansConversion, rotation.Yaw / radiansConversion


	X = 0
	Y = 0
	Z = 0
	Pitch = 0
	Yaw = 0


	def SavePosition(self):
		rotation, location = self.GetRotationAndLocation()

		self.X = location.X
		self.Y = location.Y
		self.Z = location.Z
		self.Pitch = rotation.Pitch
		self.Yaw = rotation.Yaw

		self.Feedback("Saved Position")


	def RestorePosition(self):
		rotation, location = self.GetRotationAndLocation()

		location.X = self.X
		location.Y = self.Y
		location.Z = self.Z
		rotation.Pitch = self.Pitch
		rotation.Yaw = self.Yaw

		self.Feedback("Restored Position")


	def TogglePlayersOnly(self):
		# Get the current WorldInfo object from the engine.
		worldInfo = bl2sdk.GetEngine().GetCurrentWorldInfo()
		# Get the WorldInfo's current players only state.
		playersOnly = worldInfo.bPlayersOnly

		# Display the state we will be switching to to the user.
		self.Feedback("Players Only: " + ("Off" if playersOnly else "On"))
		# Apply the change.
		worldInfo.bPlayersOnly = not playersOnly


	def MoveForwardBackward(self, distance):
		rotation, location = self.GetRotationAndLocation()
		pitch, yaw = self.ConvertPitchAndYaw(rotation)

		location.Z += math.sin(pitch) * distance
		location.X += math.cos(yaw) * math.cos(pitch) * distance
		location.Y += math.sin(yaw) * math.cos(pitch) * distance


	def MoveLeftRight(self, distance):
		rotation, location = self.GetRotationAndLocation()
		pitch, yaw = self.ConvertPitchAndYaw(rotation)

		location.X += math.cos(yaw) * distance
		location.Y += math.sin(yaw) * distance


	def QuitWithoutSaving(self):
		playerController = bl2sdk.GetEngine().GamePlayers[0].Actor
		playerController.ConsoleCommand(bl2sdk.FString("disconnect"), 0)

bl2sdk.Mods.append(Commander())