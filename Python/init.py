import bl2sdk
from bl2sdk import *
import os
import mypy

def log(s):
    s = str(s)
    if not s.endswith('\n'):
        s += '\n'
    bl2sdk.Log(s)
print = log

if os.getcwd().split('\\')[-1] == 'Win32':
	os.chdir(os.getcwd() + '\\Plugins\\Python')

class BL2MOD():
	_Enabled = False
	Name = ""
	Description = ""

	def Enable(self):
		pass

	def Disable(self):
		pass

bl2sdk.BL2MOD = BL2MOD
bl2sdk.Mods = []

try:
	import randomizer
except Exception as e:
	print(e)

def LoadModList(caller: UObject, function: UFunction, params: FStruct, result: FStruct) -> bool:
	caller.SetStoreHeader("Mods", 0, "By Abahbob", "Mod Manager")
	pc = GetEngine().GamePlayers[0]
	for idx, mod in enumerate(bl2sdk.Mods):
		obj, _ = caller.CreateMarketplaceItem(())
		obj.SetString(caller.Prop_contentTitleText, mod.Name, pc.GetTranslationContext())
		obj.SetString(caller.Prop_descriptionText, mod.Description, pc.GetTranslationContext())
		obj.SetString(caller.Prop_offeringId, str(idx), pc.GetTranslationContext())
		obj.SetString(caller.Prop_messageText, "Enabled" if mod._Enabled else "Disabled", pc.GetTranslationContext())
		caller.AddContentData(obj)
	caller.PostContentLoaded(True)
	return False

RemoveEngineHook("WillowGame.MarketplaceGFxMovie.OnDownloadableContentListRead", "InjectMods")
RegisterEngineHook("WillowGame.MarketplaceGFxMovie.OnDownloadableContentListRead", "InjectMods", LoadModList)

def process_hook(caller: UObject, function: UFunction, params: FStruct, result: FStruct) -> bool:
	pc = GetEngine().GamePlayers[0]
	ControllerId = params.ControllerId
	ukey = params.ukey
	event = params.uevent
	print(ukey)
	if ukey == 'Enter':
		if event == 0:
			selected_object = caller.GetSelectedObject()
			mod = selected_object.GetString(caller.Prop_offeringId)
			idx = int(mod)
			mod = bl2sdk.Mods[idx]
			if mod._Enabled:
				mod.Disable()
				selected_object.SetString(caller.Prop_messageText, "Disabled", pc.GetTranslationContext())
			else:
				mod.Enable()
				selected_object.SetString(caller.Prop_messageText, "Enabled", pc.GetTranslationContext())
			mod._Enabled = not mod._Enabled
			caller.RefreshDLC()
		return False
	return True

RemoveEngineHook("WillowGame.MarketplaceGFxMovie.ShopInputKey", "OpenModMenu")
RegisterEngineHook("WillowGame.MarketplaceGFxMovie.ShopInputKey", "OpenModMenu", process_hook)


def ReplaceDLCWithMods(caller: UObject, stack: FFrame, result: FStruct, function: UFunction) -> bool:
	print('a')
	EventID = stack.popInt()
	Caption = stack.popFString()
	bDisabled = stack.popULong()
	bNew = stack.popULong()
	if Caption == "$WillowMenu.WillowScrollingListDataProviderFrontEnd.DLC":
		Caption = "MODS"
		bNew = True
	print((EventID, Caption, bDisabled, bNew))
	caller.AddListItem(EventID, Caption, bDisabled, bNew)
	stack.SkipFunction()
	return False


def HookMainMenuPopulateForMods(caller: UObject, stack: FFrame, result: FStruct, function: UFunction) -> bool:
	# bl2sdk.LogAllProcessEventCalls(True)
	# bl2sdk.LogAllUnrealScriptCalls(True)
	RegisterScriptHook("WillowGame.WillowScrollingList.AddListItem", "ReplaceDLCWithMods", ReplaceDLCWithMods)
	caller.Populate(stack.popObject())
	RemoveScriptHook("WillowGame.WillowScrollingList.AddListItem", "ReplaceDLCWithMods")
	stack.SkipFunction()
	return False

RemoveEngineHook("WillowGame.WillowScrollingListDataProviderFrontEnd.Populate", "HookMainMenuPopulateForMods")
RegisterScriptHook("WillowGame.WillowScrollingListDataProviderFrontEnd.Populate", "HookMainMenuPopulateForMods", HookMainMenuPopulateForMods)

if os.getcwd().endswith('\\Plugins\\Python'):
	os.chdir(os.getcwd().split('\\Plugins\\Python')[0])

bl2sdk.SetLoggingLevel("DEBUG")