from __future__ import annotations

import unrealsdk
import functools
import weakref
from typing import Any, Callable, Optional, Union
from inspect import signature, Parameter

from . import ModObjects


_HookFunction = Callable[[unrealsdk.UObject, unrealsdk.UFunction, unrealsdk.FStruct], Any]
_HookMethod = Callable[[Any, unrealsdk.UObject, unrealsdk.UFunction, unrealsdk.FStruct], Any]
_HookAny = Union[_HookFunction, _HookMethod]


def Hook(target: str, name: str = "{0}.{1}") -> Callable[[_HookAny], _HookAny]:
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
            A string which, when paired with the hook target, uniquely identifies this hook within
            the SDK. By default, a name is generated using the function's module, qualified name,
            and `id()` (in the case of mod instance method hooks, the mod instance's `id()` is used
            instead).

            A custom name may be provided in the form of a format string. If desired, argument `{0}`
            will contain the function's module name and qualified name, separated by a ".". Argument
            `{1}` will contain the `id()` of the function or mod instance.
    """
    def apply_hook(function: _HookAny) -> _HookAny:
        # If the function has four parameters, it should be a method.
        params = signature(function).parameters
        is_method = (len(params) == 4)

        # Retrieve the function's dictionary of targets. If it does not yet have one, we preform
        # initial setup on it now.
        hook_targets = getattr(function, "HookTargets", None)
        if hook_targets is None:
            paramException = ValueError("Hook functions must have the signature ([self,] caller: unrealsdk.UObject, function: unrealsdk.UFunction, params: unrealsdk.FStruct)")

            # If the function is an instance method, create a mutable list of the parameters and
            # remove the `self` one, so we may check the remaining ones same as a non-method.
            params = list(params.values())
            if is_method:
                del params[0]
            # If the function has neither 4 nor 3 parameters, it is invalid.
            elif len(params) != 3:
                raise paramException
            # If the functions parameters do not accept positional arguments, it is invalid.
            for param in params:
                if Parameter.POSITIONAL_ONLY != param.kind != Parameter.POSITIONAL_OR_KEYWORD:
                    raise paramException
            # Matches the behavior of the SDK itself (CPythonInterface.cpp), should include?
            if params[0].name != "caller" or params[1].name != "function" or params[2].name != "params":
                raise paramException

            function.HookName = name if is_method else name.format(
                f"{function.__module__}.{function.__qualname__}", id(function)
            )

            # With the function now known as valid, create its dictionary of targets.
            hook_targets = function.HookTargets = set()

        hook_targets.add(target)

        if not is_method:
            unrealsdk.RunHook(target, function.HookName, function)

        return function
    return apply_hook


def _create_method_wrapper(obj_ref: weakref.ReferenceType[object], obj_function: _HookMethod) -> _HookFunction:
    """Return a "true" function for the given bound method, passable to `unrealsdk.RegisterHook`."""
    @functools.wraps(obj_function)
    def method_wrapper(caller: unrealsdk.UObject, function: unrealsdk.UFunction, params: unrealsdk.FStruct) -> Any:
        obj = obj_ref()
        method = obj_function.__get__(obj, type(obj))
        return method(caller, obj_function, params)
    return method_wrapper


def RegisterHooks(obj: object) -> None:
    """
    Registers all `@Hook` decorated methods for the object. Said methods will subsequently be called
    in response to the hooked Unreal Engine methods.

    Args:
        obj: The object for which to register method hooks.
    """
    cls = type(obj)
    obj_ref = weakref.ref(obj, RemoveHooks)

    for attribute_name, function in cls.__dict__.items():
        if not callable(function):
            continue

        hook_targets = getattr(function, "HookTargets", None)
        if hook_targets is None or len(signature(function).parameters) != 4:
            continue

        method_wrapper = _create_method_wrapper(obj_ref, function)
        setattr(obj, attribute_name, method_wrapper)

        method_wrapper.HookName = function.HookName.format(
            f"{function.__module__}.{function.__qualname__}", id(obj)
        )

        for target in hook_targets:
            unrealsdk.RunHook(target, method_wrapper.HookName, method_wrapper)


def RemoveHooks(obj: object) -> None:
    """
    Unregisters all `@Hook` decorated methods for the mod instance. Said methods will no longer be
    called in response to the hooked Unreal Engine methods.

    Args:
        mod: The mod for which to unregister method hooks.
    """
    for function in obj.__dict__.values():
        if not callable(function):
            continue

        hook_targets = getattr(function, "HookTargets", None)
        if hook_targets is None:
            continue

        for target in hook_targets:
            unrealsdk.RemoveHook(target, function.HookName)
