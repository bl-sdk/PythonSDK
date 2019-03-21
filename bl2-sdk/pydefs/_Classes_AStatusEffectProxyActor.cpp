#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AStatusEffectProxyActor()
{
    class_< AStatusEffectProxyActor, bases< AActor >  , boost::noncopyable>("AStatusEffectProxyActor", no_init)
        .def_readwrite("VfTable_IIStatusEffectTarget", &AStatusEffectProxyActor::VfTable_IIStatusEffectTarget)
        .def("StaticClass", &AStatusEffectProxyActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("ServerClearStatusEffects", &AStatusEffectProxyActor::ServerClearStatusEffects)
        .def("Behavior_ClearStatusEffects", &AStatusEffectProxyActor::Behavior_ClearStatusEffects)
        .def("CanReceiveStatusEffects", &AStatusEffectProxyActor::CanReceiveStatusEffects)
        .def("ReactToPrimaryStatusEffect", &AStatusEffectProxyActor::ReactToPrimaryStatusEffect)
        .def("GetAttributeContextSource", &AStatusEffectProxyActor::GetAttributeContextSource, return_value_policy< reference_existing_object >())
        .def("GetDefaultDamageSurfaceType", &AStatusEffectProxyActor::GetDefaultDamageSurfaceType)
        .def("GetBoundingSphereRadius", &AStatusEffectProxyActor::GetBoundingSphereRadius)
        .def("GetHitRegions", &AStatusEffectProxyActor::GetHitRegions)
        .def("AttachEmitter", &AStatusEffectProxyActor::AttachEmitter)
        .def("GetDefaultStatusEffectsParticleSystemTemplate", &AStatusEffectProxyActor::GetDefaultStatusEffectsParticleSystemTemplate, return_value_policy< reference_existing_object >())
        .def("GetDefaultStatusEffectSockets", &AStatusEffectProxyActor::GetDefaultStatusEffectSockets)
        .def("GetStatusEffectsComponent", &AStatusEffectProxyActor::GetStatusEffectsComponent, return_value_policy< reference_existing_object >())
        .def("eventDestroyed", &AStatusEffectProxyActor::eventDestroyed)
        .staticmethod("StaticClass")
  ;
}