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

import commander_wannabe
import rando

def LoadModList(caller, function, parms, result):
	caller.SetStoreHeader(bl2sdk.FString("Mods"), 0, bl2sdk.FString("By Abahbob"), bl2sdk.FString("Mod Manager"))
	pc = bl2sdk.GetEngine().GamePlayers[0]
	for idx, mod in enumerate(bl2sdk.Mods):
		obj = caller.CreateMarketplaceItem(bl2sdk.FMarketplaceContent())
		obj.SetString(caller.Prop_contentTitleText, bl2sdk.FString(mod.Name), pc.GetTranslationContext())
		obj.SetString(caller.Prop_descriptionText, bl2sdk.FString(mod.Description), pc.GetTranslationContext())
		obj.SetString(caller.Prop_offeringId, bl2sdk.FString(str(idx)), pc.GetTranslationContext())
		obj.SetString(caller.Prop_messageText, bl2sdk.FString( "Enabled" if mod._Enabled else "Disabled"), pc.GetTranslationContext())
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
			idx = int(mod.AsString())
			mod = bl2sdk.Mods[idx]
			if mod._Enabled:
				mod.Disable()
				selected_object.SetString(caller.Prop_messageText, bl2sdk.FString("Disabled"), pc.GetTranslationContext())
			else:
				mod.Enable()
				selected_object.SetString(caller.Prop_messageText, bl2sdk.FString("Enabled"), pc.GetTranslationContext())
			mod._Enabled = not mod._Enabled
			caller.RefreshDLC()
		return False
	return True

bl2sdk.RemoveEngineHook("Function WillowGame.MarketplaceGFxMovie.ShopInputKey", "a")
bl2sdk.RegisterEngineHook("Function WillowGame.MarketplaceGFxMovie.ShopInputKey", "a", process_hook)