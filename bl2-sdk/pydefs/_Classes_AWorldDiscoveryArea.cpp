#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWorldDiscoveryArea(py::module &m)
{
    py::class_< AWorldDiscoveryArea,  AActor   >(m, "AWorldDiscoveryArea")
        .def_readwrite("VfTable_IIBalancedActor", &AWorldDiscoveryArea::VfTable_IIBalancedActor)
        .def_readwrite("DefaultWorldAreaShortName", &AWorldDiscoveryArea::DefaultWorldAreaShortName)
        .def_readwrite("CustomName", &AWorldDiscoveryArea::CustomName)
        .def_readwrite("DetectionVolumes", &AWorldDiscoveryArea::DetectionVolumes)
        .def_readwrite("DetectionRadius", &AWorldDiscoveryArea::DetectionRadius)
        .def_readwrite("DetectionHeight", &AWorldDiscoveryArea::DetectionHeight)
        .def_readwrite("WorldAreaDisplayName", &AWorldDiscoveryArea::WorldAreaDisplayName)
        .def_readwrite("DiscoveryAkEvent", &AWorldDiscoveryArea::DiscoveryAkEvent)
        .def_readwrite("BalanceToRegionDef", &AWorldDiscoveryArea::BalanceToRegionDef)
        .def_readwrite("ExperienceRewardMultiplier", &AWorldDiscoveryArea::ExperienceRewardMultiplier)
        .def_readwrite("GameStage", &AWorldDiscoveryArea::GameStage)
        .def_readwrite("PlayersDetected", &AWorldDiscoveryArea::PlayersDetected)
        .def_readwrite("NextDetectionTime", &AWorldDiscoveryArea::NextDetectionTime)
        .def("StaticClass", &AWorldDiscoveryArea::StaticClass, py::return_value_policy::reference)
        .def("GetBalancedActorTypeIdentifier", &AWorldDiscoveryArea::GetBalancedActorTypeIdentifier)
        .def("SetExpLevel", &AWorldDiscoveryArea::SetExpLevel)
        .def("SetAwesomeLevel", &AWorldDiscoveryArea::SetAwesomeLevel)
        .def("SetGameStage", &AWorldDiscoveryArea::SetGameStage)
        .def("GetExpLevelForEquip", &AWorldDiscoveryArea::GetExpLevelForEquip)
        .def("GetExpLevel", &AWorldDiscoveryArea::GetExpLevel)
        .def("GetAwesomeLevel", &AWorldDiscoveryArea::GetAwesomeLevel)
        .def("GetGameStage", &AWorldDiscoveryArea::GetGameStage)
        .def("GetExperienceReward", &AWorldDiscoveryArea::GetExperienceReward)
        .def("GetWorldAreaShortName", &AWorldDiscoveryArea::GetWorldAreaShortName)
          ;
}