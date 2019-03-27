#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDamageLocationData(py::module &m)
{
    py::class_< FDamageLocationData >(m, "FDamageLocationData")
        .def_readwrite("Time", &FDamageLocationData::Time)
        .def_readwrite("Location", &FDamageLocationData::Location)
  ;
}