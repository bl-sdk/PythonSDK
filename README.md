# UnrealEngine PythonSDK
[![Support Discord](https://img.shields.io/static/v1?label=&message=Support%20Discord&logo=discord&color=424)](https://discord.gg/bXeqV8Ef9R)
[![Developer Discord](https://img.shields.io/static/v1?label=&message=Developer%20Discord&logo=discord&color=222)](https://discord.gg/VJXtHvh)

An UnrealEngine Plugin enabling using Python to write plugins that interact directly with UE objects

## List of compatible games
- Borderlands 2
- Borderlands: The Pre-Sequel
- Tiny Tina’s Assault on Dragon Keep: A Wonderlands One-shot Adventure

### [For installation instructions, see the project site.](https://bl-sdk.github.io/)

## Linux (SteamPlay/Proton and Wine)

PythonSDK does not yet work natively on Linux, but it seems to work well under SteamPlay/Proton and Wine.  To load properly, though, Wine needs to be told to allow `ddraw.dll` overrides.  Additionally, the latest SDK release (as of February 29, 2020) wants the main executable name to be `Borderlands2.exe`, so doing a symlink/copy for `Launcher.exe` won't work.  Simply set the game's launch options (via `Properties -> General`) to:

    WINEDLLOVERRIDES="ddraw=n,b" %command%

