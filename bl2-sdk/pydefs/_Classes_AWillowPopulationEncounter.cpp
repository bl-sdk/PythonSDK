#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowPopulationEncounter()
{
    class_< AWillowPopulationEncounter, bases< APopulationEncounter >  , boost::noncopyable>("AWillowPopulationEncounter", no_init)
        .def("StaticClass", &AWillowPopulationEncounter::StaticClass, return_value_policy< reference_existing_object >())
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