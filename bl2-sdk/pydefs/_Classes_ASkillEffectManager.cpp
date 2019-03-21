#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ASkillEffectManager()
{
    class_< ASkillEffectManager, bases< AActor >  , boost::noncopyable>("ASkillEffectManager", no_init)
        .def_readwrite("DeferredSkillActivationList", &ASkillEffectManager::DeferredSkillActivationList)
        .def_readwrite("ActiveSkills", &ASkillEffectManager::ActiveSkills)
        .def("StaticClass", &ASkillEffectManager::StaticClass, return_value_policy< reference_existing_object >())
        .def("TriggerTakeHitEvents", &ASkillEffectManager::TriggerTakeHitEvents)
        .def("GetActiveSkillForInstigatorByDefinition", &ASkillEffectManager::GetActiveSkillForInstigatorByDefinition, return_value_policy< reference_existing_object >())
        .def("GetActiveSkillForInstigator", &ASkillEffectManager::GetActiveSkillForInstigator, return_value_policy< reference_existing_object >())
        .def("UpdateSkillGrade", &ASkillEffectManager::UpdateSkillGrade)
        .def("NotifySkillDamagedEvent", &ASkillEffectManager::NotifySkillDamagedEvent)
        .def("NotifySkillEvent", &ASkillEffectManager::NotifySkillEvent)
        .def("IsSkillActive", &ASkillEffectManager::IsSkillActive)
        .def("IsSkillPaused", &ASkillEffectManager::IsSkillPaused)
        .def("eventDeactivateSkill", &ASkillEffectManager::eventDeactivateSkill)
        .def("eventActivateSkill", &ASkillEffectManager::eventActivateSkill)
        .def("DeferActivateSkill", &ASkillEffectManager::DeferActivateSkill)
        .def("RefreshSkillsAffectingInstigator", &ASkillEffectManager::RefreshSkillsAffectingInstigator)
        .def("RefreshSkillsForInstigator", &ASkillEffectManager::RefreshSkillsForInstigator)
        .def("DeactivateAllSkillTreeSkillsForPlayer", &ASkillEffectManager::DeactivateAllSkillTreeSkillsForPlayer)
        .def("DeactivateAllSkillsForInstigator", &ASkillEffectManager::DeactivateAllSkillsForInstigator)
        .staticmethod("StaticClass")
  ;
}