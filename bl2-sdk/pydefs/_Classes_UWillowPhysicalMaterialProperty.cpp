#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowPhysicalMaterialProperty()
{
    class_< UWillowPhysicalMaterialProperty, bases< UPhysicalMaterialPropertyBase >  , boost::noncopyable>("UWillowPhysicalMaterialProperty", no_init)
        .def_readwrite("MaterialAkSwitch", &UWillowPhysicalMaterialProperty::MaterialAkSwitch)
        .def_readwrite("DamageSurfaceType", &UWillowPhysicalMaterialProperty::DamageSurfaceType)
        .def_readwrite("ImpactResponses", &UWillowPhysicalMaterialProperty::ImpactResponses)
        .def_readwrite("DefaultResponseParameters", &UWillowPhysicalMaterialProperty::DefaultResponseParameters)
        .def_readwrite("WheelSlipModifiers", &UWillowPhysicalMaterialProperty::WheelSlipModifiers)
        .def_readwrite("ParticleSystemTemplate", &UWillowPhysicalMaterialProperty::ParticleSystemTemplate)
        .def("StaticClass", &UWillowPhysicalMaterialProperty::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyParametersToMaterialInstance", &UWillowPhysicalMaterialProperty::ApplyParametersToMaterialInstance)
        .def("AttachParticleSystemComponentToActor", &UWillowPhysicalMaterialProperty::AttachParticleSystemComponentToActor)
        .def("AttachEmitterToActor", &UWillowPhysicalMaterialProperty::AttachEmitterToActor)
        .def("ApplyParametersToParticleSystemComponent", &UWillowPhysicalMaterialProperty::ApplyParametersToParticleSystemComponent)
        .def("ApplyParametersToEmitter", &UWillowPhysicalMaterialProperty::ApplyParametersToEmitter)
        .def("eventPlayImpactEffect", &UWillowPhysicalMaterialProperty::eventPlayImpactEffect)
        .def("GetPhysicalMaterialSwitch", &UWillowPhysicalMaterialProperty::GetPhysicalMaterialSwitch, return_value_policy< reference_existing_object >())
        .def("StaticPlayImpactEffect", &UWillowPhysicalMaterialProperty::StaticPlayImpactEffect)
        .def("PlayImpactEffectSound", &UWillowPhysicalMaterialProperty::PlayImpactEffectSound)
        .def("FindResponseIndex", &UWillowPhysicalMaterialProperty::FindResponseIndex)
        .def("StaticHitInfoImpact", &UWillowPhysicalMaterialProperty::StaticHitInfoImpact)
        .def("StaticRigidBodyImpact", &UWillowPhysicalMaterialProperty::StaticRigidBodyImpact)
        .def("StaticTraceImpact", &UWillowPhysicalMaterialProperty::StaticTraceImpact)
        .def("IsImpactDebugEnabled", &UWillowPhysicalMaterialProperty::IsImpactDebugEnabled)
        .def("ToggleImpactDebug", &UWillowPhysicalMaterialProperty::ToggleImpactDebug)
        .staticmethod("StaticClass")
  ;
}