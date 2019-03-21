#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFiringBehaviorBurstInfo()
{
    class_< FFiringBehaviorBurstInfo >("FFiringBehaviorBurstInfo", no_init)
        .def_readwrite("Instigator", &FFiringBehaviorBurstInfo::Instigator)
        .def_readwrite("InstigatorWeapon", &FFiringBehaviorBurstInfo::InstigatorWeapon)
        .def_readwrite("TargetActor", &FFiringBehaviorBurstInfo::TargetActor)
        .def_readwrite("NumShots", &FFiringBehaviorBurstInfo::NumShots)
        .def_readwrite("RefireRate", &FFiringBehaviorBurstInfo::RefireRate)
        .def_readwrite("TargetInfo", &FFiringBehaviorBurstInfo::TargetInfo)
        .def_readwrite("FireType", &FFiringBehaviorBurstInfo::FireType)
  ;
}