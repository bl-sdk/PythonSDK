#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowPopulationEncounter()
{
    py::class_< AWillowPopulationEncounter,  APopulationEncounter   >("AWillowPopulationEncounter")
        .def("StaticClass", &AWillowPopulationEncounter::StaticClass, py::return_value_policy::reference)
        .def("OnAIAbortMoveToActor", &AWillowPopulationEncounter::OnAIAbortMoveToActor)
        .def("OnAICombatVolume", &AWillowPopulationEncounter::OnAICombatVolume)
        .def("OnAIScripted", &AWillowPopulationEncounter::OnAIScripted)
        .def("OnAIScriptedAnim", &AWillowPopulationEncounter::OnAIScriptedAnim)
        .def("OnAIScriptedDeath", &AWillowPopulationEncounter::OnAIScriptedDeath)
        .def("OnAIScriptedFollow", &AWillowPopulationEncounter::OnAIScriptedFollow)
        .def("OnAIScriptedHold", &AWillowPopulationEncounter::OnAIScriptedHold)
        .def("OnAISetItemTossTarget", &AWillowPopulationEncounter::OnAISetItemTossTarget)
        .def("OnAIProvoke", &AWillowPopulationEncounter::OnAIProvoke)
        .staticmethod("StaticClass")
  ;
}