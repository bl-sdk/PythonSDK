import bl2sdk
from bl2sdk import *
import time

# the_time = time.time()
# def Tick(caller: UObject, function: UFunction, params: FStruct) -> bool:
# 	# new_time = time.time()
# 	# Log(new_time - the_time)
# 	# the_time = new_time
# 	print(params.DeltaTime)
# 	return True

# RemoveHook("Engine.PlayerController.PlayerTick", "Tick")
# RegisterHook("Engine.PlayerController.PlayerTick", "Tick", Tick)


def Tick(caller: UObject, function: UFunction, params: FStruct) -> bool:
	# params.NewSaveGame.DumpObject()
	# params.NewSaveGame.PlayerClassDefinition.DumpObject()
	caller.PlayerClass = bl2sdk.FindObject("PlayerClassDefinition", "GD_Mercenary.Character.CharClass_Mercenary")
	bl2sdk.DoInjectedCallNext()
	caller.LoadPlayerSaveGame(bl2sdk.FindObject("PlayerClassDefinition", "GD_Mercenary.Character.CharClass_Mercenary"))
	# params.NewSaveGame
	return False


RemoveHook("WillowGame.WillowPlayerController.LoadPlayerSaveGame", "Tick")
RegisterHook("WillowGame.WillowPlayerController.LoadPlayerSaveGame", "Tick", Tick)