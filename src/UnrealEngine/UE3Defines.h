#ifndef UE4

#pragma once

#include "UnrealEngine/CrossEngineDefines.h"

class UProperty : public UField
{
public:
	int					ArrayDim;
	int					ElementSize;
	unsigned int		PropertyFlags;
	unsigned char		UnknownData00[0x14];
	int					Offset_Internal;
	UProperty* PropertyLinkNext;
	unsigned char		UnknownData01[0x18];
};

struct FOutputDevice
{
	void* VfTable;
	unsigned long bAllowSuppression;
	unsigned long bSuppressEventTag;
	unsigned long bAutoEmitLineTerminator;
};

// Function Core.Object.GetEngineVersion
struct UObject_GetEngineVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};


#endif