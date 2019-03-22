#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADeathtrapActionSkill(py::module &m)
{
    py::class_< ADeathtrapActionSkill,  AActionSkill   >(m, "ADeathtrapActionSkill")
        .def_readwrite("DeathTrap", &ADeathtrapActionSkill::DeathTrap)
        .def_readwrite("ShareShieldsSkill", &ADeathtrapActionSkill::ShareShieldsSkill)
        .def_readwrite("MedicBeamTarget", &ADeathtrapActionSkill::MedicBeamTarget)
        .def_readwrite("MedicBeamState", &ADeathtrapActionSkill::MedicBeamState)
        .def_readwrite("MedicBeamSourceSocket", &ADeathtrapActionSkill::MedicBeamSourceSocket)
        .def_readwrite("MedicBeamTargetSocket", &ADeathtrapActionSkill::MedicBeamTargetSocket)
        .def_readwrite("MedicBeamMaxDistance", &ADeathtrapActionSkill::MedicBeamMaxDistance)
        .def_readwrite("MedicBeamSkill", &ADeathtrapActionSkill::MedicBeamSkill)
        .def_readwrite("MedicBeamTargetSkill", &ADeathtrapActionSkill::MedicBeamTargetSkill)
        .def_readwrite("MedicBeamFiringMode", &ADeathtrapActionSkill::MedicBeamFiringMode)
        .def("DeactivateMedicBeam", &ADeathtrapActionSkill::DeactivateMedicBeam)
        .def("BlockMedicBeam", &ADeathtrapActionSkill::BlockMedicBeam)
        .def("ActivateMedicBeam", &ADeathtrapActionSkill::ActivateMedicBeam)
        .def("TryToActivateMedicBeam", &ADeathtrapActionSkill::TryToActivateMedicBeam)
        .def("IsValidCurrentMedicBeamTarget", &ADeathtrapActionSkill::IsValidCurrentMedicBeamTarget)
        .def("IsValidMedicBeamTarget", &ADeathtrapActionSkill::IsValidMedicBeamTarget)
        .def("TryToShareShields", &ADeathtrapActionSkill::TryToShareShields)
        .def("DestroyOwnedInstanceData", &ADeathtrapActionSkill::DestroyOwnedInstanceData)
        .def("RemoveInstanceData", &ADeathtrapActionSkill::RemoveInstanceData)
        .def("eventGetInstanceData", &ADeathtrapActionSkill::eventGetInstanceData)
        .def("SetInstanceData", &ADeathtrapActionSkill::SetInstanceData)
        .def("GetAutoAimPawn", &ADeathtrapActionSkill::GetAutoAimPawn, py::return_value_policy::reference)
        .def("NotifyActionSkillActiveAbility", &ADeathtrapActionSkill::NotifyActionSkillActiveAbility)
        .def("StartActionSkillActiveAbility", &ADeathtrapActionSkill::StartActionSkillActiveAbility)
        .def("OnActionSkillEnded", &ADeathtrapActionSkill::OnActionSkillEnded)
        .def("OnActionSkillStarted", &ADeathtrapActionSkill::OnActionSkillStarted)
        .def("eventOnActionSkillTick", &ADeathtrapActionSkill::eventOnActionSkillTick)
          ;
}