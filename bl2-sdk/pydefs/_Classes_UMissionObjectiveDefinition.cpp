#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMissionObjectiveDefinition(py::module &m)
{
    py::class_< UMissionObjectiveDefinition,  UGBXDefinition   >(m, "UMissionObjectiveDefinition")
		.def_static("StaticClass", &UMissionObjectiveDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("StatId", &UMissionObjectiveDefinition::StatId)
        .def_readwrite("ObjectiveCount", &UMissionObjectiveDefinition::ObjectiveCount)
        .def_readwrite("OptionalCurrencyRewardType", &UMissionObjectiveDefinition::OptionalCurrencyRewardType)
        .def_readwrite("ProgressMessage", &UMissionObjectiveDefinition::ProgressMessage)
        .def_readwrite("StationOverride", &UMissionObjectiveDefinition::StationOverride)
        .def_readwrite("OptionalCreditRewardMultiplier", &UMissionObjectiveDefinition::OptionalCreditRewardMultiplier)
        .def_readwrite("OptionalOtherCurrencyReward", &UMissionObjectiveDefinition::OptionalOtherCurrencyReward)
        .def_readwrite("OptionalExperienceRewardPercentage", &UMissionObjectiveDefinition::OptionalExperienceRewardPercentage)
        .def_readwrite("KillRestrictions", &UMissionObjectiveDefinition::KillRestrictions)
        .def("IsMissionTurnIn", &UMissionObjectiveDefinition::IsMissionTurnIn)
        .def("GetMissionName", &UMissionObjectiveDefinition::GetMissionName)
        .def("GetObjectiveName", &UMissionObjectiveDefinition::GetObjectiveName)
        .def("TranslateObjectiveCount", &UMissionObjectiveDefinition::TranslateObjectiveCount)
          ;
}