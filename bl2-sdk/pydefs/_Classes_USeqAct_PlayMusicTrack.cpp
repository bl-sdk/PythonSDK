#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_PlayMusicTrack()
{
    py::class_< USeqAct_PlayMusicTrack,  USequenceAction   >("USeqAct_PlayMusicTrack")
        .def_readwrite("MusicTrack", &USeqAct_PlayMusicTrack::MusicTrack)
        .def("StaticClass", &USeqAct_PlayMusicTrack::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}