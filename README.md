# BL2-SDK
Borderlands 2 tools for creating and loading custom plugins

* Rename existing binkw32.dll to binkw23.dll
* Copy new binkw32.dll to Win32 folder
* Create a folder called `plugins` in the binaries folder
* Copy the directory `lua/include` into the new `plugins` directory 
* Place scripts that you want to run in `binaries/Win32/lua/`

You'll need to manually enable the console in the binary ATM.  
`l <lua code>` runs arbitrary lua code.
`lo <lua file>` runs arbitrary lua files from `binaries/Win32/lua/`.

Based off of Borderlands2SDK by McSimp, drmalc's bl2monitor, TheFeckless' UE3 SDK Generator, zeroKilo's ProxyDllMaker, Erik JS' ME1 ASI Loader, and more
