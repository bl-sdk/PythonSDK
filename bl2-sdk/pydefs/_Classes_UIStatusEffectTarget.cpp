#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIStatusEffectTarget()
{
    class_< UIStatusEffectTarget, bases< UInterface >  , boost::noncopyable>("UIStatusEffectTarget", no_init)
        .def("StaticClass", &UIStatusEffectTarget::StaticClass, return_value_policy< reference_existing_object >())
        .def("CanReceiveStatusEffects", &UIStatusEffectTarget::CanReceiveStatusEffects)
        .def("ReactToPrimaryStatusEffect", &UIStatusEffectTarget::ReactToPrimaryStatusEffect)
        .def("Behavior_ClearStatusEffects", &UIStatusEffectTarget::Behavior_ClearStatusEffects)
        .def("GetAttributeContextSource", &UIStatusEffectTarget::GetAttributeContextSource, return_value_policy< reference_existing_object >())
        .def("GetDefaultDamageSurfaceType", &UIStatusEffectTarget::GetDefaultDamageSurfaceType)
        .def("GetBoundingSphereRadius", &UIStatusEffectTarget::GetBoundingSphereRadius)
        .def("AttachEmitter", &UIStatusEffectTarget::AttachEmitter)
        .def("GetDefaultStatusEffectsParticleSystemTemplate", &UIStatusEffectTarget::GetDefaultStatusEffectsParticleSystemTemplate, return_value_policy< reference_existing_object >())
        .def("GetDefaultStatusEffectSockets", &UIStatusEffectTarget::GetDefaultStatusEffectSockets)
        .def("GetStatusEffectsComponent", &UIStatusEffectTarget::GetStatusEffectsComponent, return_value_policy< reference_existing_object >())
        .def("GetHitRegions", &UIHitRegionInfoProvider::GetHitRegions)
        .staticmethod("StaticClass")
  ;
}