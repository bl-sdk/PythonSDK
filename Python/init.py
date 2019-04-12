import bl2sdk

def log(s):
    s = str(s)
    if not s.endswith('\n'):
        s += '\n'
    bl2sdk.Log(s)
print = log

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

# import commander_wannabe
# import rando

def LoadModList(caller, function, parms, result):
	caller.SetStoreHeader("Mods", 0, "By Abahbob", "Mod Manager")
	pc = bl2sdk.GetEngine().GamePlayers[0]
	for idx, mod in enumerate(bl2sdk.Mods):
		obj = caller.CreateMarketplaceItem(bl2sdk.FMarketplaceContent())
		obj.SetString(caller.Prop_contentTitleText, mod.Name, pc.GetTranslationContext())
		obj.SetString(caller.Prop_descriptionText, mod.Description, pc.GetTranslationContext())
		obj.SetString(caller.Prop_offeringId, str(idx), pc.GetTranslationContext())
		obj.SetString(caller.Prop_messageText, "Enabled" if mod._Enabled else "Disabled", pc.GetTranslationContext())
		caller.AddContentData(obj)
	caller.PostContentLoaded(True)
	return False

bl2sdk.RemoveEngineHook("Function WillowGame.MarketplaceGFxMovie.OnDownloadableContentListRead", "InjectMods")
bl2sdk.RegisterEngineHook("Function WillowGame.MarketplaceGFxMovie.OnDownloadableContentListRead", "InjectMods", LoadModList)

def process_hook(caller, function, parms, result):
	pc = bl2sdk.GetEngine().GamePlayers[0]
	ControllerId = parms.popInt()
	ukey = parms.popFName()
	event = parms.popByte()
	if ukey.GetName() == 'Enter':
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

bl2sdk.RemoveEngineHook("Function WillowGame.MarketplaceGFxMovie.ShopInputKey", "OpenModMenu")
bl2sdk.RegisterEngineHook("Function WillowGame.MarketplaceGFxMovie.ShopInputKey", "OpenModMenu", process_hook)


def ReplaceDLCWithMods(caller, stack, result, function):
	EventID = stack.popInt()
	Caption = stack.popFString()
	bDisabled = stack.popULong()
	bNew = stack.popULong()
	if Caption == "$WillowMenu.WillowScrollingListDataProviderFrontEnd.DLC":
		Caption = "MODS"
	print(Caption)
	caller.AddListItem(EventID, Caption, bDisabled, bNew)
	stack.SkipFunction()
	return False


def HookMainMenuPopulateForMods(caller, stack, result, function):
	bl2sdk.RegisterScriptHook("Function WillowGame.WillowScrollingList.AddListItem", "ReplaceDLCWithMods", ReplaceDLCWithMods)
	caller.Populate(stack.popObject())
	bl2sdk.RemoveScriptHook("Function WillowGame.WillowScrollingList.AddListItem", "ReplaceDLCWithMods")
	stack.SkipFunction()
	return False

bl2sdk.RemoveEngineHook("Function WillowGame.WillowScrollingListDataProviderFrontEnd.Populate", "HookMainMenuPopulateForMods")
bl2sdk.RegisterScriptHook("Function WillowGame.WillowScrollingListDataProviderFrontEnd.Populate", "HookMainMenuPopulateForMods", HookMainMenuPopulateForMods)