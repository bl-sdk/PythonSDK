import bl2sdk
from bl2sdk import *
import os
import sys
import mypy
import webbrowser
from enum import Enum


def log(s):
    s = str(s)
    if not s.endswith('\n'):
        s += '\n'
    bl2sdk.Log(s)
print = log


Win32Directory = os.path.dirname(sys.executable)
ModsDirectory = os.path.join(Win32Directory, "Plugins\\Python")
""" The path to our mods folder, determined via the directory containing the
current executable (Borderlands2.exe)."""

# Change our working directory to the mods directory.
os.chdir(ModsDirectory)


class BL2MOD():
	"""An object that describes a mod to be represented in the BL2 Mod Manager.

	All mods should set their Name and Description fields.

	By default, mods are given a `Status` of "Disabled", and respond to the
	Enter key in the mod menu, which toggles their Status and calls the
	`Enabled` and `Disabled` methods as appropriate. Mods should define
	these methods to make use of this functionality.

	For more complex interaction in the mods menu, mods should define their
	`SettingsInputs` property and `SettingsInputPressed` method. (This will
	override the `Enabled` and `Disabled` behavior described above.) They may
	also display status text by setting their `Status` text.

	Mods may also register for in-game key bindings by invoking their own
	`RegisterGameInput` method (and also unregister them via
	`UnregisterGameInput`). They may respond to their bindings being rebound by
	the user, pressed, and released, by defining the `GameInputRebound`,
	`GameInputPressed`, and `GameInputReleased` methods, respectively.
	"""

	Name = ""
	"""The name of the mod to display in the mod manager."""
	Description = ""
	"""The description of the mod to display in the mod manager."""
	Status = "Disabled"
	"""The status of the mod to display in the mod manager."""
	SettingsInputs = { 'Enter': "Enable" }
	"""A dictionary that describes inputs the mod responds to in the mod
	manager, in the format { '[Key]': '[Action]' }. For example:

		SettingsInputs = { 'Enter': "Do Something", "H": "Do Something Else" }
	"""
	Types = []
	"""A list that specifies all the mod types that the mod is. 
	For a list of mod types, see the ModTypes enum.
	"""
	Author = "Unknown"
	"""The author(s) of the mod which is displayed in the mod manager menu.	"""

	def Enable(self):
		"""Called by the mod manager to enable the mod.

		Only invoked if the mod does not implement custom interaction via its 
		`SettingsInputPressed` property and `SettingsInputPressed` method.
		"""
		pass

	def Disable(self):
		"""Called by the mod manager to disable the mod.

		Only invoked if the mod does not implement custom interaction via its 
		`SettingsInputPressed` property and `SettingsInputPressed` method.
		"""
		pass

	def SettingsInputPressed(self, name: str):
		"""Called by the mod manager when one of the actions the mod has
		registered for has been invoked via its associated key.

		Mods may define this method to respond to user actions like so:

			def SettingsInputPressed(self, name):
				if name == "Do Something":
					...
				elif name == "Do Something Else":
					...

		Parameters
		----------
		name : str
		The name of the action that was associated with a key in the
		`SettingsInputs` property, that has now been pressed by the user.
		"""
		if name == "Enable":
			self.Status = "Enabled"
			self.SettingsInputs = { 'Enter': "Disable" }
			self.Enable()
		elif name == "Disable":
			self.Status = "Disabled"
			self.SettingsInputs = { 'Enter': "Enable" }
			self.Disable()

	def RegisterGameInput(self, name: str, key: str = None):
		"""Adds a key binding option to the Keyboard Settings menu, allowing the
		mod to respond to a key chosen by the user.

		Mods call this method specifying the name of the binding (shown to the
		user as well as used within the mod):

			self.RegisterGameInput("Do Something In Game")

		Optionally, a mod may specify a default key:

			self.RegisterGameInput("Do Something Else In Game", key="J")

		Parameters
		----------
		name : str
			The name of the action called by the key the user defines. This is
			displayed in the Keyboard Settings menu, and also passed to this
			mod's `GameInputRebound`, `GameInputPressed`, and
			`GameInputReleased` methods.

		key: str, optional
			The key to attempt to bind the action to. This is ignored if the
			user has another action bound to the same key. For a list of key
			names, see: wiki.unrealengine.com/List_of_Key/Gamepad_Input_Names

		"""
		for tag, binding in GameInputBinding.ByTag.items():
			if binding.Mod is self and binding.Name == name:
				return
		GameInputBinding(self, name, key)

	def UnregisterGameInput(self, name: str):
		"""Removes a key binding option from the Keyboard Settings menu.

		Parameters
		----------
		name : str
			The name of the action as provided to `RegisterGameInput` when the
			binding was registered for.
		"""
		unregisteredTag = None
		for tag, binding in GameInputBinding.ByTag.items():
			if binding.Mod is self and binding.Name == name:
				unregisteredTag = tag
				if binding.Key in GameInputBinding.ByKey:
					del GameInputBinding.ByKey[binding.Key]
				break
		del GameInputBinding.ByTag[unregisteredTag]

	def GameInputRebound(self, name: str, key: str):
		"""Called when the user rebinds the key for the registered action.

		Mods may define this method if, for example, they would like to save
		their settings to reflect the user's preference:

			def GameInputRebound(self, name, key):
				MySettings.KeyBindings[name] = key
				MySettings.Save()

		Parameters
		----------
		name : str
			The name of the action the user has rebound. This is the name that
			was provided to `RegisterGameInput` when the binding was registered.
		key : str
			The key the user bebound the action to.
		"""
		pass

	def GameInputPressed(self, name: str):
		"""Called when the user presses the key for a key binding the mod has
		registered for.

		Mods should define this method to perform actions when the user
		initially presses the key of their choosing:

			def GameInputPressed(self, name):
				if name == "Do Something In Game":
					...
				elif name == "Do Something Else In Game":
					...

		Parameters
		----------
		name : str
			The name of the action the user has pressed the key for. This is the
			name that was provided to `RegisterGameInput` when the binding was
			registered.
		"""
		pass

	def GameInputReleased(self, name: str):
		"""Called when the user releases the key for a key binding the mod has
		registered for.

		Mods should define this method to perform actions when the user
		releases the key of their choosing:

			def GameInputReleased(self, name):
				if name == "Do Something In Game":
					...
				elif name == "Do Something Else In Game":
					...

		Parameters
		----------
		name : str
			The name of the action the user has pressed the key for. This is the
			name that was provided to `RegisterGameInput` when the binding was
			registered.
		"""
		pass

class GameInputBinding():
	"""An object that describes a key binding registered by a mod.

	Each binding object is assigned a unique "tag" string upon creation; this is
	used to refer to the binding from game objects that accept strings.
	"""

	TagIndex = 0
	"""An integer incremented upon binding creation, in order to generate a
	unique tag for each one."""
	ByTag = dict()
	"""A dictionary for looking up bindings by their tag."""
	ByKey = dict()
	"""A dictionary for looking up bindings by their currently assigned key."""
	ByMod = dict()
	"""A dictionary that looks up the mod names by their tags. """

	def __init__(self, mod: BL2MOD, name: str, key: str):
		self.Mod = mod
		self.Name = name

		# Generate our tag using the current tag index, associate ourselves with
		# it in the dictionary, and increment the tag index for the next one.
		tag = "bl2sdk%s" % GameInputBinding.TagIndex
		GameInputBinding.ByTag[tag] = self
		GameInputBinding.ByMod[tag] = self.Mod.Name
		GameInputBinding.TagIndex += 1
		# If no default key was requested, default to "None."
		if key == None:
			self.Key = 'None'
		# If a requested key is already in use by another binding, default it
		# to "None," and notify the mod of the rebinding.
		elif key in GameInputBinding.ByKey:
			self.Key = 'None'
			mod.GameInputRebound(name, 'None')
		# Otherwise, associate this binding with the key.
		else:
			self.Key = key
			GameInputBinding.ByKey[key] = self

class ModTypes(Enum):
	Utility = 1
	Content = 2
	Gameplay = 3

class ModOptions(BL2MOD):

	Name = "General"
	Status = ""
	Description = "Welcome to the Borderlands 2 Mod Manager\n\nSee below for options."
	SettingsInputs = { 'O': "Open Mods Folder", 'R': "Reload Mods", 'H': "Help" }
	Types = []
	Author = "Abahbob"

	def SettingsInputPressed(self, name):
		if name == "Open Mods Folder":
			os.startfile(ModsDirectory)
		elif name == "Reload Mods":
			pass
		elif name == "Help":
			webbrowser.open("https://github.com/bl-sdk/BL2-Python-Plugins/wiki")


bl2sdk.BL2MOD = BL2MOD
bl2sdk.ModTypes = ModTypes
bl2sdk.Mods = [ModOptions()]
bl2sdk.ModMenuOpened = []

try:
	import legacy
	import randomizer
	import commander
	import chatbot
	import grenadoer
except:
	pass

""" A generic helper function that removes a hook (if it exists) and then re-registers it. """
def RunHook(functionName, name, function):
	RemoveHook(functionName, name)
	RegisterHook(functionName, name, function)

""" Here we populate our mod manager with all of our mods that we've got loaded. """
def LoadModList(caller: UObject, function: UFunction, params: FStruct) -> bool:
	caller.MessageEnumerating = "Reloading Mods"
	caller.SetFilterFromStringAndSortNew("compatibility","Utility Mods", "isCompatibility:1")
	caller.SetFilterFromStringAndSortNew("seasonpass","Gameplay Mods", "isSeasonPass:1")
	caller.SetFilterFromStringAndSortNew("addon","Content Mods", "isAddon:1")
	caller.SetFilterFromStringAndSortNew("all","All Mods","")
	caller.SetStoreHeader("Mods", 0, "By Abahbob", "Mod Manager")
	
	translationContext = GetEngine().GamePlayers[0].GetTranslationContext()
	for idx, mod in enumerate(bl2sdk.Mods):
		obj, _ = caller.CreateMarketplaceItem(())
		obj.SetString(caller.Prop_offeringId, str(idx), translationContext)
		obj.SetString(caller.Prop_contentTitleText, mod.Name, translationContext)
		fullDescription = mod.Description + "\n\nCreated by: " + mod.Author
		obj.SetString(caller.Prop_descriptionText, fullDescription, translationContext)
		obj.SetFloat(caller.Prop_isMisc, 0.0)
		if mod.Status == "Enabled" or mod.Status == "":
			obj.SetString(caller.Prop_statusText, "<font color=\"#00FF00\">Enabled</font>")
			obj.SetString(caller.Prop_messageText, "<font color=\"#00FF00\">Enabled</font>")
		else:
			obj.SetString(caller.Prop_statusText, "<font color=\"#FF0000\">Disabled</font>")
			obj.SetString(caller.Prop_messageText, "<font color=\"#FF0000\">Disabled</font>")
		try:
			obj.SetFloat(caller.Prop_isSeasonPass, int(ModTypes.Gameplay in mod.Types))
			obj.SetFloat(caller.Prop_isAddOn, int(ModTypes.Content in mod.Types))
			obj.SetFloat(caller.Prop_isCompatibility, int(ModTypes.Utility in mod.Types))			
		except AttributeError:
			pass
		caller.AddContentData(obj)
	caller.PostContentLoaded(True)
	return False

RunHook("WillowGame.MarketplaceGFxMovie.OnDownloadableContentListRead", "InjectMods", LoadModList)

""" This function controls mod specific keybinds in the mod manager. """
def HookShopInputKey(caller: UObject, function: UFunction, params: FStruct) -> bool:
	key = params.ukey
	event = params.uevent

	if key in ['Escape', 'Up', 'Down']:
		return True

	selectedObject = caller.GetSelectedObject()
	try:
		modIndex = int(selectedObject.GetString(caller.Prop_offeringId))
	except:
		return False

	mod = bl2sdk.Mods[modIndex]

	if key in mod.SettingsInputs:
		if event == 0:
			inputName = mod.SettingsInputs[key]
			mod.SettingsInputPressed(inputName)
			obj = caller.GetSelectedObject()
			translationContext = GetEngine().GamePlayers[0].GetTranslationContext()
			obj.SetString(caller.Prop_contentTitleText, mod.Name, translationContext)
			obj.SetString(caller.Prop_descriptionText, mod.Description, translationContext)
			obj.SetString(caller.Prop_messageText, mod.Status, translationContext)
			caller.RefreshDLC()

	elif key != 'Enter':
		return True

	return False

RunHook("WillowGame.MarketplaceGFxMovie.ShopInputKey", "HookShopInputKey", HookShopInputKey)

""" Now we replace the DLC menu with the mods. """
def ReplaceDLCWithMods(caller: UObject, function: UFunction, params: FStruct) -> bool:
	Caption = params.Caption
	bNew = params.bNew
	if Caption == "$WillowMenu.WillowScrollingListDataProviderFrontEnd.DLC":
		Caption = "MODS"
		bNew = True
	DoInjectedCallNext()
	caller.AddListItem(params.EventID, Caption, params.bDisabled, bNew)
	return False

""" An efficient function that notifies us when we're in the main menu to populate the DLC menu. """
def HookMainMenuPopulateForMods(caller: UObject, function: UFunction, params: FStruct) -> bool:
	for modFunc in bl2sdk.ModMenuOpened:
		try:
			modFunc()
		except:
			pass
	RegisterHook("WillowGame.WillowScrollingList.AddListItem", "ReplaceDLCWithMods", ReplaceDLCWithMods)
	DoInjectedCallNext()
	caller.Populate(params.TheList)
	RemoveHook("WillowGame.WillowScrollingList.AddListItem", "ReplaceDLCWithMods")
	return False

RunHook("WillowGame.WillowScrollingListDataProviderFrontEnd.Populate", "HookMainMenuPopulateForMods", HookMainMenuPopulateForMods)

seperatorNames = [""]

""" Hook whenever we change the currently selected mod in the mod manager. 	"""
def HookModSelected(caller: UObject, function: UFunction, params: FStruct) -> bool:
	selectedObject = caller.GetSelectedObject()
	try:
		modIndex = int(selectedObject.GetString(caller.Prop_offeringId))
	except TypeError:
		return		

	mod = bl2sdk.Mods[modIndex]

	inputs = mod.SettingsInputs.copy()
	inputs['Escape'] = "Cancel"
	inputs['Q'] = "Filter"
	leftColumn = True
	leftColumnEntries = []
	rightColumnEntries = []

	for key, action in inputs.items():
		entries = leftColumnEntries if leftColumn else rightColumnEntries
		entries.append("[%s] %s" % (key, action))
		leftColumn = not leftColumn

	leftColumnText = "\n".join(leftColumnEntries)
	rightColumnText = "\n".join(rightColumnEntries)
	caller.SetTooltips(leftColumnText, rightColumnText)
	return False

RunHook("WillowGame.MarketplaceGFxMovie.extOnOfferingChanged", "HookModSelected", HookModSelected)

""" This function adds all of our keybinds to the keybind menu. """ 
def HookInitKeyBinding(caller: UObject, function: UFunction, params: FStruct) -> bool:
	seperatorNames.clear()
	lastModName = ""
	for tag, binding in GameInputBinding.ByTag.items():
		modName = GameInputBinding.ByMod[tag]
		if lastModName != modName:
			lastModName = modName
			nameOfSeperator = ("------ " + modName + " ------")
			seperatorNames.append(nameOfSeperator)
			caller.AddKeyBindEntry(nameOfSeperator, nameOfSeperator, nameOfSeperator)
		DoInjectedCallNext()
		caller.AddKeyBindEntry(tag, tag, binding.Name)
	return True

RunHook("WillowGame.WillowScrollingListDataProviderKeyboardMouseOptions.InitKeyBinding", "HookInitKeyBinding", HookInitKeyBinding)

""" A function that gets localized versions of keys as not all keys are supported. """
def GetFixedLocalizedKeyName(menu, key):
	if key == 'None':
		return ''
	if key == 'Quote':
		return '\''
	try:
		name = menu.GetLocalizedKeyName(key)
		return '' if name is None else name
	except:
		return ''

""" A function that hooks into the creation of config options. """
def HookOnPopulateKeys(caller: UObject, function: UFunction, params: FStruct) -> bool:
	DoInjectedCallNext()
	caller.extOnPopulateKeys()

	translationContext = GetEngine().GamePlayers[0].GetTranslationContext()

	for keyBind in caller.KeyBinds:
		if keyBind.Tag in seperatorNames:
			keyBind.Object.SetString('value', "")
			keyBind.Object.SetVisible(False)
		if keyBind.Tag in GameInputBinding.ByTag:
			binding = GameInputBinding.ByTag[keyBind.Tag]
			keyBind.CurrentKey = binding.Key
		elif keyBind.CurrentKey in GameInputBinding.ByKey:
			binding = GameInputBinding.ByKey[keyBind.CurrentKey]
			binding.Key = 'None'
			del GameInputBinding.ByKey[keyBind.CurrentKey]
			binding.Mod.GameInputRebound(binding.Name, 'None')
		keyBind.Object.SetString('value', GetFixedLocalizedKeyName(caller, keyBind.CurrentKey), translationContext)

	return False

RunHook("WillowGame.WillowScrollingListDataProviderKeyboardMouseOptions.extOnPopulateKeys", "HookOnPopulateKeys", HookOnPopulateKeys)

""" A function that changes a mod's keybinds in the configuration menu. """
def HookBindCurrentSelection(caller: UObject, function: UFunction, params: FStruct) -> bool:
	selectedKeyBind = caller.KeyBinds[caller.CurrentKeyBindSelection]
	if selectedKeyBind.Tag in seperatorNames:
		return False
	selectedBinding = None

	oldKey = selectedKeyBind.CurrentKey
	newKey = params.Key

	DoInjectedCallNext()
	caller.BindCurrentSelection(newKey)

	if newKey == oldKey:
		return False

	if selectedKeyBind.Tag in GameInputBinding.ByTag:
		selectedBinding = GameInputBinding.ByTag[selectedKeyBind.Tag]
		if selectedBinding.Key in GameInputBinding.ByKey:
			del GameInputBinding.ByKey[selectedBinding.Key]

	if newKey in GameInputBinding.ByKey:
		exchangedBinding = GameInputBinding.ByKey[newKey]
		del GameInputBinding.ByKey[newKey]

		exchangedBinding.Key = oldKey
		if oldKey != 'None':
			GameInputBinding.ByKey[oldKey] = exchangedBinding
		try:
			exchangedBinding.Mod.GameInputRebound(exchangedBinding.Name, oldKey)
		except:
			bl2sdk.Log("Error notifying %s of key rebind." % exchangedBinding.Mod.Name)

	if selectedBinding != None:
		selectedBinding.Key = newKey
		GameInputBinding.ByKey[newKey] = selectedBinding
		selectedBinding.Mod.GameInputRebound(selectedBinding.Name, newKey)

	translationContext = GetEngine().GamePlayers[0].GetTranslationContext()

	for keyBind in caller.KeyBinds:
		if keyBind.Tag in GameInputBinding.ByTag:
			binding = GameInputBinding.ByTag[keyBind.Tag]
			keyBind.CurrentKey = binding.Key
		keyBind.Object.SetString('value', GetFixedLocalizedKeyName(caller, keyBind.CurrentKey), translationContext)

	caller.ControllerMappingClip.InvalidateKeyData()
	return False

RunHook("WillowGame.WillowScrollingListDataProviderKeyboardMouseOptions.BindCurrentSelection", "HookBindCurrentSelection", HookBindCurrentSelection)

def HookDoBind(caller: UObject, function: UFunction, params: FStruct) -> bool:
	print(caller.KeyBinds[caller.CurrentKeyBindSelection].Caption)
	if caller.KeyBinds[caller.CurrentKeyBindSelection].Caption in seperatorNames:
		return False
	return True

RunHook("WillowGame.WillowScrollingListDataProviderKeyboardMouseOptions.DoBind", "HookDoBind", HookDoBind)

""" Hook onto player input so we know when a mod's keybinds were pressed. """
def HookInputKey(caller: UObject, function: UFunction, params: FStruct) -> bool:
	# If we do not have a binding associated with this key, we ignore it.
	if params.Key not in GameInputBinding.ByKey:
		return True

	# Retrieve the binding data from our dictionary.
	binding = GameInputBinding.ByKey[params.Key]

	# An event of 0 correlates to the key being pressed.
	if params.Event == 0:
		binding.Mod.GameInputPressed(binding.Name)
	# An event of 0 correlates to the key being released.
	elif params.Event == 1:
		binding.Mod.GameInputReleased(binding.Name)

	return False

RunHook("WillowGame.WillowUIInteraction.InputKey", "HookInputKey", HookInputKey)

os.chdir(Win32Directory)

# SetLoggingLevel("DEBUG")