#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDamagePair()
{
    py::class_< FDamagePair >("FDamagePair")
        .def_readwrite("DamageCauserName", &FDamagePair::DamageCauserName)
        .def_readwrite("Params", &FDamagePair::Params)
  ;
}