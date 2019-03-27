#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBalanceDefSpawnedActorState(py::module &m)
{
    py::class_< FBalanceDefSpawnedActorState >(m, "FBalanceDefSpawnedActorState")
        .def_readwrite("BalanceDefinition", &FBalanceDefSpawnedActorState::BalanceDefinition)
        .def_readwrite("GradeIndex", &FBalanceDefSpawnedActorState::GradeIndex)
  ;
}