#include "stdafx.h"
#include "CSimpleDetour.h"
#include "Logging.h"
#include "Exceptions.h"
#include "Util.h"

#include <winternl.h>
#define STATUS_SUCCESS ((NTSTATUS)0x00000000L)
#define STATUS_PORT_NOT_SET ((NTSTATUS)0xC0000353L)

namespace UnrealSDK
{
	typedef NTSTATUS (WINAPI* tNtSIT)(HANDLE, THREAD_INFORMATION_CLASS, PVOID, ULONG);
	tNtSIT pNtSetInformationThread = nullptr;

	NTSTATUS NTAPI hkNtSetInformationThread(
		__in HANDLE ThreadHandle,
		__in THREAD_INFORMATION_CLASS ThreadInformationClass,
		__in PVOID ThreadInformation,
		__in ULONG ThreadInformationLength)
	{
		if (ThreadInformationClass == 17) // ThreadHideFromDebugger
		{
			Logging::Log("[AntiDebug] NtSetInformationThread called with ThreadHideFromDebugger\n");
			return STATUS_SUCCESS;
		}

		return pNtSetInformationThread(ThreadHandle, ThreadInformationClass, ThreadInformation,
		                               ThreadInformationLength);
	}

	typedef NTSTATUS (WINAPI* tNtQIP)(HANDLE, PROCESSINFOCLASS, PVOID, ULONG, PULONG);
	tNtQIP pNtQueryInformationProcess = nullptr;

	NTSTATUS WINAPI hkNtQueryInformationProcess(
		__in HANDLE ProcessHandle,
		__in PROCESSINFOCLASS ProcessInformationClass,
		__out PVOID ProcessInformation,
		__in ULONG ProcessInformationLength,
		__out_opt PULONG ReturnLength)
	{
		if (ProcessInformationClass == 30) // ProcessDebugObjectHandle
		{
			return STATUS_PORT_NOT_SET;
		}

		return pNtQueryInformationProcess(ProcessHandle, ProcessInformationClass, ProcessInformation,
		                                  ProcessInformationLength, ReturnLength);
	}

	void HookAntiDebug()
	{
		HMODULE hNtdll = GetModuleHandle(L"ntdll.dll");
		if (!hNtdll)
		{
			throw FatalSDKException(7000, Util::Format("GetModuleHandle failed for ntdll.dll (Error = 0x%X)",
			                                           GetLastError()));
		}

		pNtSetInformationThread = (tNtSIT)GetProcAddress(hNtdll, "NtSetInformationThread");
		if (!pNtSetInformationThread)
		{
			throw FatalSDKException(
				7001, Util::Format("GetProcAddress failed for NtSetInformationThread (Error = 0x%X)", GetLastError()));
		}

		SETUP_SIMPLE_DETOUR(detNtSIT, pNtSetInformationThread, hkNtSetInformationThread);
		detNtSIT.Attach();
		Logging::Log("[AntiDebug] Hook added for NtSetInformationThread\n");

		pNtQueryInformationProcess = (tNtQIP)GetProcAddress(hNtdll, "NtQueryInformationProcess");
		if (!pNtQueryInformationProcess)
		{
			throw FatalSDKException(
				7002, Util::Format("GetProcAddress failed for NtQueryInformationProcess (Error = 0x%X)",
				                   GetLastError()));
		}

		SETUP_SIMPLE_DETOUR(detNtQIP, pNtQueryInformationProcess, hkNtQueryInformationProcess);
		detNtQIP.Attach();
		Logging::Log("[AntiDebug] Hook added for NtQueryInformationProcess\n");
	}
}
