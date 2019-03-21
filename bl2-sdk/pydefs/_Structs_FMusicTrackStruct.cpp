#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMusicTrackStruct()
{
    class_< FMusicTrackStruct >("FMusicTrackStruct", no_init)
        .def_readwrite("TheSoundCue", &FMusicTrackStruct::TheSoundCue)
        .def_readwrite("FadeInTime", &FMusicTrackStruct::FadeInTime)
        .def_readwrite("FadeInVolumeLevel", &FMusicTrackStruct::FadeInVolumeLevel)
        .def_readwrite("FadeOutTime", &FMusicTrackStruct::FadeOutTime)
        .def_readwrite("FadeOutVolumeLevel", &FMusicTrackStruct::FadeOutVolumeLevel)
        .def_readwrite("MP3Filename", &FMusicTrackStruct::MP3Filename)
  ;
}