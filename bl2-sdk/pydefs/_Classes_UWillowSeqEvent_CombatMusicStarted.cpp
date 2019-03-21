#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_CombatMusicStarted()
{
    py::class_< UWillowSeqEvent_CombatMusicStarted,  USequenceEvent   >("UWillowSeqEvent_CombatMusicStarted")
        .def("StaticClass", &UWillowSeqEvent_CombatMusicStarted::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}