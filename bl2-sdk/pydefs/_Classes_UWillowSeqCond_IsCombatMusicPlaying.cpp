#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqCond_IsCombatMusicPlaying()
{
    py::class_< UWillowSeqCond_IsCombatMusicPlaying,  USequenceCondition   >("UWillowSeqCond_IsCombatMusicPlaying")
        .def("StaticClass", &UWillowSeqCond_IsCombatMusicPlaying::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}