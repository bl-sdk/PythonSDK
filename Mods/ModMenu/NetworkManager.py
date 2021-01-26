import unrealsdk
import json
import functools
from collections import deque
from time import time
from typing import Callable, Any

from . import ModObjects


_server_message_types = {}
_client_message_types = {}

_message_queue = deque()


class _Message():
    """
    A simple class that tracks the various pieces of information involved in, and facilitates the
    # sending of, a network message.

    Attributes:
        ID: The unique ID of the message.
        playerController: The player controller the message will be sent through.
        message_type: The message type string.
        arguments: The serialized argument string.
        server: `True` if the message is destined to a server, `False` if destined to a client.
        timeout: `None` if the message has been sent, otherwise a float representing the real time
            it will time out.

    """
    def __init__(self, playerController: unrealsdk.UObject, message_type: str, arguments: str, server: bool):
        """
        Create a new message.

        Args:
            playerController: The player controller to send the message through.
            message_type: The message type string.
            arguments: The serialized argument string.
            server: `True` if the message is destined to a server, `False` if destined to a client.
        """
        self.ID = str(id(self))
        self.playerController = playerController
        self.messageType = message_type
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
        # Set our timeout to be 1.5x (for leeway) the ping to and from the receiving end.
        self.timeout = time() + self.playerController.PlayerReplicationInfo.ExactPing * 3


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


def _MethodSender(function: Callable[..., None]) -> Callable[..., None]:
    """
    Create a new function that will replace ones decorated as network methods, intercepting their
    local calls, and instead transmitting a request to remote copies of the mod.
    """

    # "Wrap" the original function. Among other things, this assigns the original function to the
    # __wrapped__ attribute of the new one.
    @functools.wraps(function)
    def methodSender(self, *args, **kwargs):
        # Get a list of replicated players. If there aren't multiple, we aren't in multiplayer.
        PRIs = list(unrealsdk.GetEngine().GetCurrentWorldInfo().GRI.PRIArray)
        if len(PRIs) < 2:
            return
        # Players will or will not have controllers based on who's server and who's client.
        playerControllers = [PRI.Owner for PRI in PRIs if PRI.Owner is not None]

        # If there is only one player controller, we are a client. If this method is designated as a
        # server method, we will send a request to the server now.
        if methodSender._is_server and len(playerControllers) == 1:
            # Serialize the arguments we were called with using the class's serializer function, and
            # queue the message.
            arguments = type(self).NetworkSerializer({"args": args, "kwargs": kwargs})
            _EnqueueMessage(_Message(playerControllers[0], methodSender._message_type, arguments, True))

        # If there is more than one player controller, we are a server, and message each client.
        elif methodSender._is_client and len(playerControllers) > 1:
            arguments = type(self).NetworkSerializer({"args": args, "kwargs": kwargs})
            for playerController in playerControllers:
                _EnqueueMessage(_Message(playerController, methodSender._message_type, arguments, False))

    # Format the unique message type we will use to identify requests sent and received for this
    # method, using the module and hierarchy within the module it was defined in.
    methodSender._message_type = f"unrealsdk.{function.__module__}.{function.__qualname__}"
    # Assign the server and client attributes to identify this method's role.
    methodSender._is_server = False
    methodSender._is_client = False
    return methodSender


def ServerMethod(function: Callable[..., None]) -> Callable[..., None]:
    """
    A decorator function for mods' instance methods that should be invoked on server copies of the
    mod rather than the local copy.
    """

    # Assuming the function to decorate is not already a sender function, create one from it.
    if not hasattr(function, "_message_type"):
        function = _MethodSender(function)
    # Mark the function to send server requests.
    function._is_server = True
    return function


def ClientMethod(function: Callable[..., None]) -> Callable[..., None]:
    """
    A decorator function for mods' instance methods that should be invoked on client copies of the
    mod rather than the local copy.
    """
    if not hasattr(function, "_message_type"):
        function = _MethodSender(function)
    function._is_client = True
    return function


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
        # All of the methods in this set are known to be bound to mods of the same class. Retrieve
        # any one of them, and from its class, get the designated deserializer function. Use that
        # to deserialize the arguments from the parameter in the player controller method.
        deserializer = type(next(iter(methods)).__self__).NetworkDeserializer
        arguments = deserializer(message_components[1])
        # Call each method registered for the message type.
        for method in methods:
            method(*arguments["args"], **arguments["kwargs"])

    # Send acknowledgement back to the 
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
        deserializer = type(next(iter(methods)).__self__).NetworkDeserializer
        arguments = deserializer(message_components[1])
        for method in methods:
            method(*arguments["args"], **arguments["kwargs"])

    caller.ServerSpeech(message_id, 0, "unrealsdk.__clientack__")
    return False


unrealsdk.RunHook("Engine.PlayerController.ServerSpeech", "ModMenu.NetworkManager", _ServerSpeech)
unrealsdk.RunHook("WillowGame.WillowPlayerController.ClientMessage", "ModMenu.NetworkManager", _ClientMessage)