import bl2sdk

def process_hook(caller, stack, result, function):
	code = stack.Code
	OfferingId = stack.popFString()
	print("{} {}".format(OfferingId.Count, OfferingId.Max))
	stack.Code = code
	return True


bl2sdk.RemoveScriptHook("Function WillowGame.MarketplaceGFxMovie.CreateContentItem", "Cheeky")
bl2sdk.RegisterScriptHook("Function WillowGame.MarketplaceGFxMovie.CreateContentItem", "Cheeky", process_hook)