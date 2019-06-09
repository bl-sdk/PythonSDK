from bl2sdk import *

class HelloWorld(BL2MOD):
	Name = "Hello World"
	Description = "Hello World"
	Types = [ModTypes.Utility]
	Author = "FromDarkHell"
	Options = [
			Options.Slider("Test Slider", "A testing description", -500,-7000,7000,10),
			Options.Boolean("Test Boolean", "A testing description for a boolean", True),
			Options.Spinner("Test Spinner", "A testing description", "Hello", ["Hello","World"]),
			Options.Hidden("TestingHidden", 52)
		]

	""" Class Mod Hooks """

	def hookOntoClassMod(caller: UObject, function: UFunction, params: FStruct) -> bool:
		DoInjectedCallNext()
		return False

	def hookOntoCOMS(caller: UObject, function: UFunction, params: FStruct) -> bool:
		return True

	def ModOptionChanged(self, option, newValue):
		Log(f"{option.Caption} value got changed to {newValue}")

RegisterMod(HelloWorld())