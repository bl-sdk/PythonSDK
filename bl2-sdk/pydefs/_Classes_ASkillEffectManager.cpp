#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASkillEffectManager(py::module &m)
{
    py::class_< ASkillEffectManager,  AActor   >(m, "ASkillEffectManager")
        .def_readwrite("DeferredSkillActivationList", &ASkillEffectManager::DeferredSkillActivationList)
        .def_readwrite("ActiveSkills", &ASkillEffectManager::ActiveSkills)
        .def("TriggerTakeHitEvents", &ASkillEffectManager::TriggerTakeHitEvents)
        .def("GetActiveSkillForInstigatorByDefinition", &ASkillEffectManager::GetActiveSkillForInstigatorByDefinition, py::return_value_policy::reference)
        .def("GetActiveSkillForInstigator", &ASkillEffectManager::GetActiveSkillForInstigator, py::return_value_policy::reference)
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
          ;
}