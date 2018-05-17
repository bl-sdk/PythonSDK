#pragma once
#ifndef CSIMPLEDETOUR_H
#define CSIMPLEDETOUR_H

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include "detours.h"

class CSimpleDetour
{
public:
	CSimpleDetour(void **old, void *replacement);

	void Attach();
	void Detach();
private:
	void **m_fnOld;
	void *m_fnReplacement;

	bool m_bAttached;
};

#define SETUP_SIMPLE_DETOUR(name, old, replacement) \
	CSimpleDetour name(&(void * &)old, (void *)(&(void * &)replacement))

#endif