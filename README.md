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
After cloning the repo, there are a extra few steps you need to do to start devloping.

1. Clone the submodules.
   ```
   git submodule update --init
   ```

2. Install Python. Make sure to install the dev headers.
   
3. Copy `Directory.Build.props.template` to `Directory.Build.props`.
   The template is set to read from your `PYTHONPATH`, you may need to overwrite this, especially if you're planning on compiling for both 32 and 64-bit.

4. (OPTIONAL) Copy `copy_build_to_game.bat.template` to `copy_build_to_game.bat`.
   This script is run post-build, taking the project configuration and platform, and path to the built SDK dll as args.
   You can use it to copy this file into your game directory for testing. You *will* need to manually modify it for your setup.
