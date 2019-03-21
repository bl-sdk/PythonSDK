#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ADualWieldActionSkill()
{
    class_< ADualWieldActionSkill, bases< AActionSkill >  , boost::noncopyable>("ADualWieldActionSkill", no_init)
        .def_readwrite("WeaponCache", &ADualWieldActionSkill::WeaponCache)
        .def_readwrite("OffhandWeaponCache", &ADualWieldActionSkill::OffhandWeaponCache)
        .def_readwrite("CrosshairWidget", &ADualWieldActionSkill::CrosshairWidget)
        .def_readwrite("RestoreOffHandWeapon", &ADualWieldActionSkill::RestoreOffHandWeapon)
        .def("StaticClass", &ADualWieldActionSkill::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventTickActionSkillHUD", &ADualWieldActionSkill::eventTickActionSkillHUD)
        .def("eventDisableActionSkillHUD", &ADualWieldActionSkill::eventDisableActionSkillHUD)
        .def("SetOffHandCrosshair", &ADualWieldActionSkill::SetOffHandCrosshair)
        .def("eventEnableActionSkillHUD", &ADualWieldActionSkill::eventEnableActionSkillHUD)
        .def("SetDualWieldSwitchEx", &ADualWieldActionSkill::SetDualWieldSwitchEx)
        .def("SetDualWieldSwitch", &ADualWieldActionSkill::SetDualWieldSwitch)
        .def("ClientBringWeaponsUpAfterPutDown", &ADualWieldActionSkill::ClientBringWeaponsUpAfterPutDown)
        .def("BringWeaponsUpAfterPutDown", &ADualWieldActionSkill::BringWeaponsUpAfterPutDown)
        .def("ForceRefreshSkills", &ADualWieldActionSkill::ForceRefreshSkills)
        .def("SwitchToWeapon", &ADualWieldActionSkill::SwitchToWeapon)
        .def("SwitchWeapons", &ADualWieldActionSkill::SwitchWeapons)
        .def("SprintTransition", &ADualWieldActionSkill::SprintTransition)
        .def("EquipInitialWeapons", &ADualWieldActionSkill::EquipInitialWeapons)
        .def("SelectInitialWeapons", &ADualWieldActionSkill::SelectInitialWeapons)
        .def("ReturnFirstWeapon", &ADualWieldActionSkill::ReturnFirstWeapon, return_value_policy< reference_existing_object >())
        .def("SetLeftSideControl", &ADualWieldActionSkill::SetLeftSideControl)
        .def("OnActionSkillWeaponsRestricted", &ADualWieldActionSkill::OnActionSkillWeaponsRestricted)
        .def("OnActionSkillOwnerWeaponSwitched", &ADualWieldActionSkill::OnActionSkillOwnerWeaponSwitched)
        .def("OnActionSkillEnded", &ADualWieldActionSkill::OnActionSkillEnded)
        .def("OnActionSkillStarted", &ADualWieldActionSkill::OnActionSkillStarted)
        .staticmethod("StaticClass")
  ;
}