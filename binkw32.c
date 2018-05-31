#include "stdafx.h"
#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#pragma pack(1)



extern "C" BOOL WINAPI DllMain(HINSTANCE hInst,DWORD reason,LPVOID)
{
	static HINSTANCE hL;
	if (reason == DLL_PROCESS_ATTACH)
	{
		hL = LoadLibrary(_T(".\\binkw32_org.dll"));
		if (!hL) return false;
		MessageBox(NULL, _T("Hello World"), _T("Hi"), NULL);
	}
	if (reason == DLL_PROCESS_DETACH)
		FreeLibrary(hL);
	return TRUE;
}

#pragma comment(linker, "/export:BinkLogoAddress=binkw32_org.BinkLogoAddress")

#pragma comment(linker, "/export:BinkBufferSetDirectDraw=binkw32_org.BinkBufferSetDirectDraw")

#pragma comment(linker, "/export:BinkIsSoftwareCursor=binkw32_org.BinkIsSoftwareCursor")

#pragma comment(linker, "/export:BinkCheckCursor=binkw32_org.BinkCheckCursor")

#pragma comment(linker, "/export:BinkRestoreCursor=binkw32_org.BinkRestoreCursor")

#pragma comment(linker, "/export:BinkBufferSetResolution=binkw32_org.BinkBufferSetResolution")

#pragma comment(linker, "/export:BinkBufferCheckWinPos=binkw32_org.BinkBufferCheckWinPos")

#pragma comment(linker, "/export:BinkBufferSetOffset=binkw32_org.BinkBufferSetOffset")

#pragma comment(linker, "/export:BinkBufferOpen=binkw32_org.BinkBufferOpen")

#pragma comment(linker, "/export:BinkBufferClose=binkw32_org.BinkBufferClose")

#pragma comment(linker, "/export:BinkBufferLock=binkw32_org.BinkBufferLock")

#pragma comment(linker, "/export:BinkBufferUnlock=binkw32_org.BinkBufferUnlock")

#pragma comment(linker, "/export:BinkBufferBlit=binkw32_org.BinkBufferBlit")

#pragma comment(linker, "/export:BinkBufferSetScale=binkw32_org.BinkBufferSetScale")

#pragma comment(linker, "/export:BinkBufferSetHWND=binkw32_org.BinkBufferSetHWND")

#pragma comment(linker, "/export:BinkBufferGetDescription=binkw32_org.BinkBufferGetDescription")

#pragma comment(linker, "/export:BinkBufferGetError=binkw32_org.BinkBufferGetError")

#pragma comment(linker, "/export:BinkBufferClear=binkw32_org.BinkBufferClear")

#pragma comment(linker, "/export:BinkDDSurfaceType=binkw32_org.BinkDDSurfaceType")

#pragma comment(linker, "/export:BinkDX8SurfaceType=binkw32_org.BinkDX8SurfaceType")

#pragma comment(linker, "/export:BinkDX9SurfaceType=binkw32_org.BinkDX9SurfaceType")

#pragma comment(linker, "/export:BinkSetError=binkw32_org.BinkSetError")

#pragma comment(linker, "/export:BinkGetError=binkw32_org.BinkGetError")

#pragma comment(linker, "/export:BinkSetSoundSystem=binkw32_org.BinkSetSoundSystem")

#pragma comment(linker, "/export:BinkSetFrameRate=binkw32_org.BinkSetFrameRate")

#pragma comment(linker, "/export:BinkSetFileOffset=binkw32_org.BinkSetFileOffset")

#pragma comment(linker, "/export:BinkSetIOSize=binkw32_org.BinkSetIOSize")

#pragma comment(linker, "/export:BinkSetIO=binkw32_org.BinkSetIO")

#pragma comment(linker, "/export:BinkSetSimulate=binkw32_org.BinkSetSimulate")

#pragma comment(linker, "/export:BinkSetSoundTrack=binkw32_org.BinkSetSoundTrack")

#pragma comment(linker, "/export:BinkGetFrameBuffersInfo=binkw32_org.BinkGetFrameBuffersInfo")

#pragma comment(linker, "/export:BinkRegisterFrameBuffers=binkw32_org.BinkRegisterFrameBuffers")

#pragma comment(linker, "/export:BinkOpen=binkw32_org.BinkOpen")

#pragma comment(linker, "/export:BinkOpenWithOptions=binkw32_org.BinkOpenWithOptions")

#pragma comment(linker, "/export:BinkCopyToBuffer=binkw32_org.BinkCopyToBuffer")

#pragma comment(linker, "/export:BinkCopyToBufferRect=binkw32_org.BinkCopyToBufferRect")

#pragma comment(linker, "/export:BinkDoFramePlane=binkw32_org.BinkDoFramePlane")

#pragma comment(linker, "/export:BinkDoFrame=binkw32_org.BinkDoFrame")

#pragma comment(linker, "/export:BinkShouldSkip=binkw32_org.BinkShouldSkip")

#pragma comment(linker, "/export:BinkNextFrame=binkw32_org.BinkNextFrame")

#pragma comment(linker, "/export:BinkGetKeyFrame=binkw32_org.BinkGetKeyFrame")

#pragma comment(linker, "/export:BinkGoto=binkw32_org.BinkGoto")

#pragma comment(linker, "/export:BinkFreeGlobals=binkw32_org.BinkFreeGlobals")

#pragma comment(linker, "/export:BinkClose=binkw32_org.BinkClose")

#pragma comment(linker, "/export:BinkGetPlatformInfo=binkw32_org.BinkGetPlatformInfo")

#pragma comment(linker, "/export:BinkWait=binkw32_org.BinkWait")

#pragma comment(linker, "/export:BinkPause=binkw32_org.BinkPause")

#pragma comment(linker, "/export:BinkGetSummary=binkw32_org.BinkGetSummary")

#pragma comment(linker, "/export:BinkGetRealtime=binkw32_org.BinkGetRealtime")

#pragma comment(linker, "/export:BinkGetRects=binkw32_org.BinkGetRects")

#pragma comment(linker, "/export:BinkService=binkw32_org.BinkService")

#pragma comment(linker, "/export:BinkSetVolume=binkw32_org.BinkSetVolume")

#pragma comment(linker, "/export:BinkSetSpeakerVolumes=binkw32_org.BinkSetSpeakerVolumes")

#pragma comment(linker, "/export:BinkSetPan=binkw32_org.BinkSetPan")

#pragma comment(linker, "/export:BinkGetTrackType=binkw32_org.BinkGetTrackType")

#pragma comment(linker, "/export:BinkGetTrackMaxSize=binkw32_org.BinkGetTrackMaxSize")

#pragma comment(linker, "/export:BinkGetTrackID=binkw32_org.BinkGetTrackID")

#pragma comment(linker, "/export:BinkOpenTrack=binkw32_org.BinkOpenTrack")

#pragma comment(linker, "/export:BinkCloseTrack=binkw32_org.BinkCloseTrack")

#pragma comment(linker, "/export:BinkGetTrackData=binkw32_org.BinkGetTrackData")

#pragma comment(linker, "/export:BinkSetVideoOnOff=binkw32_org.BinkSetVideoOnOff")

#pragma comment(linker, "/export:BinkSetSoundOnOff=binkw32_org.BinkSetSoundOnOff")

#pragma comment(linker, "/export:BinkSetMemory=binkw32_org.BinkSetMemory")

#pragma comment(linker, "/export:BinkSetWillLoop=binkw32_org.BinkSetWillLoop")

#pragma comment(linker, "/export:BinkControlBackgroundIO=binkw32_org.BinkControlBackgroundIO")

#pragma comment(linker, "/export:BinkOpenWaveOut=binkw32_org.BinkOpenWaveOut")

#pragma comment(linker, "/export:BinkOpenDirectSound=binkw32_org.BinkOpenDirectSound")

#pragma comment(linker, "/export:BinkOpenMiles=binkw32_org.BinkOpenMiles")

#pragma comment(linker, "/export:RADTimerRead=binkw32_org.RADTimerRead")

#pragma comment(linker, "/export:BinkStartAsyncThread=binkw32_org.BinkStartAsyncThread")

#pragma comment(linker, "/export:BinkRequestStopAsyncThread=binkw32_org.BinkRequestStopAsyncThread")

#pragma comment(linker, "/export:BinkWaitStopAsyncThread=binkw32_org.BinkWaitStopAsyncThread")

#pragma comment(linker, "/export:BinkDoFrameAsync=binkw32_org.BinkDoFrameAsync")

#pragma comment(linker, "/export:BinkDoFrameAsyncWait=binkw32_org.BinkDoFrameAsyncWait")

#pragma comment(linker, "/export:BinkOpenXAudio2=binkw32_org.BinkOpenXAudio2")

#pragma comment(linker, "/export:BinkControlPlatformFeatures=binkw32_org.BinkControlPlatformFeatures")

#pragma comment(linker, "/export:BinkGetPalette=binkw32_org.BinkGetPalette")


