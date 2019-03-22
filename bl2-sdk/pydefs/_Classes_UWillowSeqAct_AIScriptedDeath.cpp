#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_AIScriptedDeath(py::module &m)
{
    py::class_< UWillowSeqAct_AIScriptedDeath,  USequenceAction   >(m, "UWillowSeqAct_AIScriptedDeath")
        .def_readwrite("DamageType", &UWillowSeqAct_AIScriptedDeath::DamageType)
        .def_readwrite("DeathType", &UWillowSeqAct_AIScriptedDeath::DeathType)
        .def_readwrite("Anim", &UWillowSeqAct_AIScriptedDeath::Anim)
        .def_readwrite("EditInlineAnim", &UWillowSeqAct_AIScriptedDeath::EditInlineAnim)
        .def_readwrite("Killer", &UWillowSeqAct_AIScriptedDeath::Killer)
          ;
}