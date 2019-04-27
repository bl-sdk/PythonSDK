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
	Status = "Disabled"
	KeyActions = { 'Enter': "Enable" }

	def Enable(self):
		pass

	def Disable(self):
		pass

	def HandleKey(self, key):
		if key == 'Enter':
			self._Enabled = not self._Enabled
			if self._Enabled:
				self.Enable()
				self.Status = "Enabled"
				self.KeyActions['Enter'] = "Disable"
			else:
				self.Disable()
				self.Status = "Disabled"
				self.KeyActions['Enter'] = "Enable"

bl2sdk.BL2MOD = BL2MOD
bl2sdk.Mods = []

try:
	import randomizer
	import legacy
except:
	pass


# def LoadModList(caller: UObject, function: UFunction, params: FStruct, result: FStruct) -> bool:
# 	caller.SetStoreHeader("Mods", 0, "By Abahbob", "Mod Manager")
# 	for idx, mod in enumerate(bl2sdk.Mods):
# 		translationContext = GetEngine().GamePlayers[0].GetTranslationContext()
# 		obj = caller.CreateMarketplaceItem(FMarketplaceContent())
# 		obj.SetString(caller.Prop_offeringId, str(idx), translationContext)
# 		obj.SetString(caller.Prop_contentTitleText, mod.Name, translationContext)
# 		obj.SetString(caller.Prop_descriptionText, mod.Description, translationContext)
# 		obj.SetString(caller.Prop_messageText, mod.Status, translationContext)
# 		caller.AddContentData(obj)
# 	caller.PostContentLoaded(True)
# 	return False

# # RemoveEngineHook("WillowGame.MarketplaceGFxMovie.OnDownloadableContentListRead", "InjectMods")
# # RegisterEngineHook("WillowGame.MarketplaceGFxMovie.OnDownloadableContentListRead", "InjectMods", LoadModList)

# def process_hook(caller: UObject, function: UFunction, params: FStruct, result: FStruct) -> bool:
# 	params.popInt()
# 	key = params.popFName()
# 	event = params.popByte()

# 	if key in ['Escape', 'Up', 'Down']:
# 		return True
# 	selectedObject = caller.GetSelectedObject()
# 	try:
# 		modIndex = int(selectedObject.GetString(caller.Prop_offeringId))
# 	except:
# 		return False

# 	mod = bl2sdk.Mods[modIndex]

# 	if key in mod.KeyActions:
# 		if event == 0:
# 			mod.HandleKey(key)
# 			obj = caller.GetSelectedObject()
# 			translationContext = GetEngine().GamePlayers[0].GetTranslationContext()
# 			obj.SetString(caller.Prop_contentTitleText, mod.Name, translationContext)
# 			obj.SetString(caller.Prop_descriptionText, mod.Description, translationContext)
# 			obj.SetString(caller.Prop_messageText, mod.Status, translationContext)
# 			caller.RefreshDLC()

# 	elif key != 'Enter':
# 		return True

# 	return False

# RemoveEngineHook("WillowGame.MarketplaceGFxMovie.ShopInputKey", "OpenModMenu")
# RegisterEngineHook("WillowGame.MarketplaceGFxMovie.ShopInputKey", "OpenModMenu", process_hook)


# def ReplaceDLCWithMods(caller: UObject, stack: FFrame, result: FStruct, function: UFunction) -> bool:
# 	EventID = stack.popInt()
# 	Caption = stack.popFString()
# 	bDisabled = stack.popULong()
# 	bNew = stack.popULong()
# 	if Caption == "$WillowMenu.WillowScrollingListDataProviderFrontEnd.DLC":
# 		Caption = "MODS"
# 		bNew = True
# 	caller.AddListItem(EventID, Caption, bDisabled, bNew)
# 	stack.SkipFunction()
# 	return False


# def HookMainMenuPopulateForMods(caller: UObject, stack: FFrame, result: FStruct, function: UFunction) -> bool:
# 	RegisterScriptHook("WillowGame.WillowScrollingList.AddListItem", "ReplaceDLCWithMods", ReplaceDLCWithMods)
# 	caller.Populate(stack.popObject())
# 	RemoveScriptHook("WillowGame.WillowScrollingList.AddListItem", "ReplaceDLCWithMods")
# 	stack.SkipFunction()
# 	return False

# RemoveEngineHook("WillowGame.WillowScrollingListDataProviderFrontEnd.Populate", "HookMainMenuPopulateForMods")
# RegisterScriptHook("WillowGame.WillowScrollingListDataProviderFrontEnd.Populate", "HookMainMenuPopulateForMods", HookMainMenuPopulateForMods)


# def HookModSelected(caller: UObject, function: UFunction, params: FStruct, result: FStruct):
# 	selectedObject = caller.GetSelectedObject()
# 	bl2sdk.SetLoggingLevel("DEBUG")
# 	print(caller.Prop_offeringId)
# 	try:
# 		modIndex = int(selectedObject.GetString(caller.Prop_offeringId))
# 	except TypeError:
# 		return		

# 	keyActions = bl2sdk.Mods[modIndex].KeyActions.copy()
# 	keyActions['Escape'] = "Cancel"

# 	leftColumn = True
# 	leftColumnText = ""
# 	rightColumnText = ""

# 	for key, action in keyActions.items():
# 		if leftColumn:
# 			leftColumnText += "\n[%s] %s" % (key, action)
# 		else:
# 			rightColumnText += "\n[%s] %s" % (key, action)
# 		leftColumn = not leftColumn

# 	caller.SetTooltips(leftColumnText, rightColumnText)


# RemoveEngineHook("WillowGame.MarketplaceGFxMovie.extOnOfferingChanged", "HookModSelected")
# RegisterEngineHook("WillowGame.MarketplaceGFxMovie.extOnOfferingChanged", "HookModSelected", HookModSelected)
print(bl2sdk.GetEngine().Class.FindChildByName("GamePlayers").Inner)

if os.getcwd().endswith('\\Plugins\\Python'):
	os.chdir(os.getcwd().split('\\Plugins\\Python')[0])