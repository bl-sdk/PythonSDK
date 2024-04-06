import unrealsdk
import functools
import inspect
from dataclasses import dataclass
from typing import Dict

from . import DeprecationHelper as dh
from . import MenuManager, ModObjects, SettingsManager
from .ModObjects import Game
from .KeybindManager import InputEvent, Keybind

"""
The first section of this file handles adding the KEYBINDS menu and saving the keybinds.
 It's a bit harder than the KeybindManager one because the Gamepad menu doesn't have any of the functions handling the binds.
 I ended up just creating a KeyboardMouse menu object to get those functions.

We put all keybinds into their own "MODDED CONTROLLER KEYBINDS" menu.
"""


@dataclass
class ControllerBindInfo:
    """
    Copy of struct WillowScrollingListDataProviderKeyboardMouseOptions.KeyBindInfo
    The GamepadOptions class doesn't have this, so we basically reimplement it
    Also with our modBind Keybind for easy lookup
    """
    Tag: str = "None"
    ActionName: str = "None"
    Caption: str = ""
    CurrentKey: str = ""
    Object: unrealsdk.UObject = None
    modBind: Keybind = None


_NORMAL_CONTROLLER_NAME = unrealsdk.GetEngine().Localize("KeyBindings", "Caption", "WillowMenu")
_MODDED_GAMEPAD_CONTROLLER_NAME = "Modded Controller " + _NORMAL_CONTROLLER_NAME

_NORMAL_GAMEPAD_EVENT_ID: int = 115
_MODDED_GAMEPAD_EVENT_ID: int = 1418    # Just one more than the KeybindManager one, IDK where that comes from
_MODDED_GAMEPAD_KEYBINDS_CAPTION: str = _MODDED_GAMEPAD_CONTROLLER_NAME.upper()

_TAG_MODDED: str = "unrealsdk"
_TAG_SEPERATOR: str = f"{_TAG_MODDED}.seperator"
_TAG_UNREBINDABLE: str = f"{_TAG_MODDED}.unrebindable"
_TAG_INPUT: str = f"{_TAG_MODDED}.input"

_INDENT: int = 4

# Need a dict because normal binds always take the first bunch of indexes
_modded_gamepad_keydata: Dict[str, ControllerBindInfo] = {}
""" A dict mapping the bind menu TAGS with our version of KeyBindInfo"""
_is_modded_gamepad_menu: bool = False
_added_controller_clip: bool = False
""" Since we change the ControllerMappingClip mode within this menu, we need to stop some shenanigans... """

_kbmenu_object = None
""" An instance of the WillowScrollingListDataProviderKeyboardMouseOptions class - WillowScrollingListDataProviderGamepadOptions doesn't have the extOnBind functions we need """
if _kbmenu_object is None:
    _kbmenu_object = unrealsdk.ConstructObject(
        Class=unrealsdk.FindClass("WillowScrollingListDataProviderKeyboardMouseOptions")
    )
    unrealsdk.KeepAlive(_kbmenu_object)


def _AddSpinnerListItem(caller: unrealsdk.UObject, function: unrealsdk.UFunction, params: unrealsdk.FStruct) -> bool:
    """
    We need to call AddControllerPresets whenever we want to revert the ControllerMappingClip to ControllerMode from KeybindMode.
    But that function also adds a new item to the menu.
    This stops us adding a new ListItem to the ScollingList every time we do this after the menu is populated.
    """
    global _added_controller_clip
    
    if params.EventID == _NORMAL_GAMEPAD_EVENT_ID:
        # Only add the Controller Presets spinner if this is first time adding it to a list
        if _added_controller_clip:
            return False
        _added_controller_clip = True
    return True


def _GamepadOptionsPopulate(caller: unrealsdk.UObject, function: unrealsdk.UFunction, params: unrealsdk.FStruct) -> bool:
    """
    This function is called to create the controller settings menu. We use it to inject our own
     "MODDED CONTROLLER KEY BINDS" menu, fix a bug, and set some stuff on the _kb_menu object.
    """
    global _added_controller_clip
    _added_controller_clip = False
    
    # If we have no modded binds, disable the menu
    disabled = True
    for mod in ModObjects.Mods:
        if not mod.IsEnabled:
            continue
        for input in mod.Keybinds:
            if isinstance(input, Keybind) and (input.IsHidden or input.ControllerKey == "None"):
                continue
            disabled = False
            break
        if not disabled:
            break

    def AddProfileSettingListItem(caller: unrealsdk.UObject, function: unrealsdk.UFunction, params: unrealsdk.FStruct) -> bool:
        """
        This function is called every time an item is added to a menu list.
        There is a Gearbox bug in BL2 (and I'm assuming AoDK) that assumed the Controller Presets list item is always index 7 in the list (hard-coded),
         when it was actually index 8. TPS has index 9 hard-coded too.
        This caused the selected list item to change when entering Custom mapping mode.
        We prevent the 7th item from being added and add it afterwards instead to fix that.
        """
        if params.ProfileSettingId != 128 or Game.GetCurrent() == Game.TPS:
            return True

        return False
    
    def AddControllerPresets(caller: unrealsdk.UObject, function: unrealsdk.UFunction, params: unrealsdk.FStruct) -> bool:
        """
        This function is when the Controller Preset option is added to the Controller Options menu.
        We add our items after this has been added
        """
        # Want ours to display after the penultimate option
        unrealsdk.DoInjectedCallNext()
        caller.AddControllerPresets(params.TheList)

        # Add back in the skipped 7th list item to fix the BL2 bug
        if Game.GetCurrent() != Game.TPS:
            unrealsdk.DoInjectedCallNext()
            caller.AddProfileSettingListItem(params.TheList, 128, "$WillowMenu.MenuOptionDisplayNames.PerShotForceFeedback", "$WillowMenu.MenuOptionDisplayNames.PerShotForceFeedbackDesc")
        
        # Now add in our modded binds option
        params.TheList.AddListItem(_MODDED_GAMEPAD_EVENT_ID, _MODDED_GAMEPAD_KEYBINDS_CAPTION, disabled, False)
        return False

    unrealsdk.RunHook("WillowGame.WillowScrollingList.AddSpinnerListItem", "ModMenu.GamepadBindManager", _AddSpinnerListItem)   # This one is kept until OnPop
    unrealsdk.RunHook("WillowGame.WillowScrollingListDataProviderOptionsBase.AddProfileSettingListItem", "ModMenu.GamepadBindManager", AddProfileSettingListItem)
    unrealsdk.RunHook("WillowGame.WillowScrollingListDataProviderGamepadOptions.AddControllerPresets", "ModMenu.GamepadBindManager", AddControllerPresets)

    unrealsdk.DoInjectedCallNext()
    caller.Populate(params.TheList)
    caller.AddDescription(_MODDED_GAMEPAD_EVENT_ID, "$WillowMenu.MenuOptionDisplayNames.KeyBindsDesc")

    unrealsdk.RemoveHook("WillowGame.WillowScrollingListDataProviderOptionsBase.AddProfileSettingListItem", "ModMenu.GamepadBindManager")
    unrealsdk.RemoveHook("WillowGame.WillowScrollingListDataProviderGamepadOptions.AddControllerPresets", "ModMenu.GamepadBindManager")

    # Populate our ControllerBindInfo to match the KBM menu
    GamepadOnPopulateKeys(caller, function, params)

    # Finally assign to the _kbmenu_object, because that has the extOnKeyClicked function that we need to detect item selection
    global _kbmenu_object
    _kbmenu_object.WPCOwner = caller.MyOptionsGFxMovie.WPCOwner
    _kbmenu_object.ControllerMappingClip = caller.ControllerMappingClip
    _kbmenu_object.ControllerMappingClip.SetFunction("extOnKeyClicked", _kbmenu_object, 'extOnKeyClicked')
    # I hook this here and unhook when exiting the controller menu to stop this hook duplicating with the normal keyboard menu one.
    unrealsdk.RunHook("WillowGame.WillowScrollingListDataProviderKeyboardMouseOptions.extOnKeyClicked", "ModMenu.GamepadBindManager", _GamepadDoBind)
    
    return False


def GetBindString(key: str) -> str:
    """
    Returns a nice string for the button name, for keybinds menu.
    Looks like we can't get the tooltip icons because these objects don't use the markip (prints <IMG...>)
    """
    if "_" in str(key):
        # return str(key).upper().removeprefix("XBOXTYPES_")  # Old Python version?
        splitty = str(key).split("_")
        return "".join(splitty[1:len(splitty)])
    else:
        return str(key)


def GamepadOnPopulateKeys(caller: unrealsdk.UObject, function: unrealsdk.UFunction, params: unrealsdk.FStruct) -> bool:
    """
    This function is called to load the list of keybinds.
    Unlike the keyboard mouse menu, these are just the modded binds, and stored in our dataclasses.
    """
    global _modded_gamepad_keydata

    _modded_gamepad_keydata = {}
    for mod in MenuManager.GetOrderedModList():
        if not mod.IsEnabled:
            continue

        if all(isinstance(k, Keybind) and k.IsHidden for k in mod.Keybinds):
            continue

        # Add the separator entry for this mod
        tag = f"{_TAG_SEPERATOR}.{mod.Name}"
        separatorGFx = caller.ControllerMappingClip.AddKeyData(tag, mod.Name, "")
        _modded_gamepad_keydata[tag] = ControllerBindInfo(tag, "None", mod.Name, "", separatorGFx)

        for input in mod.Keybinds:
            name: str
            key: str
            rebindable: bool
            if isinstance(input, Keybind):
                if input.IsHidden:
                    continue
                name = input.Name
                key = input.ControllerKey
                rebindable = input.IsRebindable
                modifierKey = input.ControllerModifierKey
            else:
                continue

            if not rebindable:
                key = "[ ]" if key == "None" else f"[{GetBindString(key)}]" if modifierKey == "None" else f"[{GetBindString(modifierKey)} + {GetBindString(key)}]"
            else:
                key = "None" if key == "None" else f"{GetBindString(key)}" if modifierKey == "None" else f"{GetBindString(modifierKey)} + {GetBindString(key)}"
                
            tag = (_TAG_INPUT if rebindable else _TAG_UNREBINDABLE) + f".{mod.Name}.{name}"
            idx = caller.ControllerMappingClip.AddKeyData(tag, " " * _INDENT + name, key)
            _modded_gamepad_keydata[tag] = ControllerBindInfo(tag, "None", " " * _INDENT + name, key, idx, input)

    return True


def _GamepadHandleSelectionChangeRollover(caller: unrealsdk.UObject, function: unrealsdk.UFunction, params: unrealsdk.FStruct) -> bool:
    """
    The two functions with this hook get called when your menu selection changes. We use them to
     detect when you open our new keybinds menu, or the controller mapping menu.
    There's some dodgey stuff happening when changing the clip modes - these extra calls make it always shows our binds.
    """
    global _is_modded_gamepad_menu
    
    # The ControllerMappingClip doesn't always show the key bind list (I think it's if we change from the controller clip before it has fully opened)
    # Calling these here makes it always show it, for some reason.
    caller.ControllerMappingClip.SetVisible(False)
    caller.ControllerMappingClip._SetVisible(False)
    caller.ControllerMappingClip.SetKeybindMode()
    
    if params.EventID == _MODDED_GAMEPAD_EVENT_ID:
        _is_modded_gamepad_menu = True
        # Change from controller panel to keybind one
        caller.ControllerMappingClip.SetKeybindMode()
        caller.ControllerMappingClip.GetObject("controller").SetText(_MODDED_GAMEPAD_CONTROLLER_NAME)   # Set panel title
        caller.UpdateDescriptionText(params.EventID, params.TheList)    # Set list item description
    elif params.EventID == _NORMAL_GAMEPAD_EVENT_ID:
        _is_modded_gamepad_menu = False
        # Change back to normal gamepad bind mode
        caller.ControllerMappingClip.SetControllerMode(caller.PlatformFrames[caller.Platform])
        caller.InitControllerMapping(caller.MyWillowScrollingList)
        caller.AddControllerPresets(caller.MyWillowScrollingList)
    else:
        _is_modded_gamepad_menu = False

    if not _is_modded_gamepad_menu:
        return True

    # Show all binds from our keydata
    caller.ControllerMappingClip.EmptyKeyData()
    for bind in _modded_gamepad_keydata.values():
        bind.Object = caller.ControllerMappingClip.AddKeyData(
            bind.Tag, bind.Caption, bind.CurrentKey
        )
    caller.ControllerMappingClip.InvalidateKeyData()
    
    # Conveniently, instantly turning this off + on again will re-show the animation
    caller.ControllerMappingClip._SetVisible(False)
    caller.ControllerMappingClip._SetVisible(True)
    
    return False


def _GamepadDoBind(caller: unrealsdk.UObject, function: unrealsdk.UFunction, params: unrealsdk.FStruct) -> bool:
    """
    This function is hooked into the _kbmenu_object's extOnKeyClicked function to detect when a key bind list item is clicked.
    """
    if not _is_modded_gamepad_menu:
        return True
    
    if params.Tag is None or params.Tag.startswith(_TAG_SEPERATOR) or not params.Tag.startswith(_TAG_MODDED):
        return False
    
    GamepadRebind(caller, function, params)
    
    return False


def GamepadRebind(caller: unrealsdk.UObject, function: unrealsdk.UFunction, params: unrealsdk.FStruct) -> bool:
    """
    Shows the rebind dialogs and processes the key rebinds from those.
    """
    controllerClip = caller.ControllerMappingClip
    gfxManager = caller.WPCOwner.GFxUIManager
    selected_KeyData = _modded_gamepad_keydata[params.Tag]  # OUR ControllerBindInfo
    selected_Keybind = selected_KeyData.modBind     # Our mod's Keybind object
    NO_MODIFIER_BUTTON = "XboxTypes_X" if Game.GetCurrent() is not Game.TPS else "XboxTypeS_X"
    CLEAR_BIND_BUTTON = "XboxTypeS_Y"
    
    # First, bind a modifier key
    dialog = gfxManager.ShowDialog()
    title = dialog.Localize("dlgKeyBind", "Caption", "WillowMenu")
    msg = "Press a <font color=\"#A1E4EF\">MODIFIER</font> button, which will activate this bind when held:\n"
    for b in _MODIFIER_BUTTONS:
        msg = msg + f"<StringAliasMap:{b}> {GetBindString(b)}\n"
    msg = msg + f"<StringAliasMap:{NO_MODIFIER_BUTTON}> None (no modifier button required)\n"
    msg = msg + f"\nPress <StringAliasMap:{CLEAR_BIND_BUTTON}> to clear the keybind.\n"
    msg = msg + "\nPress any other button to cancel.\n"
    dialog.SetText(title, msg)
    dialog.SetVariableString("tooltips.text", "Press any other button to cancel")
    dialog.ApplyLayout()

    def GamepadHandleInputKey(caller: unrealsdk.UObject, function: unrealsdk.UFunction, params: unrealsdk.FStruct) -> bool:
        """
        This function handles input for the first step dialog for the controller modifier key rebind
        """
        if caller != dialog:  # noqa: B023
            return True
        
        if params.uevent == InputEvent.Released:
            dialog.Close()  # noqa: B023
            unrealsdk.RemoveHook("WillowGame.WillowGFxDialogBox.HandleInputKey", "ModMenu.GamepadBindManager")
            
            if params.ukey == CLEAR_BIND_BUTTON:
                selected_Keybind.ControllerModifierKey = "None"
                selected_Keybind.ControllerKey = "None"
                selected_KeyData.Object.SetString(
                    "value",
                    "None",
                    None
                )
                
            elif params.ukey == NO_MODIFIER_BUTTON or params.ukey in _MODIFIER_BUTTONS:
                if params.ukey == NO_MODIFIER_BUTTON:
                    params.ukey = "None"
                selected_Keybind.ControllerModifierKey = params.ukey
                selected_KeyData.Object.SetString(
                    "value",
                    GetBindString(selected_Keybind.ControllerKey) if selected_Keybind.ControllerModifierKey == "None" else
                    GetBindString(selected_Keybind.ControllerModifierKey) + " + " + GetBindString(selected_Keybind.ControllerKey),
                    None
                )
                
                # Then, bind a normal key
                dialogSecond = gfxManager.ShowDialog()
                title = dialogSecond.Localize("dlgKeyBind", "Caption", "WillowMenu")
                if selected_Keybind.ControllerModifierKey == "None":
                    msg = (f"Now press the button you wish to bind \"{selected_Keybind.Name}\" to.")
                    dialogSecond.SetVariableString("tooltips.text", "Press Escape to cancel")
                else:
                    msg = (f"Now press the button you wish to bind \"{selected_Keybind.Name}\" to, or press <StringAliasMap:{selected_Keybind.ControllerModifierKey}> to cancel.")
                    dialogSecond.SetVariableString("tooltips.text", f"Press {GetBindString(selected_Keybind.ControllerModifierKey)} or Escape to cancel")
                dialogSecond.SetText(title, msg)
                dialogSecond.ApplyLayout()

                def GamepadHandleInputKeyTwo(caller: unrealsdk.UObject, function: unrealsdk.UFunction, params: unrealsdk.FStruct) -> bool:
                    """
                    This function handles input for the second step dialog for the contoller key rebind
                    """
                    if caller != dialogSecond:  # noqa: B023
                        return True
                    
                    if params.uevent == InputEvent.Released:
                        dialogSecond.Close()  # noqa: B023
                        unrealsdk.RemoveHook("WillowGame.WillowGFxDialogBox.HandleInputKey", "ModMenu.GamepadBindManager")
                        
                        if params.ukey not in ("Escape", selected_Keybind.ControllerModifierKey):
                            selected_Keybind.ControllerKey = params.ukey
                            selected_KeyData.Object.SetString(
                                "value",
                                GetBindString(selected_Keybind.ControllerKey) if selected_Keybind.ControllerModifierKey == "None" else
                                GetBindString(selected_Keybind.ControllerModifierKey) + " + " + GetBindString(selected_Keybind.ControllerKey),
                                None
                            )
                    controllerClip.InvalidateKeyData()
                    return False
                
                unrealsdk.RunHook("WillowGame.WillowGFxDialogBox.HandleInputKey", "ModMenu.GamepadBindManager", GamepadHandleInputKeyTwo)
            # END REGION Modifier Key Chosen
                
        # END REGION Key Released
        controllerClip.InvalidateKeyData()
        return False

    unrealsdk.RunHook("WillowGame.WillowGFxDialogBox.HandleInputKey", "ModMenu.GamepadBindManager", GamepadHandleInputKey)
    controllerClip.InvalidateKeyData()
    return True


def _GamepadOptionsOnPop(caller: unrealsdk.UObject, function: unrealsdk.UFunction, params: unrealsdk.FStruct) -> bool:
    """
    This function is called upon leaving the gamepad settings menu. We save all mod settings
     (including keybinds) when this happens.
    Also remove some hooks that we don't want to affect other menus.
    """
    SettingsManager.SaveAllModSettings()
    
    unrealsdk.RemoveHook("WillowGame.WillowScrollingListDataProviderKeyboardMouseOptions.extOnKeyClicked", "ModMenu.GamepadBindManager")
    unrealsdk.RemoveHook("WillowGame.WillowScrollingList.AddSpinnerListItem", "ModMenu.GamepadBindManager")
    
    return True


def _GamepadMenuInputKey(caller: unrealsdk.UObject, function: unrealsdk.UFunction, params: unrealsdk.FStruct) -> bool:
    """
    Stop the Y button entering CustomizeMode when our keybind ControllerMappingClip is shown.
    """
    return not (_is_modded_gamepad_menu and params.ukey == "XboxTypeS_Y")


unrealsdk.RunHook("WillowGame.WillowScrollingListDataProviderGamepadOptions.Populate", "ModMenu.GamepadBindManager", _GamepadOptionsPopulate)
unrealsdk.RunHook("WillowGame.WillowScrollingListDataProviderGamepadOptions.HandleSelectionChange", "ModMenu.GamepadBindManager", _GamepadHandleSelectionChangeRollover)
unrealsdk.RunHook("WillowGame.WillowScrollingListDataProviderGamepadOptions.HandleSelectionRollover", "ModMenu.GamepadBindManager", _GamepadHandleSelectionChangeRollover)
unrealsdk.RunHook("WillowGame.WillowScrollingListDataProviderGamepadOptions.OnPop", "ModMenu.GamepadBindManager", _GamepadOptionsOnPop)
unrealsdk.RunHook("WillowGame.WillowScrollingListDataProviderGamepadOptions.HandleInputKey", "ModMenu.GamepadBindManager", _GamepadMenuInputKey)


"""
This section handles processing the modded binds and preventing the normal InputActionDefinition from firing when a modded bind is used instead.
I hook into WillowUIInteraction.InputKey just like the KeybindManager, but check for controller keys.
Note there is an issue, where if a mod bind opens a GFxMovie (e.g. Skill Saver mod), this breaks the sequence and still fires the normal behavior,
 and prevents the next action from that key. I've bodged a fix for the behavior firing in this case.

I basically rewrite the game's controller presets and custom bindings.
I build a dict of all commands/behaviours for all buttons so that I can hook in and prevent these from firing when the alterate bind is pressed.
I also remove some existing Hold actions in GD_Input.Devices.InputDevice_Controller, to facilitate our modifierKeys being held without firing those.
"""

_MODIFIER_BUTTONS = ["XboxTypeS_Start", "XboxTypeS_Back"]
""" Hard-coded modifier keys. These get their existing Hold actions removed and must be combined with a normal button to activate the modded keybind."""
_controller_commands = {}
"""
Dictionary of Commands to check for override later - note Melee, Reload, ThrowGrenade and SkipCinematic are different Behavior classes, so I store the class name for those instead of the command.
{Key, {Behaviour Command or Class Name, Behaviour Class} }
"""
_removed_actions = {}
"""Removed actions to prevent clashing with holding a modifier key down (Back bound to InputActionDefinition'GD_Input.Actions.InputAction_ShowMap')"""


def RecreateControllerInputDict(PC) -> None:
    """
    This method recreates our controller mapping dictionary `_controller_commands`
     It first takes the default mappings from `GD_Input.Devices.InputDevice_Controller`
     Then it applies Preset remappings to that e.g. `GD_Input.Remapping.InputRemapping_Xbox_Angelic`
     Then it applies Custom swapped buttons from that Preset, defined in `WillowPlayerInput.ControllerRebindings`
    """
    
    def AddInputAction(a, key_name):
        """
        Adds an InputActionDefinition to the controller bind dictionary
        """
        if a.OnBegin[0].Class.Name == "Behavior_ClientConsoleCommand":
            _controller_commands[key_name][a.OnBegin[0].Command] = str(a.OnBegin[0].Class).split(" ")[1]
        else:
            # This is a special behaviour so store the class name for lookup instead of the command
            _controller_commands[key_name][a.OnBegin[0].Name] = str(a.OnBegin[0].Class).split(" ")[1]
        
        # For OnEnd, this breaks if it's an empty array, not None, but I don't know how the check the length. len() doesn't work. So just try...finally it
        try:
            if a.OnEnd[0].Class.Name == "Behavior_ClientConsoleCommand":
                _controller_commands[key_name][a.OnEnd[0].Command] = str(a.OnEnd[0].Class).split(" ")[1]
        finally:
            return

    def SwapButtons(default, remapped) -> None:
        """
        Swaps two keys' actions in the dictionary
        """
        if b.DefaultKeyName not in alreadySwapped:
            defaultItem = _controller_commands[default]
            remappedItem = _controller_commands[remapped]
            _controller_commands[default] = remappedItem
            _controller_commands[remapped] = defaultItem
            alreadySwapped.append(default)
            alreadySwapped.append(remapped)
        return
        
    # This is the default input mappings - the current preset is a InputRemappingDefinition which just contains the CHANGES from this default mapping
    controllerInput = unrealsdk.FindObject("InputDeviceDefinition", "GD_Input.Devices.InputDevice_Controller")
    for b in controllerInput.Buttons:
        _controller_commands[b.KeyName] = {}
        for a in b.PressActions:
            AddInputAction(a, b.keyName)
        for a in b.TapActions:
            AddInputAction(a, b.keyName)
        for a in b.HoldActions:
            AddInputAction(a, b.keyName)
            
        if b.KeyName in _MODIFIER_BUTTONS:
            # Remove this hold action from the button - we want to use this hold instead!
            _removed_actions[b.keyName] = b.HoldActions
            b.HoldActions = ()
    
    # Now we apply the controller preset
    presetIndex = PC.PlayerInput.ControllerPresetIndex
    PCGlobals = PC.GetWillowGlobals()
    if PCGlobals.GetPlatform() == 2:
        # Don't know if PS3 uses same index; Not tested
        preset = PCGlobals.GetGlobalsDefinition().ControllerPresetsPS3[presetIndex]
    else:
        preset = PCGlobals.GetGlobalsDefinition().ControllerPresetsXbox360[presetIndex]
        
    alreadySwapped = []
    for b in preset.RemappedButtons:
        # If a RemappedKeyName is given and different than the DefaultKeyName, then just swap these buttons
        if b.DefaultKeyName != b.RemappedKeyName:
            SwapButtons(b.DefaultKeyName, b.RemappedKeyName)
        else:
            # Otherwise, need to replace the specific actions
            _controller_commands[b.DefaultKeyName] = {}
            for a in b.RemappedPressActions:
                AddInputAction(a, b.DefaultKeyName)
            for a in b.RemappedTapActions:
                AddInputAction(a, b.DefaultKeyName)
            for a in b.RemappedHoldActions:
                AddInputAction(a, b.DefaultKeyName)
        
    # Now we apply any player custom rebindings
    for b in PC.PlayerInput.ControllerRebindings:
        SwapButtons(b.DefaultKeyName, b.RemappedKeyName)
        
    return


def _GamepadSetControllerPreset(caller: unrealsdk.UObject, function: unrealsdk.UFunction, params: unrealsdk.FStruct) -> bool:
    """
    This function is called when player settings are loaded, and whenever the controller bindings change.
    We use this to update our button mapping dictionary if the player changes options in-game.
    We need to do this AFTER this hooked function has run, to get the updated preset index amd rebindings.
    """
    unrealsdk.DoInjectedCallNext()
    caller.SetControllerPreset(params.PresetName)
    
    RecreateControllerInputDict(caller)
    return False


key_pressed = None
"""The current controller key pressed for a mod keybind"""
modifier_used: bool = False
"""Whether a mod keybind was actually used whilst holding down a modifier key"""
modifier_pressed = None
"""The current controller MODIFIER key held for a mod keybind"""
movie_opened_from_modifier = False
""" If a mod bind opens a GFx movie, then for some reason this processes the modifier key behavior before the key is actually released. We need to flag this."""


def _GamepadInputKey(caller: unrealsdk.UObject, function: unrealsdk.UFunction, params: unrealsdk.FStruct) -> bool:
    """
    This function is called on basically all player input, while ingame. Using it for our callbacks.
    """
    if not params.bGamepad:
        return True
    
    global modifier_pressed, modifier_used, _MODIFIER_BUTTONS, key_pressed, movie_opened_from_modifier
    
    # Check controller inputs
    if params.Key in _MODIFIER_BUTTONS:
        if modifier_pressed is None and params.Event == InputEvent.Pressed:
            # New modifier key
            modifier_pressed = params.Key
            modifier_used = False
            key_pressed = None
            movie_opened_from_modifier = False
            return False
        elif modifier_pressed == params.Key:
            if params.Event == InputEvent.Released:
                # Existing modifier key released
                if not modifier_used:
                    modifier_pressed = None
            else:
                # Holding down the modifier key shouldn't combo it with itself.
                return

    for mod in ModObjects.Mods:
        if not mod.IsEnabled:
            continue

        # Check controller inputs
        for input in mod.Keybinds:
            returned_input: Keybind
            if isinstance(input, Keybind):
                returned_input = input
            else:
                dh.PrintWarning(Keybind._list_deprecation_warning)
                returned_input = Keybind(*input)
                
            if returned_input.ControllerKey != "None":
                if (modifier_pressed == returned_input.ControllerModifierKey or returned_input.ControllerModifierKey == "None") and (returned_input.ControllerKey == params.Key):
                    key_pressed = params.Key
                    modifier_used = (returned_input.ControllerModifierKey != "None")    # Don't override the normal button action if no modifier key is set for this bind

                    # Prefer the callback
                    function = (
                        returned_input.OnPress or functools.partial(mod.GameInputPressed, returned_input)
                    )

                    if len(inspect.signature(function).parameters) == 0:
                        if params.Event == InputEvent.Pressed:
                            function()
                            return False
                    else:
                        function(InputEvent(params.Event))
                        return False
    return True


def _CheckSkipBehavior(command_key: str) -> bool:
    global modifier_used, modifier_pressed, key_pressed, movie_opened_from_modifier
    
    if modifier_used:
        if key_pressed is not None and command_key in _controller_commands[key_pressed]:
            # This is a command that the modded controller key would trigger (there might be multiple that have to be skipped here)
            if movie_opened_from_modifier:
                # This only cancels the FIRST behavior fired from a key - any subsequent ones will still fire. It's the best I can do without getting more complicated.
                # Realistically this will only still trigger X and Y button actions, IF a mod bound to these opens a dialog, which I can live with.
                key_pressed = None
                modifier_pressed = None
                movie_opened_from_modifier = False
            return False

        if modifier_pressed is not None and command_key in _controller_commands[modifier_pressed]:
            # This should be the command that the modifier key would trigger
            if not movie_opened_from_modifier:
                modifier_pressed = None
                key_pressed = None
            return False
    return True


def _InputCommand(caller: unrealsdk.UObject, function: unrealsdk.UFunction, params: unrealsdk.FStruct) -> bool:
    """
    This function fires whenever a Behavior_ClientConsoleCommand is called (from an InputAction)
    I use this to prevent input button actions from firing when a modded bind has been used for this button e.g. InputActionDefinition GD_Input.Actions.InputAction_Jump
    Note for some reason calling unrealsdk.Log here causes other mod hooks like PickupAsTrash's NextWeapon() to break.
    """
    return _CheckSkipBehavior(caller.Command)


def _InputPlayerBehavior(caller: unrealsdk.UObject, function: unrealsdk.UFunction, params: unrealsdk.FStruct) -> bool:
    """
    This function fires whenever a BehaviorBase class that is hooked from out dictionary is called (from an InputAction)
    I use this to prevent input button actions from firing when a modded bind has been used for this button e.g. InputActionDefinition GD_Input.Actions.InputAction_ThrowGrenade
    """
    return _CheckSkipBehavior(caller.Name)


def _MovieOpened(caller: unrealsdk.UObject, function: unrealsdk.UFunction, params: unrealsdk.FStruct) -> bool:
    """
    This is used to detect whether a mod bind opened a GFxMovie to change the sequence
    """
    global movie_opened_from_modifier, modifier_used
    movie_opened_from_modifier = modifier_used
    return True


# Create the action dictionary so we know which actions to skip later
RecreateControllerInputDict(unrealsdk.GetEngine().GamePlayers[0].Actor)
# Create the hooks for each of the special Behavior classes in the dictionary
for k in _controller_commands:
    for behaviourClass in _controller_commands[k].values():
        if behaviourClass != "Engine.Behavior_ClientConsoleCommand":
            unrealsdk.RunHook(behaviourClass + ".ApplyBehaviorToContext", "ModMenu.GamepadBindManager", _InputPlayerBehavior)

unrealsdk.RunHook("WillowGame.WillowPlayerController.SetControllerPreset", "ModMenu.GamepadBindManager", _GamepadSetControllerPreset)
unrealsdk.RunHook("WillowGame.WillowUIInteraction.InputKey", "ModMenu.GamepadBindManager", _GamepadInputKey)
unrealsdk.RunHook("Engine.Behavior_ClientConsoleCommand.ApplyBehaviorToContext", "ModMenu.GamepadBindManager", _InputCommand)
unrealsdk.RunHook("WillowGame.WillowGFxUIManager.PlayMovie", "ModMenu.GamepadBindManager", _MovieOpened)
