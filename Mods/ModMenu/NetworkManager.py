import unrealsdk
import json
from typing import Callable, Any

from . import ModObjects


_server_message_types = {}
_client_message_types = {}


def RegisterNetworkMethods(
    mod: ModObjects.SDKMod,
    serializer: Callable[[Any], str] = json.dumps,
    deserializer: Callable[[str], Any] = json.loads
) -> None:
    """
    Enables a mod's interaction with server and client copies of itself. The methods specified in
    its `ServerMethods` and `ClientMethods` attributes are modified, such that a request is sent
    when they are invoked as client and server respectively, and their implementation is invoked
    when a request is received as server and client respectively.

    Args:
        mod: The instance of the mod to register for network method handling.
        serializer:
            A function to be used to serialize parameters sent through networked methods. This
            function must be able to accept at least a `dict` containing a `list` as well as another
            `dict`, and output the serialized results as a text string.
        deserializer: 
            A function to be used to deserialize parameters when received through networked methods.
            This must accept the text string as output by the function passed to `serializer`, and
            return the `dict` containing a `list` and another `dict` as originally sent.
    """
    mod._network_serializer = serializer
    mod._network_deserializer = deserializer

    # Each network method will be registered using a "type." This type is a string formatted from
    # the name of the mod, its version, and the namespace of the method.
    message_type_prefix = f"unrealsdk {mod.Name} {mod.Version} "


    # For each server method declared, we will be creating a new method to replace the original one
    # in the mod's namespace. This new method will handle sending the request to server copies of
    # the mod. To capture the method's message type within the scope of this "sender" method, we
    # create a factory function to produce it.
    def createServerMethodSender(message_type):
        def methodSender(self, *args, **kwargs):

            # Query the current list of PRIs, and from those, player controllers. If every PRI has
            # an associated player controller, then we are not currently a client in multiplayer.
            PRIs = list(unrealsdk.GetEngine().GetCurrentWorldInfo().GRI.PRIArray)
            playerControllers = [PRI.Owner for PRI in PRIs if PRI.Owner is not None]
            if len(playerControllers) == len(PRIs):
                return

            # Serialize the arguments and send them, along with the type, using the server player
            # controller's ServerSpeech method.
            message = serializer({"args": args, "kwargs": kwargs})
            playerControllers[0].ServerSpeech(message_type, 0, message)

        # Return a bound version of the new method for the mod.
        return methodSender.__get__(mod, mod.__class__)

    # Iterate over each server method declared by the mod, generating a type string for each one,
    # and skipping any whose type string we already have a method registered for.
    for function in mod.ServerMethods:
        message_type = message_type_prefix + function.__name__
        if message_type in _server_message_types:
            continue

        # Create a message sending method for the mod, and replace the original method with it.
        method_sender = createServerMethodSender(message_type)
        setattr(mod, function.__name__, method_sender)

        # Create a bound version of the original function for the mod, and set it to be called when
        # we receive a server message containing this method's message type.
        called_method = function.__get__(mod, mod.__class__)
        _server_message_types[message_type] = called_method


    # We follow the same methodology for client methods as for server ones.
    def createClientMethodSender(message_type):
        def methodSender(self, *args, **kwargs):
            PRIs = list(unrealsdk.GetEngine().GetCurrentWorldInfo().GRI.PRIArray)
            playerControllers = [PRI.Owner for PRI in PRIs if PRI.Owner is not None]
            # If we have less than two player controllers, we are not a server in multiplayer.
            if len(playerControllers) < 2:
                return

            message = serializer({"args": args, "kwargs": kwargs})

            for playerController in playerControllers:
                playerController.ClientMessage(message, message_type)

        return methodSender.__get__(mod, mod.__class__)

    for function in mod.ClientMethods:
        message_type = message_type_prefix + function.__name__
        if message_type in _client_message_types:
            continue

        method_sender = createClientMethodSender(message_type)
        setattr(mod, function.__name__, method_sender)

        called_method = function.__get__(mod, mod.__class__)
        _client_message_types[message_type] = called_method


def UnregisterNetworkMethods(mod: ModObjects.SDKMod) -> None:
    """
    Disables a mod's interaction with server and client copies of itself. The methods specified in
    its `ServerMethods` and `ClientMethods` attributes are reverted to their original
    implementations.

    Args:
        mod: The instance of the mod to unregister for network method handling.
    """
    mod._network_serializer = None
    mod._network_deserializer = None

    message_type_prefix = f"unrealsdk {mod.Name} {mod.Version} "

    for function in mod.ServerMethods:
        message_type = message_type_prefix + function.__name__

        called_method = _server_message_types.get(message_type)
        if called_method is not None:
            setattr(mod, function.__name__, called_method)
            del _server_message_types[message_type]

    for function in mod.ClientMethods:
        message_type = message_type_prefix + function.__name__

        called_method = _client_message_types.get(message_type)
        if called_method is not None:
            setattr(mod, function.__name__, called_method)
            del _client_message_types[message_type]


def _ServerSpeech(caller: unrealsdk.UObject, function: unrealsdk.UFunction, params: unrealsdk.FStruct):
    message_type = params.Type
    if message_type is None or not message_type.startswith("unrealsdk "):
        return True

    called_method = _server_message_types.get(message_type)
    if called_method is not None:
        # Retrieve the deserializer from the mod the method is bound to.
        deserializer = called_method.__self__._network_deserializer
        # Deserialize the message from the parameter in the player controller method, and call our
        # method with its arguments.
        message = deserializer(params.Callsign)
        called_method(*message["args"], **message["kwargs"])

    return False

def _ClientMessage(caller: unrealsdk.UObject, function: unrealsdk.UFunction, params: unrealsdk.FStruct):
    message_type = params.Type
    if message_type is None or not message_type.startswith("unrealsdk "):
        return True

    called_method = _client_message_types.get(message_type)
    if called_method is not None:
        deserializer = called_method.__self__._network_deserializer
        message = deserializer(params.S)
        called_method(*message["args"], **message["kwargs"])

    return False

unrealsdk.RunHook("Engine.PlayerController.ServerSpeech", "ModMenu.NetworkManager", _ServerSpeech)
unrealsdk.RunHook("WillowGame.WillowPlayerController.ClientMessage", "ModMenu.NetworkManager", _ClientMessage)
