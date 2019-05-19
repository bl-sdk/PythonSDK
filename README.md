# UnrealEngine PythonSDK
An UnrealEngine Plugin enabling using Python to write plugins that interact directly with UE objects

## List of compatible games
* Borderlands 2 (1.8.7)
* Borderlands: The Pre-Sequel!

## Installation

Begin by [downloading the latest version of `PythonSDK.zip` here](https://github.com/Matt-Hurd/BL2-SDK/releases).


For PythonSDK to be able to interact with the game, you must add a few things to the game's Win32 folder. If you already have PluginLoader installed, you are all set to go and may skip ahead to Step 6.

1. Quit the game if it is running.
2. [Download the latest version of `ddraw.dll` (A.K.A. PluginLoader).](https://github.com/c0dycode/BorderlandsPluginLoader/releases)
3. Locate the `Win32` folder within your game's `Binaries` folder. ![Win32 folder](https://i.imgur.com/t6OI06l.png)

4. Copy `ddraw.dll` to the `Win32` folder. ![ddrawl.dll](https://i.imgur.com/FHfiSqg.png)

5. In the `Win32` folder, create a folder called `Plugins`. ![Plugins folder](https://i.imgur.com/CDdoKDs.png)

6. Open the `PythonSDK.zip` file to view its contents. ![PythonSDK.dll](https://i.imgur.com/NVYad7L.png)

7. Extract all of the files to the `Plugins` folder you created. ![Plugins Folder 2](https://i.imgur.com/LWwJk9z.png)

## Usage

`py <python code>` runs arbitrary python code.  
`pyexec <python file>` runs arbitrary python files from `binaries/Win32/Plugins/Python/`.

## Borderlands Ingame Mod Manager

On the main menu, `Downloadable Content` is replace with `Mods`  
![Mods](https://i.imgur.com/HOHcwYh.jpg)  

Mods can be enabled and disabled by selecting them and pressing `Enter`  
![ModManager](https://i.imgur.com/8ZaUsDP.png)
