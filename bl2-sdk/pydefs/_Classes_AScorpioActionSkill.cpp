#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AScorpioActionSkill(py::object m)
{
    py::class_< AScorpioActionSkill,  AActionSkill   >(m, "AScorpioActionSkill")
        .def_readwrite("ScorpioSpawnedActor", &AScorpioActionSkill::ScorpioSpawnedActor)
        .def_readwrite("GeminiSpawnedActor", &AScorpioActionSkill::GeminiSpawnedActor)
        .def_readwrite("ActiveProjectile", &AScorpioActionSkill::ActiveProjectile)
        .def_readwrite("GeminiSkill", &AScorpioActionSkill::GeminiSkill)
        .def_readwrite("ThrowScorpioSMD", &AScorpioActionSkill::ThrowScorpioSMD)
        .def("StaticClass", &AScorpioActionSkill::StaticClass, py::return_value_policy::reference)
        .def("ShouldResetOnInterruptedGrenadeThrow", &AScorpioActionSkill::ShouldResetOnInterruptedGrenadeThrow)
        .def("CanResetActionSkill", &AScorpioActionSkill::CanResetActionSkill)
        .def("NotifySkillActorDied", &AScorpioActionSkill::NotifySkillActorDied)
        .def("GetActionSkillEventContextObject", &AScorpioActionSkill::GetActionSkillEventContextObject, py::return_value_policy::reference)
        .def("ClientDeployScorpio", &AScorpioActionSkill::ClientDeployScorpio)
        .def("DeployScorpio", &AScorpioActionSkill::DeployScorpio)
        .def("PlayThrowAnimation", &AScorpioActionSkill::PlayThrowAnimation)
        .def("DestroyOwnedInstanceData", &AScorpioActionSkill::DestroyOwnedInstanceData)
        .def("RemoveInstanceData", &AScorpioActionSkill::RemoveInstanceData)
        .def("eventGetInstanceData", &AScorpioActionSkill::eventGetInstanceData)
        .def("SetInstanceData", &AScorpioActionSkill::SetInstanceData)
        .def("AllowNewActiveAbilityActivation", &AScorpioActionSkill::AllowNewActiveAbilityActivation)
        .def("StartActionSkillActiveAbility", &AScorpioActionSkill::StartActionSkillActiveAbility)
        .def("OnActionSkillOwnerDied", &AScorpioActionSkill::OnActionSkillOwnerDied)
        .def("OnActionSkillEnded", &AScorpioActionSkill::OnActionSkillEnded)
        .def("OnActionSkillStarted", &AScorpioActionSkill::OnActionSkillStarted)
          ;
}