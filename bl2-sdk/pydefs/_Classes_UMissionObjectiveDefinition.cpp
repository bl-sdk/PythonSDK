#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMissionObjectiveDefinition()
{
    class_< UMissionObjectiveDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UMissionObjectiveDefinition", no_init)
        .def_readwrite("StatId", &UMissionObjectiveDefinition::StatId)
        .def_readwrite("ObjectiveCount", &UMissionObjectiveDefinition::ObjectiveCount)
        .def_readwrite("OptionalCurrencyRewardType", &UMissionObjectiveDefinition::OptionalCurrencyRewardType)
        .def_readwrite("ProgressMessage", &UMissionObjectiveDefinition::ProgressMessage)
        .def_readwrite("StationOverride", &UMissionObjectiveDefinition::StationOverride)
        .def_readwrite("OptionalCreditRewardMultiplier", &UMissionObjectiveDefinition::OptionalCreditRewardMultiplier)
        .def_readwrite("OptionalOtherCurrencyReward", &UMissionObjectiveDefinition::OptionalOtherCurrencyReward)
        .def_readwrite("OptionalExperienceRewardPercentage", &UMissionObjectiveDefinition::OptionalExperienceRewardPercentage)
        .def_readwrite("KillRestrictions", &UMissionObjectiveDefinition::KillRestrictions)
        .def("StaticClass", &UMissionObjectiveDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("IsMissionTurnIn", &UMissionObjectiveDefinition::IsMissionTurnIn)
        .def("GetMissionName", &UMissionObjectiveDefinition::GetMissionName)
        .def("GetObjectiveName", &UMissionObjectiveDefinition::GetObjectiveName)
        .def("TranslateObjectiveCount", &UMissionObjectiveDefinition::TranslateObjectiveCount)
        .staticmethod("StaticClass")
  ;
}