#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRarelyChangedPoolState()
{
    class_< FRarelyChangedPoolState >("FRarelyChangedPoolState", no_init)
        .def_readwrite("ConsumptionRate", &FRarelyChangedPoolState::ConsumptionRate)
        .def_readwrite("ActiveRegenerationRate", &FRarelyChangedPoolState::ActiveRegenerationRate)
        .def_readwrite("OnIdleRegenerationRate", &FRarelyChangedPoolState::OnIdleRegenerationRate)
        .def_readwrite("OnIdleRegenerationDelay", &FRarelyChangedPoolState::OnIdleRegenerationDelay)
        .def_readwrite("PassiveRegenerationRate", &FRarelyChangedPoolState::PassiveRegenerationRate)
  ;
}