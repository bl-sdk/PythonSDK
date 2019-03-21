#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBalanceDefSpawnedActorState()
{
    py::class_< FBalanceDefSpawnedActorState >("FBalanceDefSpawnedActorState")
        .def_readwrite("BalanceDefinition", &FBalanceDefSpawnedActorState::BalanceDefinition)
        .def_readwrite("GradeIndex", &FBalanceDefSpawnedActorState::GradeIndex)
  ;
}