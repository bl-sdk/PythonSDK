#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APopulationOpportunityArea()
{
    class_< APopulationOpportunityArea, bases< APopulationOpportunity >  , boost::noncopyable>("APopulationOpportunityArea", no_init)
        .def_readwrite("SpawnOptions", &APopulationOpportunityArea::SpawnOptions)
        .def_readwrite("DetectionVolumes", &APopulationOpportunityArea::DetectionVolumes)
        .def_readwrite("DetectionRadius", &APopulationOpportunityArea::DetectionRadius)
        .def_readwrite("SelectedSpawnIdx", &APopulationOpportunityArea::SelectedSpawnIdx)
        .def_readwrite("SpawnData", &APopulationOpportunityArea::SpawnData)
        .def_readwrite("PlayersDetected", &APopulationOpportunityArea::PlayersDetected)
        .def_readwrite("NumPlayersDetected", &APopulationOpportunityArea::NumPlayersDetected)
        .def("StaticClass", &APopulationOpportunityArea::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyPreviewBodyComposition", &APopulationOpportunityArea::ApplyPreviewBodyComposition)
        .def("GetBodyInfoProvider", &APopulationOpportunityArea::GetBodyInfoProvider, return_value_policy< reference_existing_object >())
        .def("RespawnKilledActors", &APopulationOpportunityArea::RespawnKilledActors)
        .def("DoSpawning", &APopulationOpportunityArea::DoSpawning)
        .staticmethod("StaticClass")
  ;
}