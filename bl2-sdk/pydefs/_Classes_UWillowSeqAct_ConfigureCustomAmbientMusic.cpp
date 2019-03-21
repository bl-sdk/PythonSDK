#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ConfigureCustomAmbientMusic()
{
    py::class_< UWillowSeqAct_ConfigureCustomAmbientMusic,  USequenceAction   >("UWillowSeqAct_ConfigureCustomAmbientMusic")
        .def_readwrite("AmbientMusicAkState", &UWillowSeqAct_ConfigureCustomAmbientMusic::AmbientMusicAkState)
        .def("StaticClass", &UWillowSeqAct_ConfigureCustomAmbientMusic::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}