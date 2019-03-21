#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData()
{
    py::class_< UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData >("UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData")
        .def_readwrite("Action", &UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData::Action)
        .def_readwrite("SequenceName", &UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData::SequenceName)
  ;
}