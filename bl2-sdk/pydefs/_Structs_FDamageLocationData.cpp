#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDamageLocationData()
{
    py::class_< FDamageLocationData >("FDamageLocationData")
        .def_readwrite("Time", &FDamageLocationData::Time)
        .def_readwrite("Location", &FDamageLocationData::Location)
  ;
}