#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDownloadableExpansionDefinition()
{
    py::class_< UDownloadableExpansionDefinition,  UDownloadableContentDefinition   >("UDownloadableExpansionDefinition")
        .def_readwrite("LevelTravelPairs", &UDownloadableExpansionDefinition::LevelTravelPairs)
        .def_readwrite("LevelDependencyList", &UDownloadableExpansionDefinition::LevelDependencyList)
        .def_readwrite("ChallengeList", &UDownloadableExpansionDefinition::ChallengeList)
        .def_readwrite("NPCDialogGroups", &UDownloadableExpansionDefinition::NPCDialogGroups)
        .def_readwrite("FastTravelMapMovie", &UDownloadableExpansionDefinition::FastTravelMapMovie)
        .def_readwrite("AllSideMissionsCompleteAchievement", &UDownloadableExpansionDefinition::AllSideMissionsCompleteAchievement)
        .def_readwrite("GatewayStationDefinition", &UDownloadableExpansionDefinition::GatewayStationDefinition)
        .def_readwrite("RegionBalanceData", &UDownloadableExpansionDefinition::RegionBalanceData)
        .def_readwrite("Currencies", &UDownloadableExpansionDefinition::Currencies)
        .def_readwrite("MissionNumberBase", &UDownloadableExpansionDefinition::MissionNumberBase)
        .def_readwrite("SeasonalMissionList", &UDownloadableExpansionDefinition::SeasonalMissionList)
        .def_readwrite("TrainingMessageListDef", &UDownloadableExpansionDefinition::TrainingMessageListDef)
        .def("StaticClass", &UDownloadableExpansionDefinition::StaticClass, py::return_value_policy::reference)
        .def("IsLevelTravelAccessible", &UDownloadableExpansionDefinition::IsLevelTravelAccessible)
        .def("CanTravelTo", &UDownloadableExpansionDefinition::CanTravelTo)
        .staticmethod("StaticClass")
  ;
}