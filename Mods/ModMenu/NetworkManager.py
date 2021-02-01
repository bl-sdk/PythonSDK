from __future__ import annotations

import unrealsdk
import functools
import inspect
import traceback
from collections import deque
from time import time
from typing import Any, Callable

from . import ModObjects


_message_queue = deque()

class _Message():
    """
    A simple class that tracks the various pieces of information involved in, and facilitates the
    # sending of, a network message.

    Attributes:
        ID: The unique ID of the message.
        playerController: The player controller the message will be sent through.
        messageType: The message type string.
        arguments: The serialized argument string.
        server: `True` if the message is destined to a server, `False` if destined to a client.
        timeout: `None` if the message has been sent, otherwise a float representing the real time
            it will time out.
    """
    def __init__(self, playerController: unrealsdk.UObject, messageType: str, arguments: str, server: bool):
        """
        Create a new message.

        Args:
            playerController: The player controller to send the message through.
            messageType: The message type string.
            arguments: The serialized argument string.
            server: `True` if the message is destined to a server, `False` if destined to a client.
        """
        self.ID = str(id(self))
        self.playerController = playerController
        self.messageType = messageType
        self.arguments = f"{self.ID}:{arguments}"
        self.server = server
        self.timeout = None

    def Send(self) -> None:
        """
        Send the message.
        """
        if self.server:
            self.playerController.ServerSpeech(self.messageType, 0, self.arguments)
        else:
            self.playerController.ClientMessage(self.arguments, self.messageType)
        # Set our timeout to be 2x (for leeway) the ping in each direction from the receiving end.
        self.timeout = time() + self.playerController.PlayerReplicationInfo.ExactPing * 4


def _PlayerTick(caller: unrealsdk.UObject, function: unrealsdk.UFunction, params: unrealsdk.FStruct):
    if time() > _message_queue[0].timeout:
        _DequeueMessage()
    return True

def _EnqueueMessage(message: _Message) -> None:
    """Add a message to the message queue, sending it if message queue is empty."""
    _message_queue.append(message)

    # If this was the first message to be added to the queue, send it now, and register our tick
    # hook to observe for its timeout.
    if len(_message_queue) == 1:
        message.Send()
        unrealsdk.RegisterHook("Engine.PlayerController.PlayerTick", "ModMenu.NetworkManager", _PlayerTick)

def _DequeueMessage() -> None:
    """Remove the frontmost message from the message queue, sending the following one, if any."""
    _message_queue.popleft()

    # If the queue is not empty, send the now-frontmost message.
    if len(_message_queue) > 0:
        _message_queue[0].Send()
    # If this was the last message in the queue, we may cease observing message timeouts.
    else:
        unrealsdk.RemoveHook("Engine.PlayerController.PlayerTick", "ModMenu.NetworkManager")


_method_senders = set()

def _FindMethodSender(function: Callable[..., Any]) -> Callable[..., Any]:
    """
    Searches through arbitrarily nested decorator functions to attempt to find a method sender,
    returning it, or `None` if one isn't found.

    This assumes the decorators all follow the convention and use `@functools.wraps`, so we can
    follow the nesting via `__wrapped__`.
    """
    while function is not None:
        if function in _method_senders:
            break
        function = getattr(function, "__wrapped__", None)
    return function

def _CreateMethodSender(function: Callable[..., None]) -> Callable[..., None]:
    """
    Create a new function that will replace ones decorated as network methods, intercepting their
    local calls, and instead transmitting a request to remote copies of the mod.
    """
    # Format the unique message type we will use to identify requests sent and received for this
    # method, using the module and hierarchy within the module it was defined in.
    message_type = f"unrealsdk.{function.__module__}.{function.__qualname__}"

    signature = inspect.signature(function)
    parameters = list(signature.parameters.values())
    if len(parameters) < 1:
        unrealsdk.Log(f"Unable to register network method <{message_type}>.")
        unrealsdk.Log("    @ServerMethod and @ClientMethod decorated methods must be mod instance methods")
        return None

    # To be able to correctly map arguments to their parameters, remove the first (`self`)
    # parameters from the signature.
    del parameters[0]
    signature = signature.replace(parameters=parameters)

    # Record whether or not this function includes a parameter for specifying a player controller.
    specifiesPlayerController = (signature.parameters.get("playerController") is not None)

    # "Wrap" the original function. Among other things, this assigns the original function to the
    # __wrapped__ attribute of the new one.
    @functools.wraps(function)
    def methodSender(self: ModObjects.SDKMod, *args, **kwargs) -> None:
        # If the current netmode doesn't indicate client mode, we will be sending a server message.
        worldInfo = unrealsdk.GetEngine().GetCurrentWorldInfo()
        PRIs = list(worldInfo.GRI.PRIArray)

        # Determine whether this message should be sent to a server and whether it should be sent to
        # client(s). If neither, we have nothing to send.
        sendServer = (methodSender._is_server and worldInfo.NetMode == 3) # ENetMode.NM_Client
        sendClient = (methodSender._is_client and worldInfo.NetMode != 3 and len(PRIs) > 1)
        if not (sendServer or sendClient):
            return

        # Use the inspect module to correctly map the received arguments to their parameters.
        bindings = signature.bind(*args, **kwargs)
        # If the arguments include one specifying a player controller we will be messaging, retrieve
        # which one, and purge it.
        if specifiesPlayerController:
            playerController = bindings.arguments.get("playerController")
            bindings.arguments["playerController"] = None
        else:
            playerController = None

        # Serialize the arguments we were called with using the class's serializer function.
        arguments = type(self).NetworkSerializer({"args": bindings.args, "kwargs": bindings.kwargs})

        # If this method is marked to send messages to the server, and we are currently a client, we
        # will message to the server.
        if sendServer:
            # We will be using our client-side copy of our player controller to message the server.
            playerController = unrealsdk.GetEngine().GamePlayers[0].Actor
            _EnqueueMessage(_Message(playerController, message_type, arguments, True))

        elif sendClient:
            # If the mapped arguments do include one specifying a specific player controller to
            # message, we will spend this message to it.
            if playerController is not None:
                _EnqueueMessage(_Message(playerController, message_type, arguments, False))
            # If no player controller was specified, then send a message to each replicated player
            # that has a player controller that is not our own.
            else:
                for PRI in PRIs:
                    if PRI.Owner is not None and PRI.Owner is not unrealsdk.GetEngine().GamePlayers[0].Actor:
                        _EnqueueMessage(_Message(PRI.Owner, message_type, arguments, False))

    # Assign the server and client attributes to identify this method's role.
    methodSender._message_type = message_type
    methodSender._is_server = False
    methodSender._is_client = False

    _method_senders.add(methodSender)
    return methodSender


def ServerMethod(function: Callable[..., None]) -> Callable[..., None]:
    """
    A decorator function for mods' instance methods that should be invoked on server copies of the
    mod rather than the local copy. The decorated function must be an instance method (have `self`
    as the first parameter). It may optionally include a parameter named `playerController`; if it
    does, upon invokation on the server, its value will be set to the player controller for the
    client who requested the method.
    """

    # Check if the function already has a method sender. If it doesn't, create one now.
    method_sender = _FindMethodSender(function)
    if method_sender is None:
        method_sender = _CreateMethodSender(function)
        if method_sender is None:
            return function

    method_sender._is_server = True
    return method_sender

def ClientMethod(function: Callable[..., None]) -> Callable[..., None]:
    """
    A decorator function for mods' instance methods that should be invoked on client copies of the
    mod rather than the local copy. The decorated function must be an instance method (have `self`
    as the first parameter). It may optionally include a parameter named `playerController`; if it
    does, and if a client's player controller is specified when calling this method on the server,
    the invokation will be sent to that client.
    """

    # Check if the function already has a method sender. If it doesn't, create one now.
    method_sender = _FindMethodSender(function)
    if method_sender is None:
        method_sender = _CreateMethodSender(function)
        if method_sender is None:
            return function

    method_sender._is_client = True
    return method_sender


_server_message_types = {}
_client_message_types = {}

def RegisterNetworkMethods(mod: ModObjects.SDKMod) -> None:
    """
    Enables a mod's interaction with server and client copies of itself. Methods for the mod that
    are decorated with @NetworkManager.Server and @NetworkManager.Client subsequently send requests
    to servers and clients when invoked locally. In addition, said methods have ther original
    implementations invoked locally when requests are recieved from servers and clients.

    Args:
        mod: The instance of the mod to register for network method handling.
    """

    cls = type(mod)

    # For each network method in this mod's class, create a bound version for this mod instance, and
    # add it to the set associated with the method's message type, creating one if necessary.
    for function in cls._server_functions:
        method = function.__wrapped__.__get__(mod, cls)
        if function._message_type in _server_message_types:
            _server_message_types[function._message_type].add(method)
        else:
            _server_message_types[function._message_type] = {method}

    for function in cls._client_functions:
        method = function.__wrapped__.__get__(mod, cls)
        if function._message_type in _client_message_types:
            _client_message_types[function._message_type].add(method)
        else:
            _client_message_types[function._message_type] = {method}

def UnregisterNetworkMethods(mod: ModObjects.SDKMod) -> None:
    """
    Disables a mod's interaction with server and client copies of itself. Requests will no longer be
    sent when @NetworkManager.Server and @NetworkManager.Client methods are invoked locally, and
    incoming requests for said methods will be ignored.

    Args:
        mod: The instance of the mod to unregister for network method handling.
    """

    cls = type(mod)

    # For each network method in this mod's class, find the set of methods associated with the
    # method's message type. Discard any method that matches one bound to this mod instance. If none
    # remain in the set, remove it as well.
    for function in cls._server_functions:
        methods = _server_message_types.get(function._message_type)
        if methods is not None:
            methods.discard(function.__wrapped__.__get__(mod, cls))
            if len(methods) == 0:
                del _server_message_types[function._message_type]

    for function in cls._client_functions:
        methods = _client_message_types.get(function._message_type)
        if methods is not None:
            methods.discard(function.__wrapped__.__get__(mod, cls))
            if len(methods) == 0:
                del _client_message_types[function._message_type]


def _ServerSpeech(caller: unrealsdk.UObject, function: unrealsdk.UFunction, params: unrealsdk.FStruct):
    message = params.Callsign
    message_type = params.Type
    if message_type is None or not message_type.startswith("unrealsdk."):
        return True

    # Check if the message type indicates an acknowledgement from a client for the previous message
    # we had sent. If so, and its ID matches that of our last message, dequeue it and we are done.
    if message_type == "unrealsdk.__clientack__":
        if message == _message_queue[0].ID:
            _DequeueMessage()
        return False

    # This message's ID and serialized arguments should be separated by a ":". If not, ignore it.
    message_components = message.split(":", 1)
    if len(message_components) != 2:
        return False
    message_id = message_components[0]

    # Get the list of methods registered to respond to this message type. If none are, we're done.
    methods = _server_message_types.get(message_type)
    if methods is not None and len(methods) > 0:
        # All of the methods in this set are known to be identical functions, just bound to
        # different instances. Retrieve any one of them, and get the mod's class from it.
        sampleMethod = next(iter(methods))
        cls = type(sampleMethod.__self__)

        # Attempt to use the class's deserializer callable to deserialize the message's arguments.
        arguments = None
        try:
            arguments = cls.NetworkDeserializer(message_components[1])
        except Exception:
            unrealsdk.Log(f"Unable to deserialize arguments for '{message_type}'")
            tb = traceback.format_exc().split('\n')
            unrealsdk.Log(f"    {tb[-4].strip()}")
            unrealsdk.Log(f"    {tb[-3].strip()}")
            unrealsdk.Log(f"    {tb[-2].strip()}")
        
        # If argument deserialization was successful, we will invoke each method.
        if arguments is not None:
            # Use the inspect module to correctly map the received arguments to their parameters.
            bindings = inspect.signature(sampleMethod).bind(*arguments["args"], **arguments["kwargs"])
            # If this method has a parameter through which to pass a player controller, assign the
            # caller to it.
            if bindings.signature.parameters.get("playerController") is not None:
                bindings.arguments["playerController"] = caller

            for method in methods:
                try:
                    method(*bindings.args, **bindings.kwargs)
                except Exception:
                    unrealsdk.Log(f"Unable to call remotely requested {method}.")
                    tb = traceback.format_exc().split('\n')
                    unrealsdk.Log(f"    {tb[-4].strip()}")
                    unrealsdk.Log(f"    {tb[-3].strip()}")
                    unrealsdk.Log(f"    {tb[-2].strip()}")

    # Send acknowledgement of the message back to the client.
    caller.ClientMessage("unrealsdk.__serverack__", message_id)
    return False

def _ClientMessage(caller: unrealsdk.UObject, function: unrealsdk.UFunction, params: unrealsdk.FStruct):
    message = params.S
    message_type = params.Type
    if message_type is None or not message_type.startswith("unrealsdk."):
        return True

    if message_type == "unrealsdk.__serverack__":
        if message == _message_queue[0].ID:
            _DequeueMessage()
        return False

    message_components = message.split(":", 1)
    if len(message_components) != 2:
        return False
    message_id = message_components[0]

    methods = _client_message_types.get(message_type)
    if methods is not None and len(methods) > 0:
        sampleMethod = next(iter(methods))
        cls = type(sampleMethod.__self__)

        arguments = None
        try:
            arguments = cls.NetworkDeserializer(message_components[1])
        except Exception:
            unrealsdk.Log(f"Unable to deserialize arguments for '{message_type}'")
            tb = traceback.format_exc().split('\n')
            unrealsdk.Log(f"    {tb[-4].strip()}")
            unrealsdk.Log(f"    {tb[-3].strip()}")
            unrealsdk.Log(f"    {tb[-2].strip()}")
        
        if arguments is not None:
            bindings = inspect.signature(sampleMethod).bind(*arguments["args"], **arguments["kwargs"])

            for method in methods:
                try:
                    method(*bindings.args, **bindings.kwargs)
                except Exception:
                    unrealsdk.Log(f"Unable to call remotely requested {method}.")
                    tb = traceback.format_exc().split('\n')
                    unrealsdk.Log(f"    {tb[-4].strip()}")
                    unrealsdk.Log(f"    {tb[-3].strip()}")
                    unrealsdk.Log(f"    {tb[-2].strip()}")

    caller.ServerSpeech(message_id, 0, "unrealsdk.__clientack__")
    return False

unrealsdk.RunHook("Engine.PlayerController.ServerSpeech", "ModMenu.NetworkManager", _ServerSpeech)
unrealsdk.RunHook("WillowGame.WillowPlayerController.ClientMessage", "ModMenu.NetworkManager", _ClientMessage)