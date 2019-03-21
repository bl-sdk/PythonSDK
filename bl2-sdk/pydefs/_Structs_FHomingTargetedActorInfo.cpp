#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FHomingTargetedActorInfo(py::object m)
{
    py::class_< FHomingTargetedActorInfo >(m, "FHomingTargetedActorInfo")
        .def_readwrite("HomingActor", &FHomingTargetedActorInfo::HomingActor)
        .def_readwrite("HomingActorCount", &FHomingTargetedActorInfo::HomingActorCount)
  ;
}