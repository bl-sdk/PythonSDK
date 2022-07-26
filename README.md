# UnrealEngine PythonSDK
[![Support Discord](https://img.shields.io/static/v1?label=&message=Support%20Discord&logo=discord&color=424)](https://discord.gg/bXeqV8Ef9R)
[![Developer Discord](https://img.shields.io/static/v1?label=&message=Developer%20Discord&logo=discord&color=222)](https://discord.gg/VJXtHvh)

## [The BL2/TPS/AoDK Mod Manager has moved, click here](https://github.com/bl-sdk/bl2-mod-manager/)

An UnrealEngine Plugin enabling using Python to write plugins that interact directly with UE objects

## List of confirmed compatible games
- Borderlands 2
- Borderlands: The Pre-Sequel
- Tiny Tina’s Assault on Dragon Keep: A Wonderlands One-shot Adventure

# Developing
To get started developing:

1. Clone the repo (including submodules).
   ```
   git clone --recursive https://github.com/bl-sdk/PythonSDK.git
   ```

2. Install Python for your platform, and make sure to install the dev headers.

   NOTE: installing the Python debug libraries may cause linker issues, see
   [pybind#3403](https://github.com/pybind/pybind11/issues/3403).

3. Choose a preset, and run CMake. Most IDEs will have some form of CMake intergration, or you can
   run the commands manually.
   ```
   cmake . --preset msvc-ue3-x86-debug
   ```

4. Check that it found the right Python version (architecture can be a pain). If it's wrong, copy
   the `user-python.cmake.template`, and edit it to point to the correct version.

5. (OPTIONAL) Copy `postbuild.template`, and edit it to copy files to your game install directories.

6. Re-run CMake, and then build/debug with the build system of your choice. Template file existance
   is only checked during configuration.

7. (OPTIONAL) If you're debugging a game on Steam, add a `steam_appid.txt` in the same folder as the
   executable, containing the game's Steam App Id.

   Normally, games compiled with Steamworks will call
   [`SteamAPI_RestartAppIfNecessary`](https://partner.steamgames.com/doc/sdk/api#SteamAPI_RestartAppIfNecessary),
   which will drop your debugger session when launching the exe directly - adding this file prevents
   that. Not only does this let you debug from entry, it also unlocks some really useful debugger
   features which you can't access from just an attach (i.e. Visual Studio's Edit and Continue).
