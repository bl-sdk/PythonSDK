#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AScorpioActionSkill()
{
    class_< AScorpioActionSkill, bases< AActionSkill >  , boost::noncopyable>("AScorpioActionSkill", no_init)
        .def_readwrite("ScorpioSpawnedActor", &AScorpioActionSkill::ScorpioSpawnedActor)
        .def_readwrite("GeminiSpawnedActor", &AScorpioActionSkill::GeminiSpawnedActor)
        .def_readwrite("ActiveProjectile", &AScorpioActionSkill::ActiveProjectile)
        .def_readwrite("GeminiSkill", &AScorpioActionSkill::GeminiSkill)
        .def_readwrite("ThrowScorpioSMD", &AScorpioActionSkill::ThrowScorpioSMD)
        .def("StaticClass", &AScorpioActionSkill::StaticClass, return_value_policy< reference_existing_object >())
        .def("ShouldResetOnInterruptedGrenadeThrow", &AScorpioActionSkill::ShouldResetOnInterruptedGrenadeThrow)
        .def("CanResetActionSkill", &AScorpioActionSkill::CanResetActionSkill)
        .def("NotifySkillActorDied", &AScorpioActionSkill::NotifySkillActorDied)
        .def("GetActionSkillEventContextObject", &AScorpioActionSkill::GetActionSkillEventContextObject, return_value_policy< reference_existing_object >())
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
        .staticmethod("StaticClass")
  ;
}