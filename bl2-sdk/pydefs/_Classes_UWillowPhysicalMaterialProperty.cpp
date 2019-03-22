#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowPhysicalMaterialProperty(py::module &m)
{
    py::class_< UWillowPhysicalMaterialProperty,  UPhysicalMaterialPropertyBase   >(m, "UWillowPhysicalMaterialProperty")
        .def_readwrite("MaterialAkSwitch", &UWillowPhysicalMaterialProperty::MaterialAkSwitch)
        .def_readwrite("DamageSurfaceType", &UWillowPhysicalMaterialProperty::DamageSurfaceType)
        .def_readwrite("ImpactResponses", &UWillowPhysicalMaterialProperty::ImpactResponses)
        .def_readwrite("DefaultResponseParameters", &UWillowPhysicalMaterialProperty::DefaultResponseParameters)
        .def_readwrite("WheelSlipModifiers", &UWillowPhysicalMaterialProperty::WheelSlipModifiers)
        .def_readwrite("ParticleSystemTemplate", &UWillowPhysicalMaterialProperty::ParticleSystemTemplate)
        .def("ApplyParametersToMaterialInstance", &UWillowPhysicalMaterialProperty::ApplyParametersToMaterialInstance)
        .def("AttachParticleSystemComponentToActor", &UWillowPhysicalMaterialProperty::AttachParticleSystemComponentToActor)
        .def("AttachEmitterToActor", &UWillowPhysicalMaterialProperty::AttachEmitterToActor)
        .def("ApplyParametersToParticleSystemComponent", &UWillowPhysicalMaterialProperty::ApplyParametersToParticleSystemComponent)
        .def("ApplyParametersToEmitter", &UWillowPhysicalMaterialProperty::ApplyParametersToEmitter)
        .def("eventPlayImpactEffect", &UWillowPhysicalMaterialProperty::eventPlayImpactEffect)
        .def("GetPhysicalMaterialSwitch", &UWillowPhysicalMaterialProperty::GetPhysicalMaterialSwitch, py::return_value_policy::reference)
        .def("StaticPlayImpactEffect", &UWillowPhysicalMaterialProperty::StaticPlayImpactEffect)
        .def("PlayImpactEffectSound", &UWillowPhysicalMaterialProperty::PlayImpactEffectSound)
        .def("FindResponseIndex", &UWillowPhysicalMaterialProperty::FindResponseIndex)
        .def("StaticHitInfoImpact", &UWillowPhysicalMaterialProperty::StaticHitInfoImpact)
        .def("StaticRigidBodyImpact", &UWillowPhysicalMaterialProperty::StaticRigidBodyImpact)
        .def("StaticTraceImpact", &UWillowPhysicalMaterialProperty::StaticTraceImpact)
        .def("IsImpactDebugEnabled", &UWillowPhysicalMaterialProperty::IsImpactDebugEnabled)
        .def("ToggleImpactDebug", &UWillowPhysicalMaterialProperty::ToggleImpactDebug)
          ;
}