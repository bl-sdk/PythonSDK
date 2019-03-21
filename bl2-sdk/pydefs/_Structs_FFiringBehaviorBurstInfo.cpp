#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFiringBehaviorBurstInfo(py::object m)
{
    py::class_< FFiringBehaviorBurstInfo >(m, "FFiringBehaviorBurstInfo")
        .def_readwrite("Instigator", &FFiringBehaviorBurstInfo::Instigator)
        .def_readwrite("InstigatorWeapon", &FFiringBehaviorBurstInfo::InstigatorWeapon)
        .def_readwrite("TargetActor", &FFiringBehaviorBurstInfo::TargetActor)
        .def_readwrite("NumShots", &FFiringBehaviorBurstInfo::NumShots)
        .def_readwrite("RefireRate", &FFiringBehaviorBurstInfo::RefireRate)
        .def_readwrite("TargetInfo", &FFiringBehaviorBurstInfo::TargetInfo)
        .def_readwrite("FireType", &FFiringBehaviorBurstInfo::FireType)
  ;
}