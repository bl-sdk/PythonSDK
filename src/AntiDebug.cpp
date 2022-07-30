#include "stdafx.h"
#include "Logging.h"
#include "Exceptions.h"
#include "Util.h"

#include <winternl.h>
#define STATUS_SUCCESS ((NTSTATUS)0x00000000L)
#define STATUS_PORT_NOT_SET ((NTSTATUS)0xC0000353L)

namespace UnrealSDK
{
	typedef NTSTATUS(WINAPI* tNtSIT)(HANDLE, THREAD_INFORMATION_CLASS, PVOID, ULONG);
	tNtSIT pNtSetInformationThread = nullptr;
	tNtSIT oNtSetInformationThread = nullptr;

	NTSTATUS NTAPI hkNtSetInformationThread(
		HANDLE ThreadHandle,
		THREAD_INFORMATION_CLASS ThreadInformationClass,
		PVOID ThreadInformation,
		ULONG ThreadInformationLength)
	{
		if (ThreadInformationClass == 17) // ThreadHideFromDebugger
		{
			LOG(HOOKS, "NtSetInformationThread called with ThreadHideFromDebugger\n");
			return STATUS_SUCCESS;
		}

		return oNtSetInformationThread(ThreadHandle, ThreadInformationClass, ThreadInformation,
			ThreadInformationLength);
	}

	typedef NTSTATUS (WINAPI* tNtQIP)(HANDLE, PROCESSINFOCLASS, PVOID, ULONG, PULONG);
	tNtQIP pNtQueryInformationProcess = nullptr;
	tNtQIP oNtQueryInformationProcess = nullptr;

	NTSTATUS WINAPI hkNtQueryInformationProcess(
		 HANDLE ProcessHandle,
		 PROCESSINFOCLASS ProcessInformationClass,
		 PVOID ProcessInformation,
		 ULONG ProcessInformationLength,
		 PULONG ReturnLength)
	{
		if (ProcessInformationClass == 30) // ProcessDebugObjectHandle
		{
			return STATUS_PORT_NOT_SET;
		}

		return oNtQueryInformationProcess(ProcessHandle, ProcessInformationClass, ProcessInformation,
		                                  ProcessInformationLength, ReturnLength);
	}

	void HookAntiDebug()
	{
		HMODULE hNtdll = GetModuleHandleW(L"ntdll.dll");
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

		if (MH_CreateHook(pNtSetInformationThread, hkNtSetInformationThread, &(PVOID&)oNtSetInformationThread) != 0) {
			LOG(HOOKS, "Can't create hook for NtSetInformationThread\n");
			return;
		}

		pNtQueryInformationProcess = (tNtQIP)GetProcAddress(hNtdll, "NtQueryInformationProcess");
		if (!pNtQueryInformationProcess)
		{
			throw FatalSDKException(
				7002, Util::Format("GetProcAddress failed for NtQueryInformationProcess (Error = 0x%X)",
				                   GetLastError()));
		}

		if (MH_CreateHook(pNtQueryInformationProcess, hkNtQueryInformationProcess, &(PVOID&)oNtQueryInformationProcess) != MH_OK) {
			LOG(HOOKS, "Can't create hook for NtQueryInformationProcess\n");
			return;
		}

		if (MH_EnableHook(NULL) != MH_OK) {
			LOG(HOOKS, "Can't enable hooks\n");
			return;
		}

		LOG(HOOKS, "Hook added for NtSetInformationThread\n");
		LOG(HOOKS, "Hook added for NtQueryInformationProcess\n");
	}
}
