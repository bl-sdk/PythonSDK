# UnrealEngine PythonSDK
An UnrealEngine Plugin enabling using Python to write plugins that interact directly with UE objects

## List of compatible games
* Borderlands 2 (1.8.7)
* Borderlands: The Pre-Sequel!

## Installation

Begin by [downloading the latest version of `PythonSDK.zip` here](https://github.com/Matt-Hurd/BL2-SDK/releases).


For PythonSDK to be able to interact with the game, you must add a few things to the game's Win32 folder. If you already have PluginLoader installed, you'll need to overwrite some files.

1. Quit the game if it is running.  

2. Extract all of the contents of PythonSDK.zip into your `Borderlands 2\Binaries\Win32` directory.  
If you are asked to overwrite any files, accept. This mod replaces (and functions the same as) c0dy's Plugin Loader.

3. If you have installed an older version of the SDK, delete the old files. This includes `Win32\Plugins\PythonSDK.dll`

## Usage

`py <python code>` runs arbitrary python code.  
`pyexec <python file>` runs arbitrary python files from `binaries/Win32/Plugins/Python/`.

## Borderlands Ingame Mod Manager

On the main menu, `Downloadable Content` is replace with `Mods`  
![Mods](https://i.imgur.com/HOHcwYh.jpg)  

Mods can be enabled and disabled by selecting them and pressing `Enter`  
![ModManager](https://i.imgur.com/8ZaUsDP.png)

## Contact Us
https://discord.gg/VJXtHvh
