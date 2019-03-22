#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowCoopGameInfo(py::module &m)
{
    py::class_< AWillowCoopGameInfo,  AWillowGameInfo   >(m, "AWillowCoopGameInfo")
        .def_readwrite("Teams", &AWillowCoopGameInfo::Teams)
        .def("InitializeTeams", &AWillowCoopGameInfo::InitializeTeams)
        .def("eventHandleSeamlessTravelPlayer", [](AWillowCoopGameInfo &self ) { class AController** pyC = 0 ;   self.eventHandleSeamlessTravelPlayer(pyC); return py::make_tuple(*pyC); })
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
        .def("ReduceDamage", [](AWillowCoopGameInfo &self , class APawn* injured, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, class UIDamageCauser* DamageCauser, class UDamagePipeline* Pipeline, struct FVector* Momentum) { float* pyDamage = (float*)malloc(sizeof(float)) ;   self.ReduceDamage(injured, InstigatedBy, HitLocation, DamageType, DamageCauser, Pipeline, pyDamage, Momentum); return py::make_tuple(*pyDamage); })
        .def("IsFriendlyFire", &AWillowCoopGameInfo::IsFriendlyFire)
        .def("ChangeTeam", &AWillowCoopGameInfo::ChangeTeam)
        .def("PickTeam", &AWillowCoopGameInfo::PickTeam)
        .def("CreateTeam", &AWillowCoopGameInfo::CreateTeam)
          ;
}