#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APopulationEncounter(py::module &m)
{
    py::class_< APopulationEncounter,  AInfo   >(m, "APopulationEncounter")
        .def_readwrite("EncounterPopulationDef", &APopulationEncounter::EncounterPopulationDef)
        .def_readwrite("MemberOutposts", &APopulationEncounter::MemberOutposts)
        .def_readwrite("MemberOpportunities", &APopulationEncounter::MemberOpportunities)
        .def_readwrite("SpawnLimits", &APopulationEncounter::SpawnLimits)
        .def_readwrite("Waves", &APopulationEncounter::Waves)
        .def_readwrite("CurrentWave", &APopulationEncounter::CurrentWave)
        .def_readwrite("TimeToStartNextWave", &APopulationEncounter::TimeToStartNextWave)
        .def_readwrite("RespawnDelayStartTime", &APopulationEncounter::RespawnDelayStartTime)
        .def("StaticClass", &APopulationEncounter::StaticClass, py::return_value_policy::reference)
        .def("eventTriggerKismetAllSpawnedEvent", &APopulationEncounter::eventTriggerKismetAllSpawnedEvent)
        .def("eventTriggerKismetDeathEvent", &APopulationEncounter::eventTriggerKismetDeathEvent)
        .def("OnToggle", &APopulationEncounter::OnToggle)
        .def("UpdateOpportunityEnabledStates", &APopulationEncounter::UpdateOpportunityEnabledStates)
        .def("UpdateKismetNotifications", &APopulationEncounter::UpdateKismetNotifications)
          ;
}