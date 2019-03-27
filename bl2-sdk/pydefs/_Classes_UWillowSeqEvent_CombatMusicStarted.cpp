#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_CombatMusicStarted(py::module &m)
{
    py::class_< UWillowSeqEvent_CombatMusicStarted,  USequenceEvent   >(m, "UWillowSeqEvent_CombatMusicStarted")
		.def_static("StaticClass", &UWillowSeqEvent_CombatMusicStarted::StaticClass, py::return_value_policy::reference)
          ;
}