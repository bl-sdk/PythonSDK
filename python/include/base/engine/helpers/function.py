import math
import BL2SDK
from ctypes import *
from ..sdk.structs.Base import FOutParmRec, FFrame

FUNCPARM_CLASS = 1
FUNCPARM_NAME = 2
FUNCPARM_STRING = 4
FUNCPARM_TARRAY = 8
FUNCPARM_OBJPOINTER = 16
FUNCPARM_LUATYPE = 32
FUNCPARM_STRUCT = 64

class tFrameStep(_FuncPtr):
    restype = None
    argtypes = [POINTER(FFrame), POINTER(UObject), c_void_p]

BL2SDK.tFrameStep = cast(tFrameStep, BL2SDK.FrameStep)

def call_function(funcData, obj, *args):
    if not obj:
        print("Cannot execute function on null object")
        return
    codeSize = 9 * len(funcData.fields) + 10
    codeBuffer = create_string_buffer(codeSize)
    nextCodeOffset = 0
    iNative = funcData.ptr.UFunction.iNative
    if iNative >= 256:
        codeBuffer[0] = 0x60 + math.floor(iNative / 256)
        codeBuffer[1] = iNative % 256
        nextCodeOffset = 2
    else
        codeBuffer[0] = iNative
        nextCodeOffset = 1
    paramBlock = create_string_buffer(funcData.dataSize)
    outParmHead = None
	previousOutParm = None
    argNum = 0
    for v in funcData.fields:
        if v.isOutParm:
            codeBuffer[nextCodeOffset] = 0x29
            codeProp = cast(addressof(codeBuffer) + nextCodeOffset + 1, POINTER(POINTER(UProperty)))
            codeParmProp = cast(BL2SDK.engine.Objects[v.index], POINTER(UProperty))
            codeProp[0] = outParmProp
            nextCodeOffset = nextCodeOffset + 9
            outParmRec = FOutParmRec()
            outParmRec.Property = outParmProp
            outParmRec.PropAddr = addressof(paramBlock) + v.offset
			if not outParmHead:
				outParmHead = outParmRec
			else
				previousOutParm.NextOutParm = outParmRec
			previousOutParm = outParmRec
            continue
		if v.isRet:
			continue
        
        pyArg = args[argNum]

		if not v.optional:
			if not pyArg and not (v.flags & FUNCPARM_OBJPOINTER):
                print("Arg #{} ({}}) is required".format(argNum, v.name))
				return

		if not pyArg:
			codeBuffer[nextCodeOffset] = 0x4A
			nextCodeOffset = nextCodeOffset + 1
        else:
            codeBuffer[nextCodeOffset] = 0x29
            codeProp = cast(addressof(codeBuffer) + nextCodeOffset + 1, POINTER(POINTER(UProperty)))
            codeProp[0] = cast(BL2SDK.engine.Objects[v.index], POINTER(UProperty))
            nextCodeOffset = nextCodeOffset + 9

            if (v.flags & FUNCPARM_LUATYPE) and not isinstance(v.type, pyArg):
                print("Arg #{} ({}) expects the Python type {}".format(argNum, v.name, v.type))
                return
            elif (v.flags & FUNCPARM_CLASS):
                if not isinstance(pyArg, v.type):
                    if pyArg.static:
                        pyArg = cast(pyArg.static, POINTER(UClass))
                    else
                        print("Arg #{} ({}) did not contain a valid class table".format(argNum, v.name))
                        return
                elif not isinstance(POINTER(UClass), pyArg):
                    Print("Arg #{} ({}) expects a class".format(argNum, v.name))
            elif (v.flags & FUNCPARM_NAME):
                if isinstance(pyArg, str):
                    name = FindName(pyArg)
                    if not name:
                        print("Arg #{} ({}): Name for {} not found".format(argNum, v.name, pyArg))
                        return
                    pyArg = name
                elif not isinstance(v.type, pyArg):
                    print("Arg #{} ({}) expects a name".format(argNum, v.name))
                    return
            elif (v.flags & FUNCPARM_STRING):
                if isinstance(pyArg, str):
                    pyArg = FString.GetFromLuaString(pyArg) #TODO
                elif notisinstance(pyArg, v.type):
                    print("Arg #{} ({}) expects a string".format(argNum, v.name))
                    return
            elif (v.flags & FUNCPARM_TARRAY):
                if isinstance(pyArg, (frozenset, list, set, tuple)):
                    # TODO: Convert table, set pyArg to struct
                    print("NYI: Converting lua table to TArray")
                    return
                elif not isinstance(v.type, pyArg):
                    print("Arg #{} ({}) expects a {}".format(argNum, v.name, v.type)))
                    return
            elif (v.flags & FUNCPARM_STRUCT) and not isinstance(v.type, pyArg):
                print("Arg #{} ({}) expects a {".format(argNum, v.name, tostring(v.type)))
                return
            elif (v.flags & FUNCPARM_OBJPOINTER):
                if not isinstance(POINTER(UObject), pyArg):
                    print("Arg #{} ({}) expects an object pointer for {".format(argNum, v.name, v.class.name))
                    return

            field = cast(addressof(paramBlock) + v.offset, v.castTo)
            field[0] = pyArg
		argNum = argNum + 1

	codeBuffer[nextCodeOffset] = 0x16

	if not funcData.ptr:
		print("Function does not have a valid pointer")
        return

	stack = FFrame()
	stack.Code = codeBuffer
	stack.VfTable = cast(0x16BF480, c_void_p)
	stack.bAllowSuppression = True
	stack.bSuppressEventTag = False
	stack.bAutoEmitLineTerminator = True
	stack.Node = cast(BL2SDK.engine.Classes.UObject.static, POINTER(UStruct))
	stack.Object = cast(obj, POINTER(UObject))
	stack.Locals = paramBlock
	stack.PreviousFrame = nil
	stack.OutParms = outParmHead

	if funcData.retOffset:
		BL2SDK.tFrameStep(stack.Object, pParamBlockBase + funcData.retOffset)
	else
		sBL2SDK.tFrameStep(stack.Object, nil)

	returns = {}
	for v in funcData.fields:
		if v.isRet:
			returns.append(GetReturn(v, pParamBlockBase)))

	return unpack(returns)
end