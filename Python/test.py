import bl2sdk
from bl2sdk import *

# def Test(caller: UObject, stack: FFrame, result: FStruct, function: UFunction) -> bool:
# 	param = function.Children
# 	params = []
# 	while(param):
# 		print("{},{}".format(param.GetFullName(), str(param.Offset_Internal)))
# 		param = param.Next
# 	return True

# RemoveScriptHook("Engine.Console.InputKey", "Test")
# RegisterScriptHook("Engine.Console.InputKey", "Test", Test)

# pc = GetEngine().GamePlayers[0]
# Children = bl2sdk.FindObject("Function", "WillowGame.MarketplaceGFxMovie.CreateContentItem").Children
# while Children:
# 	if Children.Class.GetName() == "BoolProperty":
# 		print("%x" % (Children.GetAddress() + 0x80))
# 	Children = Children.Next
# print(engine.CanUnpause())
for service in bl2sdk.UObject.FindObjectsContaining("SparkServiceConfiguration Transient.SparkServiceConfiguration"):
	# If the service's name is "micropatch" then it is the hotfix
	# object, and we are done.
	print(service.ServiceName)


# class TestUObject(bl2sdk.UObject):
# 	def __getattribute__(self, name):
# 		prop = self.Class.FindPropertyByName(name)
# 		if prop:
# 			return prop
# 		return object.__getattribute__(self, name)

# bl2sdk.UObject = TestUObject