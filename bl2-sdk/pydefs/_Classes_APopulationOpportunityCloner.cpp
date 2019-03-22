#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APopulationOpportunityCloner(py::module &m)
{
    py::class_< APopulationOpportunityCloner,  APopulationOpportunity   >(m, "APopulationOpportunityCloner")
        .def_readwrite("Conditions", &APopulationOpportunityCloner::Conditions)
        .def_readwrite("SpawnFactory", &APopulationOpportunityCloner::SpawnFactory)
        .def_readwrite("MaxTotalActors", &APopulationOpportunityCloner::MaxTotalActors)
        .def_readwrite("MaxActiveActors", &APopulationOpportunityCloner::MaxActiveActors)
        .def_readwrite("RespawnStyle", &APopulationOpportunityCloner::RespawnStyle)
        .def_readwrite("RespawnDelay", &APopulationOpportunityCloner::RespawnDelay)
        .def_readwrite("RespawnDelayAfterDeath", &APopulationOpportunityCloner::RespawnDelayAfterDeath)
        .def_readwrite("NumTotalActors", &APopulationOpportunityCloner::NumTotalActors)
        .def_readwrite("NumActiveActors", &APopulationOpportunityCloner::NumActiveActors)
        .def("StaticClass", &APopulationOpportunityCloner::StaticClass, py::return_value_policy::reference)
        .def("ApplyPreviewBodyComposition", &APopulationOpportunityCloner::ApplyPreviewBodyComposition)
        .def("GetBodyInfoProvider", &APopulationOpportunityCloner::GetBodyInfoProvider, py::return_value_policy::reference)
        .def("CloneTimer", &APopulationOpportunityCloner::CloneTimer)
        .def("RespawnKilledActors", &APopulationOpportunityCloner::RespawnKilledActors)
        .def("DoSpawning", &APopulationOpportunityCloner::DoSpawning)
          ;
}