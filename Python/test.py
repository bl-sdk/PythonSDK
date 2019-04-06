# import bl2sdk

# def process_hook(caller, stack, result, function):
# 	code = stack.Code
# 	OfferingId = stack.popInt()
# 	print("{} {} {}".format(OfferingId))
# 	stack.Code = code
# 	stack.SkipFunction()
# 	return True


# bl2sdk.RemoveScriptHook("Function WillowGame.MarketplaceGFxMovie.CreateContentItem", "Cheeky")
# bl2sdk.RegisterScriptHook("Function WillowGame.MarketplaceGFxMovie.CreateContentItem", "Cheeky", process_hook)

trees = s
for tree in trees:
	print(tree.GetFullName())