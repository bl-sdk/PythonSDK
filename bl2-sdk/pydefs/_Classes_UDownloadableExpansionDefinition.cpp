#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDownloadableExpansionDefinition()
{
    class_< UDownloadableExpansionDefinition, bases< UDownloadableContentDefinition >  , boost::noncopyable>("UDownloadableExpansionDefinition", no_init)
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
        .def("StaticClass", &UDownloadableExpansionDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("IsLevelTravelAccessible", &UDownloadableExpansionDefinition::IsLevelTravelAccessible)
        .def("CanTravelTo", &UDownloadableExpansionDefinition::CanTravelTo)
        .staticmethod("StaticClass")
  ;
}