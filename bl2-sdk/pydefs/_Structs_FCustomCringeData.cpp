#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCustomCringeData(py::object m)
{
    py::class_< FCustomCringeData >(m, "FCustomCringeData")
        .def_readwrite("DamageType", &FCustomCringeData::DamageType)
        .def_readwrite("Cringes", &FCustomCringeData::Cringes)
  ;
}