#include "stdafx.h"
#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#pragma pack(1)

FARPROC p[77] = {0};

char exeBaseFolder[FILENAME_MAX];

extern "C" BOOL WINAPI DllMain(HINSTANCE hInst,DWORD reason,LPVOID)
{
	static HINSTANCE hL;
	if (reason == DLL_PROCESS_ATTACH)
	{
		hL = LoadLibrary(_T(".\\binkw32_org.dll"));
		if (!hL) return false;
		p[0] = GetProcAddress(hL,"BinkLogoAddress");
		p[1] = GetProcAddress(hL,"BinkBufferSetDirectDraw");
		p[2] = GetProcAddress(hL,"BinkIsSoftwareCursor");
		p[3] = GetProcAddress(hL,"BinkCheckCursor");
		p[4] = GetProcAddress(hL,"BinkRestoreCursor");
		p[5] = GetProcAddress(hL,"BinkBufferSetResolution");
		p[6] = GetProcAddress(hL,"BinkBufferCheckWinPos");
		p[7] = GetProcAddress(hL,"BinkBufferSetOffset");
		p[8] = GetProcAddress(hL,"BinkBufferOpen");
		p[9] = GetProcAddress(hL,"BinkBufferClose");
		p[10] = GetProcAddress(hL,"BinkBufferLock");
		p[11] = GetProcAddress(hL,"BinkBufferUnlock");
		p[12] = GetProcAddress(hL,"BinkBufferBlit");
		p[13] = GetProcAddress(hL,"BinkBufferSetScale");
		p[14] = GetProcAddress(hL,"BinkBufferSetHWND");
		p[15] = GetProcAddress(hL,"BinkBufferGetDescription");
		p[16] = GetProcAddress(hL,"BinkBufferGetError");
		p[17] = GetProcAddress(hL,"BinkBufferClear");
		p[18] = GetProcAddress(hL,"BinkDDSurfaceType");
		p[19] = GetProcAddress(hL,"BinkDX8SurfaceType");
		p[20] = GetProcAddress(hL,"BinkDX9SurfaceType");
		p[21] = GetProcAddress(hL,"BinkSetError");
		p[22] = GetProcAddress(hL,"BinkGetError");
		p[23] = GetProcAddress(hL,"BinkSetSoundSystem");
		p[24] = GetProcAddress(hL,"BinkSetFrameRate");
		p[25] = GetProcAddress(hL,"BinkSetFileOffset");
		p[26] = GetProcAddress(hL,"BinkSetIOSize");
		p[27] = GetProcAddress(hL,"BinkSetIO");
		p[28] = GetProcAddress(hL,"BinkSetSimulate");
		p[29] = GetProcAddress(hL,"BinkSetSoundTrack");
		p[30] = GetProcAddress(hL,"BinkGetFrameBuffersInfo");
		p[31] = GetProcAddress(hL,"BinkRegisterFrameBuffers");
		p[32] = GetProcAddress(hL,"BinkOpen");
		p[33] = GetProcAddress(hL,"BinkOpenWithOptions");
		p[34] = GetProcAddress(hL,"BinkCopyToBuffer");
		p[35] = GetProcAddress(hL,"BinkCopyToBufferRect");
		p[36] = GetProcAddress(hL,"BinkDoFramePlane");
		p[37] = GetProcAddress(hL,"BinkDoFrame");
		p[38] = GetProcAddress(hL,"BinkShouldSkip");
		p[39] = GetProcAddress(hL,"BinkNextFrame");
		p[40] = GetProcAddress(hL,"BinkGetKeyFrame");
		p[41] = GetProcAddress(hL,"BinkGoto");
		p[42] = GetProcAddress(hL,"BinkFreeGlobals");
		p[43] = GetProcAddress(hL,"BinkClose");
		p[44] = GetProcAddress(hL,"BinkGetPlatformInfo");
		p[45] = GetProcAddress(hL,"BinkWait");
		p[46] = GetProcAddress(hL,"BinkPause");
		p[47] = GetProcAddress(hL,"BinkGetSummary");
		p[48] = GetProcAddress(hL,"BinkGetRealtime");
		p[49] = GetProcAddress(hL,"BinkGetRects");
		p[50] = GetProcAddress(hL,"BinkService");
		p[51] = GetProcAddress(hL,"BinkSetVolume");
		p[52] = GetProcAddress(hL,"BinkSetSpeakerVolumes");
		p[53] = GetProcAddress(hL,"BinkSetPan");
		p[54] = GetProcAddress(hL,"BinkGetTrackType");
		p[55] = GetProcAddress(hL,"BinkGetTrackMaxSize");
		p[56] = GetProcAddress(hL,"BinkGetTrackID");
		p[57] = GetProcAddress(hL,"BinkOpenTrack");
		p[58] = GetProcAddress(hL,"BinkCloseTrack");
		p[59] = GetProcAddress(hL,"BinkGetTrackData");
		p[60] = GetProcAddress(hL,"BinkSetVideoOnOff");
		p[61] = GetProcAddress(hL,"BinkSetSoundOnOff");
		p[62] = GetProcAddress(hL,"BinkSetMemory");
		p[63] = GetProcAddress(hL,"BinkSetWillLoop");
		p[64] = GetProcAddress(hL,"BinkControlBackgroundIO");
		p[65] = GetProcAddress(hL,"BinkOpenWaveOut");
		p[66] = GetProcAddress(hL,"BinkOpenDirectSound");
		p[67] = GetProcAddress(hL,"BinkOpenMiles");
		p[68] = GetProcAddress(hL,"RADTimerRead");
		p[69] = GetProcAddress(hL,"BinkStartAsyncThread");
		p[70] = GetProcAddress(hL,"BinkRequestStopAsyncThread");
		p[71] = GetProcAddress(hL,"BinkWaitStopAsyncThread");
		p[72] = GetProcAddress(hL,"BinkDoFrameAsync");
		p[73] = GetProcAddress(hL,"BinkDoFrameAsyncWait");
		p[74] = GetProcAddress(hL,"BinkOpenXAudio2");
		p[75] = GetProcAddress(hL,"BinkControlPlatformFeatures");
		p[76] = GetProcAddress(hL,"BinkGetPalette");
		MessageBox(NULL, _T("Hello World"), _T("Hi"), NULL);
	}
	if (reason == DLL_PROCESS_DETACH)
		FreeLibrary(hL);
	return TRUE;
}

extern "C" __declspec(naked) void Proxy_BinkLogoAddress()
{
 __asm
 {
     jmp p[0*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkBufferSetDirectDraw()
{
 __asm
 {
     jmp p[1*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkIsSoftwareCursor()
{
 __asm
 {
     jmp p[2*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkCheckCursor()
{
 __asm
 {
     jmp p[3*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkRestoreCursor()
{
 __asm
 {
     jmp p[4*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkBufferSetResolution()
{
 __asm
 {
     jmp p[5*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkBufferCheckWinPos()
{
 __asm
 {
     jmp p[6*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkBufferSetOffset()
{
 __asm
 {
     jmp p[7*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkBufferOpen()
{
 __asm
 {
     jmp p[8*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkBufferClose()
{
 __asm
 {
     jmp p[9*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkBufferLock()
{
 __asm
 {
     jmp p[10*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkBufferUnlock()
{
 __asm
 {
     jmp p[11*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkBufferBlit()
{
 __asm
 {
     jmp p[12*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkBufferSetScale()
{
 __asm
 {
     jmp p[13*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkBufferSetHWND()
{
 __asm
 {
     jmp p[14*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkBufferGetDescription()
{
 __asm
 {
     jmp p[15*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkBufferGetError()
{
 __asm
 {
     jmp p[16*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkBufferClear()
{
 __asm
 {
     jmp p[17*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkDDSurfaceType()
{
 __asm
 {
     jmp p[18*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkDX8SurfaceType()
{
 __asm
 {
     jmp p[19*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkDX9SurfaceType()
{
 __asm
 {
     jmp p[20*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkSetError()
{
 __asm
 {
     jmp p[21*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkGetError()
{
 __asm
 {
     jmp p[22*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkSetSoundSystem()
{
 __asm
 {
     jmp p[23*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkSetFrameRate()
{
 __asm
 {
     jmp p[24*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkSetFileOffset()
{
 __asm
 {
     jmp p[25*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkSetIOSize()
{
 __asm
 {
     jmp p[26*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkSetIO()
{
 __asm
 {
     jmp p[27*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkSetSimulate()
{
 __asm
 {
     jmp p[28*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkSetSoundTrack()
{
 __asm
 {
     jmp p[29*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkGetFrameBuffersInfo()
{
 __asm
 {
     jmp p[30*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkRegisterFrameBuffers()
{
 __asm
 {
     jmp p[31*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkOpen()
{
 __asm
 {
     jmp p[32*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkOpenWithOptions()
{
 __asm
 {
     jmp p[33*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkCopyToBuffer()
{
 __asm
 {
     jmp p[34*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkCopyToBufferRect()
{
 __asm
 {
     jmp p[35*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkDoFramePlane()
{
 __asm
 {
     jmp p[36*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkDoFrame()
{
 __asm
 {
     jmp p[37*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkShouldSkip()
{
 __asm
 {
     jmp p[38*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkNextFrame()
{
 __asm
 {
     jmp p[39*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkGetKeyFrame()
{
 __asm
 {
     jmp p[40*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkGoto()
{
 __asm
 {
     jmp p[41*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkFreeGlobals()
{
 __asm
 {
     jmp p[42*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkClose()
{
 __asm
 {
     jmp p[43*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkGetPlatformInfo()
{
 __asm
 {
     jmp p[44*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkWait()
{
 __asm
 {
     jmp p[45*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkPause()
{
 __asm
 {
     jmp p[46*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkGetSummary()
{
 __asm
 {
     jmp p[47*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkGetRealtime()
{
 __asm
 {
     jmp p[48*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkGetRects()
{
 __asm
 {
     jmp p[49*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkService()
{
 __asm
 {
     jmp p[50*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkSetVolume()
{
 __asm
 {
     jmp p[51*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkSetSpeakerVolumes()
{
 __asm
 {
     jmp p[52*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkSetPan()
{
 __asm
 {
     jmp p[53*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkGetTrackType()
{
 __asm
 {
     jmp p[54*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkGetTrackMaxSize()
{
 __asm
 {
     jmp p[55*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkGetTrackID()
{
 __asm
 {
     jmp p[56*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkOpenTrack()
{
 __asm
 {
     jmp p[57*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkCloseTrack()
{
 __asm
 {
     jmp p[58*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkGetTrackData()
{
 __asm
 {
     jmp p[59*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkSetVideoOnOff()
{
 __asm
 {
     jmp p[60*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkSetSoundOnOff()
{
 __asm
 {
     jmp p[61*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkSetMemory()
{
 __asm
 {
     jmp p[62*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkSetWillLoop()
{
 __asm
 {
     jmp p[63*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkControlBackgroundIO()
{
 __asm
 {
     jmp p[64*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkOpenWaveOut()
{
 __asm
 {
     jmp p[65*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkOpenDirectSound()
{
 __asm
 {
     jmp p[66*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkOpenMiles()
{
 __asm
 {
     jmp p[67*4];
 }
}

extern "C" __declspec(naked) void Proxy_RADTimerRead()
{
 __asm
 {
     jmp p[68*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkStartAsyncThread()
{
 __asm
 {
     jmp p[69*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkRequestStopAsyncThread()
{
 __asm
 {
     jmp p[70*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkWaitStopAsyncThread()
{
 __asm
 {
     jmp p[71*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkDoFrameAsync()
{
 __asm
 {
     jmp p[72*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkDoFrameAsyncWait()
{
 __asm
 {
     jmp p[73*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkOpenXAudio2()
{
 __asm
 {
     jmp p[74*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkControlPlatformFeatures()
{
 __asm
 {
     jmp p[75*4];
 }
}

extern "C" __declspec(naked) void Proxy_BinkGetPalette()
{
 __asm
 {
     jmp p[76*4];
 }
}

// Sets exeBaseFolder to hold current executable's path, including "\"
void SetExecutableFolder()
{
	GetModuleFileName (NULL, exeBaseFolder, FILENAME_MAX);
	int x = strlen(exeBaseFolder) - 1;
	while (exeBaseFolder[x] != '\\')
		x--;
	exeBaseFolder[x + 1] = '\0';
}


// --- Load Plugins ---
void loadPlugins (const char *folder)
{
	DWORD typeMask = 0x6973612e; // '.asi'
	WIN32_FIND_DATA fd;
	char targetfilter[FILENAME_MAX];
	char currfile[FILENAME_MAX];
	strcpy_s (targetfilter, exeBaseFolder);
	strcat_s (targetfilter, folder);
	strcat_s (targetfilter, "\\*.asi");
	HANDLE asiFile = FindFirstFile (targetfilter, &fd);
	if (asiFile == INVALID_HANDLE_VALUE)
		return;
	do
	{
		if (!(fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
		{
			int pos = 0;
			while (fd.cFileName[pos])
				pos++;
			DWORD type = *(DWORD *)(fd.cFileName+pos-4);
			type |= 0x20202020; // convert letter to lowercase, "\0" to space
			if (type == typeMask)
			{
				strcpy_s (currfile, exeBaseFolder);
				strcat_s (currfile, folder);
				strcat_s (currfile, "\\");
				strcat_s (currfile, fd.cFileName);
				if (LoadLibrary(currfile))
				{
					ASIcount++;
				}
			}
		}
	} while (FindNextFile (asiFile, &fd));
	FindClose (asiFile);
}
