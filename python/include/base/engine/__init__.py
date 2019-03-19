from ctypes import *
import BL2SDK

from ..sdk.classes.Base import TArray_UObjectPtr, UFunction, UClass, UObject
from ..sdk.structs.Base import TArray_FNameEntryPtr
from ..sdk.classes.WillowGame import UWillowConsole

class SDKFunction():
    def __init__(self, engine, data):
        self.fields = data[1]["fields"]
        self.dataSize = data[1]["dataSize"]
        self.index = data[1]["index"]
        self.name = data[0]
        self.ptr = cast(engine.Objects.Data[self.index], POINTER(UFunction))
        self.index = None

class SDKClass():
    base = None
    funcs = {}
    def __init__(self, engine, definition):
        self.name = definition[0]
        if definition[2]:
            self.base = engine.Classes[definition[2]]
        if definition[0] in BL2SDK.g_classFuncs.keys():
            self.funcs = BL2SDK.g_classFuncs[definition[0]]
        if isinstance(definition[1], str):
            self.static = None # TODO: cast(engine.FindClass(definition[1]), POINTER(UClass)) 
        else:
            self.static = cast(engine.Objects.Data[definition[1]], POINTER(UClass))
        if not self.static:
            print("Failed to find class '" + definition[0]  + "'")

class SDKEngine():
    def __init__(self):
        self.Objects = None
        self.FNameEntryPtr = None
        self._FuncsInternal = {}
        self.Classes = {}
        self._ClassesInternal = {}

    def InitializeFunctions(self, funcs):
        for func in funcs.items():
            sdk_func = SDKFunction(self, func)
            self._FuncsInternal[addressof(sdk_func.ptr)] = sdk_func
        return len(funcs)

    def InitializeClasses(self):
        funcCount = 0
        for loaded_class in BL2SDK.g_loadedClasses:
            sdk_class = SDKClass(self, loaded_class)
            if sdk_class.static:
                self._ClassesInternal[addressof(sdk_class.static)] = sdk_class
            self.Classes[sdk_class.name] = sdk_class
            funcCount = funcCount + self.InitializeFunctions(sdk_class.funcs)

        print("[Python] {} classes initialized".format(len(BL2SDK.g_loadedClasses)))
        print("[Python] {} functions initialized".format(funcCount))

        g_loadedClasses = None
        g_classFuncs = None

    def ResolveArgClasses(self):
        for ptr, sdk_func in self._FuncsInternal.items():
            for index, field in enumerate(sdk_func.fields):
                if "className" in field:
                    sdk_func.fields[index]["class"] = self.Classes[field["className"]]
                    del sdk_func.fields[index]["className"]

    def FindClass(self, class_def):
        name = class_def.__name__
        return self.Classes[name]


BL2SDK.engine = SDKEngine()
engine = BL2SDK.engine

engine.Objects = cast(BL2SDK.GObjects, POINTER(TArray_UObjectPtr))[0]
engine.Names = cast(BL2SDK.GNames, POINTER(TArray_FNameEntryPtr))[0]

engine.InitializeClasses()
engine.ResolveArgClasses()

for x in range(1000):
    print(BL2SDK.engine.Objects[x][0].GetName())

print(engine.FindClass(UWillowConsole))