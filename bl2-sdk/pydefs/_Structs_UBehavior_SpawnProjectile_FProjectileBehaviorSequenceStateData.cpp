#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData(py::object m)
{
    py::class_< UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData >(m, "UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData")
        .def_readwrite("Action", &UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData::Action)
        .def_readwrite("SequenceName", &UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData::SequenceName)
  ;
}