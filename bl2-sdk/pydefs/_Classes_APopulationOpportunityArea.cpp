#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APopulationOpportunityArea(py::object m)
{
    py::class_< APopulationOpportunityArea,  APopulationOpportunity   >(m, "APopulationOpportunityArea")
        .def_readwrite("SpawnOptions", &APopulationOpportunityArea::SpawnOptions)
        .def_readwrite("DetectionVolumes", &APopulationOpportunityArea::DetectionVolumes)
        .def_readwrite("DetectionRadius", &APopulationOpportunityArea::DetectionRadius)
        .def_readwrite("SelectedSpawnIdx", &APopulationOpportunityArea::SelectedSpawnIdx)
        .def_readwrite("SpawnData", &APopulationOpportunityArea::SpawnData)
        .def_readwrite("PlayersDetected", &APopulationOpportunityArea::PlayersDetected)
        .def_readwrite("NumPlayersDetected", &APopulationOpportunityArea::NumPlayersDetected)
        .def("StaticClass", &APopulationOpportunityArea::StaticClass, py::return_value_policy::reference)
        .def("ApplyPreviewBodyComposition", &APopulationOpportunityArea::ApplyPreviewBodyComposition)
        .def("GetBodyInfoProvider", &APopulationOpportunityArea::GetBodyInfoProvider, py::return_value_policy::reference)
        .def("RespawnKilledActors", &APopulationOpportunityArea::RespawnKilledActors)
        .def("DoSpawning", &APopulationOpportunityArea::DoSpawning)
          ;
}