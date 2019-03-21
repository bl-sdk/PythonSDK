#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APopulationOpportunityCloner()
{
    class_< APopulationOpportunityCloner, bases< APopulationOpportunity >  , boost::noncopyable>("APopulationOpportunityCloner", no_init)
        .def_readwrite("Conditions", &APopulationOpportunityCloner::Conditions)
        .def_readwrite("SpawnFactory", &APopulationOpportunityCloner::SpawnFactory)
        .def_readwrite("MaxTotalActors", &APopulationOpportunityCloner::MaxTotalActors)
        .def_readwrite("MaxActiveActors", &APopulationOpportunityCloner::MaxActiveActors)
        .def_readwrite("RespawnStyle", &APopulationOpportunityCloner::RespawnStyle)
        .def_readwrite("RespawnDelay", &APopulationOpportunityCloner::RespawnDelay)
        .def_readwrite("RespawnDelayAfterDeath", &APopulationOpportunityCloner::RespawnDelayAfterDeath)
        .def_readwrite("NumTotalActors", &APopulationOpportunityCloner::NumTotalActors)
        .def_readwrite("NumActiveActors", &APopulationOpportunityCloner::NumActiveActors)
        .def("StaticClass", &APopulationOpportunityCloner::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyPreviewBodyComposition", &APopulationOpportunityCloner::ApplyPreviewBodyComposition)
        .def("GetBodyInfoProvider", &APopulationOpportunityCloner::GetBodyInfoProvider, return_value_policy< reference_existing_object >())
        .def("CloneTimer", &APopulationOpportunityCloner::CloneTimer)
        .def("RespawnKilledActors", &APopulationOpportunityCloner::RespawnKilledActors)
        .def("DoSpawning", &APopulationOpportunityCloner::DoSpawning)
        .staticmethod("StaticClass")
  ;
}