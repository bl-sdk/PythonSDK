#include "Hook.h"

namespace UHook
{
	extern bool isHooked;
	extern void* pGObjects;
	extern void* pGNames;
	extern void* pGObjHash;
	extern void* pGCRCTable;
	extern void* pNameHash;

	bool hook();
	Hook *getProcessEventHook();
}