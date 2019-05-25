import bl2sdk
from bl2sdk import *
import os

LocalModDir = os.path.dirname(os.path.realpath(__file__))

def ICHook(caller: UObject, function: UFunction, params: FStruct) -> bool:
	bl2sdk.PrintCurrentDir()
	return True

bl2sdk.RegisterHook("WillowGame.ItemCardGFxObject.SetItemCardEx", "ItemCardHook", ICHook)
