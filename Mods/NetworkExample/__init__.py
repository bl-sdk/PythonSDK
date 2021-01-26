from unrealsdk import *
from Mods import ModMenu
from Mods.ModMenu import ServerMethod
from Mods.ModMenu import ClientMethod

from typing import List, Callable

class NetworkExample(ModMenu.SDKMod):
    Name: str = "Network Example"
    Version: str = 0.1

    Keybinds: List[ModMenu.Keybind] = [ ModMenu.Keybind("Log", "L") ]
    SaveEnabledState: ModMenu.EnabledSaveType = ModMenu.EnabledSaveType.LoadWithSettings

    @ServerMethod
    def ServerLogSomething(self, arg1: str, arg2: str) -> None:
        Log(f"ServerLogSomething called (arg1: {arg1}, arg2: {arg2})")

    @ClientMethod
    def ClientLogSomething(self, arg1: str, arg2: str) -> None:
        Log(f"ClientLogSomething called (arg1: {arg1}, arg2: {arg2})")

    @ServerMethod
    @ClientMethod
    def BothLogSomething(self, arg1: str, arg2: str) -> None:
        Log(f"BothLogSomething called (arg1: {arg1}, arg2: {arg2})")

    def Enable(self):
        ModMenu.RegisterNetworkMethods(self)

    def Disable(self):
        ModMenu.UnregisterNetworkMethods(self)

    def GameInputPressed(self, bind):
        if bind.Name == "Log":
            self.ServerLogSomething("foo", "bar")
            self.ClientLogSomething("biz", arg2="baz")
            self.BothLogSomething(arg1="biz", arg2="baz")

ModMenu.RegisterMod(NetworkExample())