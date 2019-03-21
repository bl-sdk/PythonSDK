#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBalanceFormula()
{
    py::class_< FBalanceFormula >("FBalanceFormula")
        .def_readwrite("Multiplier", &FBalanceFormula::Multiplier)
        .def_readwrite("Level", &FBalanceFormula::Level)
        .def_readwrite("Power", &FBalanceFormula::Power)
        .def_readwrite("Offset", &FBalanceFormula::Offset)
  ;
}