#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_TurnOffCombatMusic(py::module &m)
{
    py::class_< UWillowSeqAct_TurnOffCombatMusic,  USequenceAction   >(m, "UWillowSeqAct_TurnOffCombatMusic")
        .def_readwrite("FadeOutTime", &UWillowSeqAct_TurnOffCombatMusic::FadeOutTime)
          ;
}