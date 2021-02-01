from __future__ import annotations

import unrealsdk
import functools
from typing import Any, Callable, Optional

from . import ModObjects


def Hook(target: str, name: str = "{0}") -> Callable[
        [Callable[[unrealsdk.UObject, unrealsdk.UFunction, unrealsdk.FStruct], Any]],
        Callable[[unrealsdk.UObject, unrealsdk.UFunction, unrealsdk.FStruct], Any]
    ]:
    """
    A decorator function for functions that should be invoked in response to an Unreal Engine
    method's invokation. The signature of the function being decorated must match that of
    `unrealsdk.RegisterHook` functions:
        (caller: unrealsdk.UObject, function: unrealsdk.UFunction, params: unrealsdk.FStruct)
    Upon invokation, the `caller` argument will contain the Unreal Engine object whose method was
    invoked, the `function` argument will contain the Unreal Engine function that was invoked,
    and the `params` argument will contain an `FStruct` with the arguments passed to the method.

    Args:
        target:
            A string representing the Unreal Engine method that should be hooked, in the format
            "<PackageName>.<ClassName>.<MethodName>".
        name:
            A name used to differentiate this hook from other hooks for the same target. If not
            specified, an appropriate one will be generated. If a custom name is desired (for
            example, to allow for custom manipulation of this hook via `unrealsdk.RemoveHook()`
            etc.), a format string may be specified. This format string will be passed the
            function's module name as argument `{0}`.
    """
    def applyHook(function):
        unrealsdk.RunHook(target, name.format(function.__module__), function)
    return applyHook


def HookMethod(target: str, name: str = "{0}.{1}") -> Callable[
        [Callable[[ModObjects.SDKMod, unrealsdk.UObject, unrealsdk.UFunction, unrealsdk.FStruct], Any]],
        Callable[[ModObjects.SDKMod, unrealsdk.UObject, unrealsdk.UFunction, unrealsdk.FStruct], Any]
    ]:
    """
    A decorator function for mods' instance methods that should be invoked in response to an Unreal
    Engine method's invokation. The signature of the method being decorated must match that of
    `unrealsdk.RegisterHook` functions (with the exception of `self` being the first argument):
        (self, caller: unrealsdk.UObject, function: unrealsdk.UFunction, params: unrealsdk.FStruct)
    Upon invokation, the `caller` argument will contain the Unreal Engine object whose method was
    inoked; the `function` argument will contain the Unreal Engine function object that was invoked,
    and the `params` argument will contain an `FStruct` with the arguments passed to the method.

    Args:
        target:
            A string representing the Unreal Engine method that should be hooked, in the format
            "<PackageName>.<ClassName>.<MethodName>".
        name:
            A name used to differentiate this hook from other hooks for the same target. If not
            specified, an appropriate one will be generated for each instance of the mod. If a
            custom name is desired (for example to allow for custom manipulation of this hook via
            `unrealsdk.RemoveHook()` etc.), a format string may be specified. This format string
            will be passed the mod's module name as argument `{0}` and the `id()` of the mod
            instance as argument `{1}`.
    """
    def applyHookAttributes(function):
        function._hook_target = target
        function._hook_name = name
        return function
    return applyHookAttributes


def _WrapHookMethod(method):
    @functools.wraps(method)
    def wrappedMethod(caller: unrealsdk.UObject, function: unrealsdk.UFunction, params: unrealsdk.FStruct):
        method(caller, function, params)
    return wrappedMethod


def RegisterHooks(mod: ModObjects.SDKMod) -> None:
    """
    Registers all `@HookMethod` decorated methods for the mod instance. Said methods will
    subsequently be called in response to the hooked Unreal Engine methods.
    """
    for function in type(mod)._hooks:
        name = function._hook_name.format(type(mod).__module__, id(mod))
        method = function.__get__(mod, type(mod))
        unrealsdk.RunHook(function._hook_target, name, _WrapHookMethod(method))


def UnregisterHooks(mod: ModObjects.SDKMod) -> None:
    """
    Unregisters all `@HookMethod` decorated methods for the mod instance. Said methods will no
    longer be called in response to the hooked Unreal Engine methods.
    """
    for function in type(mod)._hooks:
        name = function._hook_name.format(type(mod).__module__, id(mod))
        unrealsdk.RemoveHook(function._hook_target, name)
