import bl2sdk
from bl2sdk import *

def ICHook(caller: UObject, function: UFunction, params: FStruct) -> bool:
	print(params)
	return True

bl2sdk.RegisterHook("WillowGame.ItemCardGFxObject.SetItemCardEx", "ItemCardHook", ICHook)
