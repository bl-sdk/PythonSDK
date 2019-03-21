#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowCoopGameInfo()
{
    class_< AWillowCoopGameInfo, bases< AWillowGameInfo >  , boost::noncopyable>("AWillowCoopGameInfo", no_init)
        .def_readwrite("Teams", &AWillowCoopGameInfo::Teams)
        .def("StaticClass", &AWillowCoopGameInfo::StaticClass, return_value_policy< reference_existing_object >())
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
        .def("eventGetHealingDamageTypeDefinition", &AWillowCoopGameInfo::eventGetHealingDamageTypeDefinition, return_value_policy< reference_existing_object >())
        .def("ConvertDamageToHealing", &AWillowCoopGameInfo::ConvertDamageToHealing)
        .def("ReduceDamage", &AWillowCoopGameInfo::ReduceDamage)
        .def("IsFriendlyFire", &AWillowCoopGameInfo::IsFriendlyFire)
        .def("ChangeTeam", &AWillowCoopGameInfo::ChangeTeam)
        .def("PickTeam", &AWillowCoopGameInfo::PickTeam)
        .def("CreateTeam", &AWillowCoopGameInfo::CreateTeam)
        .staticmethod("StaticClass")
  ;
}