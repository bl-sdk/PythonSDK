#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCustomCringeData()
{
    py::class_< FCustomCringeData >("FCustomCringeData")
        .def_readwrite("DamageType", &FCustomCringeData::DamageType)
        .def_readwrite("Cringes", &FCustomCringeData::Cringes)
  ;
}