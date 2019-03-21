#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBalanceDefSpawnedActorState()
{
    class_< FBalanceDefSpawnedActorState >("FBalanceDefSpawnedActorState", no_init)
        .def_readwrite("BalanceDefinition", &FBalanceDefSpawnedActorState::BalanceDefinition)
        .def_readwrite("GradeIndex", &FBalanceDefSpawnedActorState::GradeIndex)
  ;
}