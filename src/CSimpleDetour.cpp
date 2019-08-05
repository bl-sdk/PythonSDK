#pragma once
#include "stdafx.h"
#include "CSimpleDetour.h"
#include "Util.h"
#include "Exceptions.h"

CSimpleDetour::CSimpleDetour(void** old, void* replacement)
{
	m_fnOld = old;
	m_fnReplacement = replacement;
}

void CSimpleDetour::Attach()
{
	DetourTransactionBegin();
	//DetourUpdateThread(GetCurrentThread());

	DetourAttach(m_fnOld, m_fnReplacement);

	const LONG result = DetourTransactionCommit();
	if (result != NO_ERROR)
	{
		throw FatalSDKException(4000, Util::Format("Failed to attach detour (Old = 0x%p, Hook = 0x%p, Result = 0x%X)",
		                                           m_fnOld, m_fnReplacement, result));
	}

	m_bAttached = true;
}

void CSimpleDetour::Detach()
{
	if (!m_bAttached)
		return;

	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());

	DetourDetach(m_fnOld, m_fnReplacement);

	LONG result = DetourTransactionCommit();
	if (result != NO_ERROR)
	{
		throw FatalSDKException(4001, Util::Format("Failed to detach detour (Old = 0x%p, Hook = 0x%p, Result = 0x%X)",
		                                           m_fnOld, m_fnReplacement, result));
	}

	m_bAttached = false;
}
