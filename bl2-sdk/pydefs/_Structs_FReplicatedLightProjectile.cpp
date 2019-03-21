#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FReplicatedLightProjectile()
{
    py::class_< FReplicatedLightProjectile >("FReplicatedLightProjectile")
        .def_readwrite("Id", &FReplicatedLightProjectile::Id)
        .def_readwrite("StartTrace", &FReplicatedLightProjectile::StartTrace)
        .def_readwrite("EndTrace", &FReplicatedLightProjectile::EndTrace)
        .def_readwrite("ReflectSpeed", &FReplicatedLightProjectile::ReflectSpeed)
        .def_readwrite("FireDef", &FReplicatedLightProjectile::FireDef)
        .def_readwrite("FiringPatternIdx", &FReplicatedLightProjectile::FiringPatternIdx)
        .def_readwrite("Instigator", &FReplicatedLightProjectile::Instigator)
        .def_readwrite("StartTime", &FReplicatedLightProjectile::StartTime)
  ;
}