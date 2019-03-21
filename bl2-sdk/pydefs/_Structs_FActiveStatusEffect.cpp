#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FActiveStatusEffect(py::object m)
{
    py::class_< FActiveStatusEffect >(m, "FActiveStatusEffect")
        .def_readwrite("Duration", &FActiveStatusEffect::Duration)
        .def_readwrite("TotalElapsedTime", &FActiveStatusEffect::TotalElapsedTime)
        .def_readwrite("AccumulatedTime", &FActiveStatusEffect::AccumulatedTime)
        .def_readwrite("DamagePerSecond", &FActiveStatusEffect::DamagePerSecond)
        .def_readwrite("EventInstigator", &FActiveStatusEffect::EventInstigator)
        .def_readwrite("DamageCauser", &FActiveStatusEffect::DamageCauser)
        .def_readwrite("DamageSource", &FActiveStatusEffect::DamageSource)
        .def_readwrite("StatusEffectDefinition", &FActiveStatusEffect::StatusEffectDefinition)
        .def_readwrite("HitRegion", &FActiveStatusEffect::HitRegion)
        .def_readwrite("HitInfo", &FActiveStatusEffect::HitInfo)
        .def_readwrite("DamageNumberSocket", &FActiveStatusEffect::DamageNumberSocket)
        .def_readwrite("AccumulatedSpreadTime", &FActiveStatusEffect::AccumulatedSpreadTime)
        .def_readwrite("SpreadTimeInterval", &FActiveStatusEffect::SpreadTimeInterval)
        .def_readwrite("SpreadCount", &FActiveStatusEffect::SpreadCount)
        .def_readwrite("SpreadAttempt", &FActiveStatusEffect::SpreadAttempt)
        .def_readwrite("SpreadRadius", &FActiveStatusEffect::SpreadRadius)
        .def_readwrite("TravelledRegions", &FActiveStatusEffect::TravelledRegions)
        .def_readwrite("TravelledTargets", &FActiveStatusEffect::TravelledTargets)
        .def_readwrite("OwnerComponent", &FActiveStatusEffect::OwnerComponent)
        .def_readwrite("SpreadCap", &FActiveStatusEffect::SpreadCap)
  ;
}