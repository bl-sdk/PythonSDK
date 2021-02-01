from unrealsdk import *
from Mods import ModMenu
from Mods.ModMenu import Hook, HookMethod, ServerMethod, ClientMethod

from typing import List, Callable
import functools


def LocalDecorator(function):
    @functools.wraps(function)
    def wrapper(*args, **kwargs):
        Log(f"LocalDecorator called for {wrapper.__qualname__}")
        function(*args, **kwargs)
    return wrapper

def RemoteDecorator(function):
    @functools.wraps(function)
    def wrapper(*args, **kwargs):
        Log(f"RemoteDecorator called for {wrapper.__qualname__}")
        function(*args, **kwargs)
    return wrapper


@Hook("WillowGame.WillowUIInteraction.InputKey")
@Hook("WillowGame.WillowUIInteraction.InputKey", "{0}.{1}.AlsoShould")
def LogSomethingOnInput(caller: UObject, function: UFunction, params: FStruct):
    Log(f"LogSomethingOnInput called ({params})")
    return True

@Hook("WillowGame.WillowUIInteraction.InputKey", "ShouldNot")
def ShouldNotLogSomethingOnInput(caller: UObject, function: UFunction, params: FStruct):
    Log(f"ShouldNotLogSomethingOnInput called ({params})")
    return True

@Hook("WillowGame.WillowUIInteraction.InputKey", "{0}.AlsoShouldNot")
def AlsoShouldNotLogSomethingOnInput(caller: UObject, function: UFunction, params: FStruct):
    Log(f"AlsoShouldNotLogSomethingOnInput called ({params})")
    return True

RemoveHook("WillowGame.WillowUIInteraction.InputKey", "ShouldNot")
RemoveHook("WillowGame.WillowUIInteraction.InputKey", "Mods.DecoratorExample.AlsoShouldNot")


class DecoratorExample(ModMenu.SDKMod):
    Name: str = "Decorator Example"
    Version: str = "0.1"

    Keybinds: List[ModMenu.Keybind] = [ ModMenu.Keybind("Log", "L") ]
    SaveEnabledState: ModMenu.EnabledSaveType = ModMenu.EnabledSaveType.LoadWithSettings

    @LocalDecorator
    @ServerMethod
    @RemoteDecorator
    def ServerLogSomething(self, arg1: str, arg2: str, playerController = None) -> None:
        Log(f"ServerLogSomething called by {playerController.PlayerReplicationInfo.PlayerID} (arg1: {arg1}, arg2: {arg2})")

    @LocalDecorator
    @ClientMethod
    @RemoteDecorator
    def ClientLogSomething(self, arg1: str, arg2: str, *, playerController = None) -> None:
        Log(f"ClientLogSomething called (arg1: {arg1}, arg2: {arg2})")

    @LocalDecorator
    @ServerMethod
    @ClientMethod
    @RemoteDecorator
    def BothLogSomething(self, arg1: str, arg2: str) -> None:
        Log(f"BothLogSomething called (arg1: {arg1}, arg2: {arg2})")

    @HookMethod("WillowGame.WillowUIInteraction.InputKey")
    @HookMethod("WillowGame.WillowUIInteraction.InputKey", "{0}.{1}.{2}.AlsoShould")
    def InstanceLogSomethingOnInput(self, caller: UObject, function: UFunction, params: FStruct):
        Log(f"InstanceLogSomethingOnInput called ({params})")
        return True

    @HookMethod("WillowGame.WillowUIInteraction.InputKey", "ShouldNot - {1}")
    def InstanceShouldNotLogSomethingOnInput(self, caller: UObject, function: UFunction, params: FStruct):
        Log(f"InstanceShouldNotLogSomethingOnInput called ({params})")
        return True

    def Enable(self):
        super().Enable()
        RemoveHook("WillowGame.WillowUIInteraction.InputKey", f"ShouldNot - {id(self)}")

    def GameInputPressed(self, bind):
        if bind.Name == "Log":
            self.ServerLogSomething("foo", "bar")
            for PRI in GetEngine().GetCurrentWorldInfo().GRI.PRIArray:
                if PRI.Owner is not None and PRI.Owner is not GetEngine().GamePlayers[0].Actor:
                    self.ClientLogSomething("biz", arg2="baz", playerController=PRI.Owner)
            self.BothLogSomething(arg1="biz", arg2="baz")

ModMenu.RegisterMod(DecoratorExample())