#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCompatibilityVersionInfo()
{
    py::class_< FCompatibilityVersionInfo >("FCompatibilityVersionInfo")
        .def_readwrite("CurrentCompatPackVersion", &FCompatibilityVersionInfo::CurrentCompatPackVersion)
        .def_readwrite("CurrentCompatibilityMask", &FCompatibilityVersionInfo::CurrentCompatibilityMask)
  ;
}