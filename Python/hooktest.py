import bl2sdk

def test_script_hook(caller, stack, result, function):
    print("{} {} {} {}".format(repr(caller), repr(stack), repr(result), repr(function)))

def print_key_press_hook(caller, function, parms, result):
    ControllerId = parms.popInt()
    Key = parms.popFName()
    EventType = parms.popByte()
    if EventType == 0:
        name = Key.GetName()
        print(name)

bl2sdk.RegisterEngineHook("Function WillowGame.WillowGameViewportClient.InputKey", "PrintKeyPress", print_key_press_hook)

bl2sdk.RegisterScriptHook("Function Engine.Console.ShippingConsoleCommand", "CheckCommand", test_script_hook)