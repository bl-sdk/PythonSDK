from unrealsdk import *
from Mods import ModMenu
from typing import List, Callable

class NetworkExample(ModMenu.SDKMod):
    Name: str = "Network Example"
    Version: str = 0.1
    Keybinds: List[ModMenu.Keybind] = [ ModMenu.Keybind("Log", "L") ]
    SaveEnabledState: ModMenu.EnabledSaveType = ModMenu.EnabledSaveType.LoadWithSettings

    def ServerLogSomething(self, arg1: str, arg2: str) -> None:
        Log(f"ServerLogSomething called (arg1: {arg1}, arg2: {arg2})")

    def ClientLogSomething(self, arg1: str, arg2: str) -> None:
        Log(f"ClientLogSomething called (arg1: {arg1}, arg2: {arg2})")

    ServerMethods: List[Callable[..., None]] = [ ServerLogSomething ]
    ClientMethods: List[Callable[..., None]] = [ ClientLogSomething ]

    def Enable(self):
        ModMenu.RegisterNetworkMethods(self)

    def Disable(self):
        ModMenu.UnregisterNetworkMethods(self)

    def GameInputPressed(self, bind):
        if bind.Name == "Log":
            self.ServerLogSomething("foo", "bar")
            self.ClientLogSomething("biz", arg2="baz")

ModMenu.RegisterMod(NetworkExample())