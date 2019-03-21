#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FActiveDecalInfo()
{
    py::class_< FActiveDecalInfo >("FActiveDecalInfo")
        .def_readwrite("Decal", &FActiveDecalInfo::Decal)
        .def_readwrite("LifetimeRemaining", &FActiveDecalInfo::LifetimeRemaining)
  ;
}