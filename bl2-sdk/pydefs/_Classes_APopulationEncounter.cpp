#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APopulationEncounter()
{
    class_< APopulationEncounter, bases< AInfo >  , boost::noncopyable>("APopulationEncounter", no_init)
        .def_readwrite("EncounterPopulationDef", &APopulationEncounter::EncounterPopulationDef)
        .def_readwrite("MemberOutposts", &APopulationEncounter::MemberOutposts)
        .def_readwrite("MemberOpportunities", &APopulationEncounter::MemberOpportunities)
        .def_readwrite("SpawnLimits", &APopulationEncounter::SpawnLimits)
        .def_readwrite("Waves", &APopulationEncounter::Waves)
        .def_readwrite("CurrentWave", &APopulationEncounter::CurrentWave)
        .def_readwrite("TimeToStartNextWave", &APopulationEncounter::TimeToStartNextWave)
        .def_readwrite("RespawnDelayStartTime", &APopulationEncounter::RespawnDelayStartTime)
        .def("StaticClass", &APopulationEncounter::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventTriggerKismetAllSpawnedEvent", &APopulationEncounter::eventTriggerKismetAllSpawnedEvent)
        .def("eventTriggerKismetDeathEvent", &APopulationEncounter::eventTriggerKismetDeathEvent)
        .def("OnToggle", &APopulationEncounter::OnToggle)
        .def("UpdateOpportunityEnabledStates", &APopulationEncounter::UpdateOpportunityEnabledStates)
        .def("UpdateKismetNotifications", &APopulationEncounter::UpdateKismetNotifications)
        .staticmethod("StaticClass")
  ;
}