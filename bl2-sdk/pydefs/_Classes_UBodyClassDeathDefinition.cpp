#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBodyClassDeathDefinition()
{
    class_< UBodyClassDeathDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UBodyClassDeathDefinition", no_init)
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
        .def("StaticClass", &UBodyClassDeathDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnTechDeath", &UBodyClassDeathDefinition::OnTechDeath)
        .def("OnBodyDissolve", &UBodyClassDeathDefinition::OnBodyDissolve)
        .def("OnDeathNonGib", &UBodyClassDeathDefinition::OnDeathNonGib)
        .def("OnDeathGib", &UBodyClassDeathDefinition::OnDeathGib)
        .def("OnKilledBy", &UBodyClassDeathDefinition::OnKilledBy)
        .def("OnPlayDeathPizazz", &UBodyClassDeathDefinition::OnPlayDeathPizazz)
        .def("SetBehaviorProviderDefinition", &UBodyClassDeathDefinition::SetBehaviorProviderDefinition)
        .def("GetBehaviorProviderDefinition", &UBodyClassDeathDefinition::GetBehaviorProviderDefinition, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}