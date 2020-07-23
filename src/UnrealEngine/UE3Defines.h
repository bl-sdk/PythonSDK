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

#endif