#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMusicTrackStruct(py::module &m)
{
    py::class_< FMusicTrackStruct >(m, "FMusicTrackStruct")
        .def_readwrite("TheSoundCue", &FMusicTrackStruct::TheSoundCue)
        .def_readwrite("FadeInTime", &FMusicTrackStruct::FadeInTime)
        .def_readwrite("FadeInVolumeLevel", &FMusicTrackStruct::FadeInVolumeLevel)
        .def_readwrite("FadeOutTime", &FMusicTrackStruct::FadeOutTime)
        .def_readwrite("FadeOutVolumeLevel", &FMusicTrackStruct::FadeOutVolumeLevel)
        .def_readwrite("MP3Filename", &FMusicTrackStruct::MP3Filename)
  ;
}