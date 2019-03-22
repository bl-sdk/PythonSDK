#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_AICombatVolume(py::module &m)
{
    py::class_< UWillowSeqAct_AICombatVolume,  USequenceAction   >(m, "UWillowSeqAct_AICombatVolume")
        .def_readwrite("CombatVolume", &UWillowSeqAct_AICombatVolume::CombatVolume)
        .def_readwrite("Option", &UWillowSeqAct_AICombatVolume::Option)
          ;
}