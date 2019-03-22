#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AStatusEffectProxyActor(py::module &m)
{
    py::class_< AStatusEffectProxyActor,  AActor   >(m, "AStatusEffectProxyActor")
        .def_readwrite("VfTable_IIStatusEffectTarget", &AStatusEffectProxyActor::VfTable_IIStatusEffectTarget)
        .def("ServerClearStatusEffects", &AStatusEffectProxyActor::ServerClearStatusEffects)
        .def("Behavior_ClearStatusEffects", &AStatusEffectProxyActor::Behavior_ClearStatusEffects)
        .def("CanReceiveStatusEffects", &AStatusEffectProxyActor::CanReceiveStatusEffects)
        .def("ReactToPrimaryStatusEffect", &AStatusEffectProxyActor::ReactToPrimaryStatusEffect)
        .def("GetAttributeContextSource", &AStatusEffectProxyActor::GetAttributeContextSource, py::return_value_policy::reference)
        .def("GetDefaultDamageSurfaceType", &AStatusEffectProxyActor::GetDefaultDamageSurfaceType)
        .def("GetBoundingSphereRadius", &AStatusEffectProxyActor::GetBoundingSphereRadius)
        .def("GetHitRegions", [](AStatusEffectProxyActor &self , TArray< class UBodyHitRegionDefinition* >* Regions) { class UBodyHitRegionDefinition** pyDefaultRegion = 0 ;   self.GetHitRegions(Regions, pyDefaultRegion); return py::make_tuple(*pyDefaultRegion); })
        .def("AttachEmitter", &AStatusEffectProxyActor::AttachEmitter)
        .def("GetDefaultStatusEffectsParticleSystemTemplate", &AStatusEffectProxyActor::GetDefaultStatusEffectsParticleSystemTemplate, py::return_value_policy::reference)
        .def("GetDefaultStatusEffectSockets", &AStatusEffectProxyActor::GetDefaultStatusEffectSockets)
        .def("GetStatusEffectsComponent", &AStatusEffectProxyActor::GetStatusEffectsComponent, py::return_value_policy::reference)
        .def("eventDestroyed", &AStatusEffectProxyActor::eventDestroyed)
          ;
}