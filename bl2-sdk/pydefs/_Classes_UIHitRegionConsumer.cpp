#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIHitRegionConsumer(py::object m)
{
    py::class_< UIHitRegionConsumer,  UInterface   >(m, "UIHitRegionConsumer")
        .def("StaticClass", &UIHitRegionConsumer::StaticClass, py::return_value_policy::reference)
        .def("PlayHit", &UIHitRegionConsumer::PlayHit)
        .def("ResetHitRegionHealth", &UIHitRegionConsumer::ResetHitRegionHealth)
        .def("HealDamageOnHitRegion", &UIHitRegionConsumer::HealDamageOnHitRegion)
        .def("PlayHealingReaction", &UIHitRegionConsumer::PlayHealingReaction)
        .def("PlayDamageReaction", &UIHitRegionConsumer::PlayDamageReaction)
        .def("ReplicateDamageEffect", &UIHitRegionConsumer::ReplicateDamageEffect)
        .def("AddDamageToHitRegion", &UIHitRegionConsumer::AddDamageToHitRegion)
        .def("GetHitRegionHealthValues", &UIHitRegionConsumer::GetHitRegionHealthValues)
        .def("GetHitRegionForTakenDamage", &UIHitRegionConsumer::GetHitRegionForTakenDamage, py::return_value_policy::reference)
          ;
}