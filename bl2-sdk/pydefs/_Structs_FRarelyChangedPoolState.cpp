#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRarelyChangedPoolState(py::module &m)
{
    py::class_< FRarelyChangedPoolState >(m, "FRarelyChangedPoolState")
        .def_readwrite("ConsumptionRate", &FRarelyChangedPoolState::ConsumptionRate)
        .def_readwrite("ActiveRegenerationRate", &FRarelyChangedPoolState::ActiveRegenerationRate)
        .def_readwrite("OnIdleRegenerationRate", &FRarelyChangedPoolState::OnIdleRegenerationRate)
        .def_readwrite("OnIdleRegenerationDelay", &FRarelyChangedPoolState::OnIdleRegenerationDelay)
        .def_readwrite("PassiveRegenerationRate", &FRarelyChangedPoolState::PassiveRegenerationRate)
  ;
}