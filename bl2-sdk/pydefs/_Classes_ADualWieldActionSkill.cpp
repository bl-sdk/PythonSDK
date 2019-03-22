#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADualWieldActionSkill(py::module &m)
{
    py::class_< ADualWieldActionSkill,  AActionSkill   >(m, "ADualWieldActionSkill")
        .def_readwrite("WeaponCache", &ADualWieldActionSkill::WeaponCache)
        .def_readwrite("OffhandWeaponCache", &ADualWieldActionSkill::OffhandWeaponCache)
        .def_readwrite("CrosshairWidget", &ADualWieldActionSkill::CrosshairWidget)
        .def_readwrite("RestoreOffHandWeapon", &ADualWieldActionSkill::RestoreOffHandWeapon)
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
        .def("SelectInitialWeapons", [](ADualWieldActionSkill &self ) { class AWillowWeapon** pyMainHandWeapon = 0 ; class AWillowWeapon** pyOffHandWeapon = 0 ;   self.SelectInitialWeapons(pyMainHandWeapon, pyOffHandWeapon); return py::make_tuple(*pyMainHandWeapon, *pyOffHandWeapon); })
        .def("ReturnFirstWeapon", &ADualWieldActionSkill::ReturnFirstWeapon, py::return_value_policy::reference)
        .def("SetLeftSideControl", &ADualWieldActionSkill::SetLeftSideControl)
        .def("OnActionSkillWeaponsRestricted", &ADualWieldActionSkill::OnActionSkillWeaponsRestricted)
        .def("OnActionSkillOwnerWeaponSwitched", &ADualWieldActionSkill::OnActionSkillOwnerWeaponSwitched)
        .def("OnActionSkillEnded", &ADualWieldActionSkill::OnActionSkillEnded)
        .def("OnActionSkillStarted", &ADualWieldActionSkill::OnActionSkillStarted)
          ;
}