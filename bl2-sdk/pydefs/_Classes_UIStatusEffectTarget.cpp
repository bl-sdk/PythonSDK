#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIStatusEffectTarget(py::module &m)
{
    py::class_< UIStatusEffectTarget, UIHitRegionInfoProvider   >(m, "UIStatusEffectTarget")
        .def("StaticClass", &UIStatusEffectTarget::StaticClass, py::return_value_policy::reference)
        .def("CanReceiveStatusEffects", &UIStatusEffectTarget::CanReceiveStatusEffects)
        .def("ReactToPrimaryStatusEffect", &UIStatusEffectTarget::ReactToPrimaryStatusEffect)
        .def("Behavior_ClearStatusEffects", &UIStatusEffectTarget::Behavior_ClearStatusEffects)
        .def("GetAttributeContextSource", &UIStatusEffectTarget::GetAttributeContextSource, py::return_value_policy::reference)
        .def("GetDefaultDamageSurfaceType", &UIStatusEffectTarget::GetDefaultDamageSurfaceType)
        .def("GetBoundingSphereRadius", &UIStatusEffectTarget::GetBoundingSphereRadius)
        .def("AttachEmitter", &UIStatusEffectTarget::AttachEmitter)
        .def("GetDefaultStatusEffectsParticleSystemTemplate", &UIStatusEffectTarget::GetDefaultStatusEffectsParticleSystemTemplate, py::return_value_policy::reference)
        .def("GetDefaultStatusEffectSockets", &UIStatusEffectTarget::GetDefaultStatusEffectSockets)
        .def("GetStatusEffectsComponent", &UIStatusEffectTarget::GetStatusEffectsComponent, py::return_value_policy::reference)
          ;
}