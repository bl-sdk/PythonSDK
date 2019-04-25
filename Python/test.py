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

engine = bl2sdk.GetEngine()
# print('%x' % engine.BrowseToURL.func.GetAddress())
print(engine.BrowseToURL.func.Children)

returnValue = engine.BrowseToURL()[0]


# class TestUObject(bl2sdk.UObject):
# 	def __getattribute__(self, name):
# 		prop = self.Class.FindPropertyByName(name)
# 		if prop:
# 			return prop
# 		return object.__getattribute__(self, name)

# bl2sdk.UObject = TestUObject