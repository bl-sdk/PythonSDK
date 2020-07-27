#pragma once

#include "stdafx.h"

#ifdef UE4
#include "UE4CoreStructs.h"
#include "UnrealEngine/UE4Defines.h"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CoreUObject.Object.ExecuteUbergraph
struct UObject_ExecuteUbergraph_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

#endif