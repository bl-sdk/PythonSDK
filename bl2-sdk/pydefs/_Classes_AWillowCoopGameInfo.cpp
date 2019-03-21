#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowCoopGameInfo()
{
    py::class_< AWillowCoopGameInfo,  AWillowGameInfo   >("AWillowCoopGameInfo")
        .def_readwrite("Teams", &AWillowCoopGameInfo::Teams)
        .def("StaticClass", &AWillowCoopGameInfo::StaticClass, py::return_value_policy::reference)
        .def("InitializeTeams", &AWillowCoopGameInfo::InitializeTeams)
        .def("eventHandleSeamlessTravelPlayer", &AWillowCoopGameInfo::eventHandleSeamlessTravelPlayer)
        .def("eventGetSeamlessTravelActorList", &AWillowCoopGameInfo::eventGetSeamlessTravelActorList)
        .def("eventPostSeamlessTravel", &AWillowCoopGameInfo::eventPostSeamlessTravel)
        .def("DisableFakePauseFor", &AWillowCoopGameInfo::DisableFakePauseFor)
        .def("OverrideCanUnpauseInternalUI", &AWillowCoopGameInfo::OverrideCanUnpauseInternalUI)
        .def("ProcessLeviathanPlayerLeft", &AWillowCoopGameInfo::ProcessLeviathanPlayerLeft)
        .def("ProcessLeviathanPlayerJoined", &AWillowCoopGameInfo::ProcessLeviathanPlayerJoined)
        .def("GetLeviathanPlayerType", &AWillowCoopGameInfo::GetLeviathanPlayerType)
        .def("UpdatePartyLeader", &AWillowCoopGameInfo::UpdatePartyLeader)
        .def("Logout", &AWillowCoopGameInfo::Logout)
        .def("eventPostLogin", &AWillowCoopGameInfo::eventPostLogin)
        .def("AllowPausing", &AWillowCoopGameInfo::AllowPausing)
        .def("IsHumanControlled", &AWillowCoopGameInfo::IsHumanControlled)
        .def("eventShouldOverrideDamageTypeForHealing", &AWillowCoopGameInfo::eventShouldOverrideDamageTypeForHealing)
        .def("eventGetHealingDamageTypeDefinition", &AWillowCoopGameInfo::eventGetHealingDamageTypeDefinition, py::return_value_policy::reference)
        .def("ConvertDamageToHealing", &AWillowCoopGameInfo::ConvertDamageToHealing)
        .def("ReduceDamage", &AWillowCoopGameInfo::ReduceDamage)
        .def("IsFriendlyFire", &AWillowCoopGameInfo::IsFriendlyFire)
        .def("ChangeTeam", &AWillowCoopGameInfo::ChangeTeam)
        .def("PickTeam", &AWillowCoopGameInfo::PickTeam)
        .def("CreateTeam", &AWillowCoopGameInfo::CreateTeam)
        .staticmethod("StaticClass")
  ;
}