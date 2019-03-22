#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCompatibilityVersionInfo(py::module &m)
{
    py::class_< FCompatibilityVersionInfo >(m, "FCompatibilityVersionInfo")
        .def_readwrite("CurrentCompatPackVersion", &FCompatibilityVersionInfo::CurrentCompatPackVersion)
        .def_readwrite("CurrentCompatibilityMask", &FCompatibilityVersionInfo::CurrentCompatibilityMask)
  ;
}