import bl2sdk
from bl2sdk import *
import os
import json
import sys
import mypy

from .ModManager import *
from .OptionManager import *
from .KeybindManager import *


""" The path to our mods folder, determined via the directory containing the current executable (Borderlands2.exe)."""
Win32Directory = os.path.dirname(sys.executable)
ModsDirectory = os.path.join(Win32Directory, "Mods")

from .ModMenuManager import *


""" Here goes all of our mod / keybind settings savings. """


""" A list of the currently loaded modules. """ 
def getLoadedMods():
    modules = [m for m in sys.modules.values() if m]
    loadedMods = dict()
    for module in modules:
        try:
            # We don't want ourselves.
            if module.__file__.find("Win32\\Mods") != -1 and module.__file__.find("Win32\\Mods\\__init__.py") == -1:
                properties = module.__dir__()
                for mod in bl2sdk.Mods: 
                    if mod.Status != "Disabled" and mod.__class__.__name__ in properties:
                        loadedMods[mod] = module
                        break
        except AttributeError:
            continue
    return loadedMods

def getModModule(mod):
    modModule = ""
    modules = [m for m in sys.modules.values() if m]
    for module in modules:
        try:
            if module.__file__.find("Win32\\Mods") != -1 and module.__file__.find("Win32\\Mods\\__init__.py") == -1:
                if mod.__class__.__name__ in module.__dir__():
                    modModule = module
                    break
        except AttributeError: continue 
    return modModule

""" Save all of our mod settings, keybinds, etc"""
def storeModSettings():
    loadedMods = getLoadedMods()
    for mod in loadedMods:
        if (mod not in OptionsManager.OptionList.values()) and (not mod.Keybinds):
            continue
        modSettings = {}
        modSettings["Options"] = {}
        modSettings["Keybinds"] = {}
        if mod in OptionsManager.OptionList.values():
            settingsList = [key for(key, value) in OptionsManager.OptionList.items() if value == mod]
            for setting in settingsList:
                if type(setting) is Options.Spinner:
                    currentVal = setting.Choices[setting.Choices.index(setting.CurrentValue)]
                    modSettings["Options"].update( {setting.Caption : currentVal } )
                else:
                    modSettings["Options"].update( {setting.Caption : setting.CurrentValue } )
        for keybind in mod.Keybinds:
            modSettings["Keybinds"].update( {keybind[0] : keybind[1] } ) 
        modDirectory = os.path.dirname(os.path.realpath(loadedMods[mod].__file__))
        settingsPath = os.path.join(modDirectory, "settings.json")
        
        with open(settingsPath, "w") as configFile:
            json.dump(modSettings, configFile, indent=4)

""" This function is called whenever the user leaves the KB&M / Gameplay (Plugins) menu"""
def HookOnPop(caller: UObject, function: UFunction, params: FStruct) -> bool:
    if caller.MenuDisplayName == "GAMEPLAY" or caller.MenuDisplayName == "PLUGINS" or caller.MenuDisplayName == "KEYBOARD & MOUSE":
        storeModSettings()
    return True

RunHook("WillowGame.WillowScrollingListDataProviderOptionsBase.OnPop", "HookOnPop", HookOnPop)