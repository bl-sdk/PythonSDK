#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDamagePair(py::object m)
{
    py::class_< FDamagePair >(m, "FDamagePair")
        .def_readwrite("DamageCauserName", &FDamagePair::DamageCauserName)
        .def_readwrite("Params", &FDamagePair::Params)
  ;
}