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

### Linux (SteamPlay/Proton and Wine)

PythonSDK does not yet work natively on Linux, but it seems to work well under SteamPlay/Proton and Wine.  To load properly, though, Wine needs to be told to allow `ddraw.dll` overrides.  Additionally, the latest SDK release (as of February 29, 2020) wants the main executable name to be `Borderlands2.exe`, so the common workaround of a `Launcher.exe` symlink/copy won't do the trick.  Instead, set the game's launch options (via `Properties -> General`) to:

    WINEDLLOVERRIDES="ddraw=n,b" bash -c 'exec "${@/Launcher.exe/Borderlands2.exe}"' -- %command%

Note that using `WINEDLLOVERRIDES` for `ddraw` isn't supported by the Wine developers, so if you experience problems with the game while using this method, please don't ask the WineHQ team for assistance.

## Usage

`py <python code>` runs arbitrary python code.  
`pyexec <python file>` runs arbitrary python files from `binaries/Win32/Mods/`.


### Installing Mods

Mods live in the `Borderlands 2\Binaries\Win32\Mods` folder. Each mod should be place in it's own subfolder, and contain an `__init__.py`. Example: `Win32\Mods\SkillRandomizer\__init__.py`   


## Borderlands Ingame Mod Manager

On the main menu, `Downloadable Content` is replace with `Mods`  
![Mods](https://i.imgur.com/HOHcwYh.jpg)  

Mods can be enabled and disabled by selecting them and pressing `Enter`  
![ModManager](https://i.imgur.com/8ZaUsDP.png)

## Contact Us
https://discord.gg/VJXtHvh
