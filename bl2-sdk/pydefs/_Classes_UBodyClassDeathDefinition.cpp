#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBodyClassDeathDefinition(py::module &m)
{
    py::class_< UBodyClassDeathDefinition,  UGBXDefinition   >(m, "UBodyClassDeathDefinition")
        .def_readwrite("VfTable_IIBehaviorProvider", &UBodyClassDeathDefinition::VfTable_IIBehaviorProvider)
        .def_readwrite("TechDeaths", &UBodyClassDeathDefinition::TechDeaths)
        .def_readwrite("NonRagdollDeathSpecialMove", &UBodyClassDeathDefinition::NonRagdollDeathSpecialMove)
        .def_readwrite("CanPlayDeathAnimationIf", &UBodyClassDeathDefinition::CanPlayDeathAnimationIf)
        .def_readwrite("InjuredSpecialMove", &UBodyClassDeathDefinition::InjuredSpecialMove)
        .def_readwrite("DissolveBodyDelayBeforeDestroy", &UBodyClassDeathDefinition::DissolveBodyDelayBeforeDestroy)
        .def_readwrite("GibTriggers", &UBodyClassDeathDefinition::GibTriggers)
        .def_readwrite("BehaviorProviderDefinition", &UBodyClassDeathDefinition::BehaviorProviderDefinition)
        .def_readwrite("DefaultBodyDissolveTime", &UBodyClassDeathDefinition::DefaultBodyDissolveTime)
        .def_readwrite("SkipRagdollDissolveAmount", &UBodyClassDeathDefinition::SkipRagdollDissolveAmount)
        .def_readwrite("BlendToRagdollTime", &UBodyClassDeathDefinition::BlendToRagdollTime)
        .def_readwrite("RagdollLinearSpring", &UBodyClassDeathDefinition::RagdollLinearSpring)
        .def_readwrite("RagdollAngularSpring", &UBodyClassDeathDefinition::RagdollAngularSpring)
        .def_readwrite("RagdollMotorSpring", &UBodyClassDeathDefinition::RagdollMotorSpring)
        .def_readwrite("RagdollMotorDamping", &UBodyClassDeathDefinition::RagdollMotorDamping)
        .def_readwrite("RagdollContactReportBones", &UBodyClassDeathDefinition::RagdollContactReportBones)
        .def_readwrite("RagdollContactReportThreshold", &UBodyClassDeathDefinition::RagdollContactReportThreshold)
        .def_readwrite("RagdollSpringBones", &UBodyClassDeathDefinition::RagdollSpringBones)
        .def("OnTechDeath", &UBodyClassDeathDefinition::OnTechDeath)
        .def("OnBodyDissolve", &UBodyClassDeathDefinition::OnBodyDissolve)
        .def("OnDeathNonGib", &UBodyClassDeathDefinition::OnDeathNonGib)
        .def("OnDeathGib", &UBodyClassDeathDefinition::OnDeathGib)
        .def("OnKilledBy", &UBodyClassDeathDefinition::OnKilledBy)
        .def("OnPlayDeathPizazz", &UBodyClassDeathDefinition::OnPlayDeathPizazz)
        .def("SetBehaviorProviderDefinition", &UBodyClassDeathDefinition::SetBehaviorProviderDefinition)
        .def("GetBehaviorProviderDefinition", &UBodyClassDeathDefinition::GetBehaviorProviderDefinition, py::return_value_policy::reference)
          ;
}