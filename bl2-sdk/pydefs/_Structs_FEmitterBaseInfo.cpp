#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FEmitterBaseInfo(py::module &m)
{
    py::class_< FEmitterBaseInfo >(m, "FEmitterBaseInfo")
        .def_readwrite("PSC", &FEmitterBaseInfo::PSC)
        .def_readwrite("Base", &FEmitterBaseInfo::Base)
        .def_readwrite("RelativeLocation", &FEmitterBaseInfo::RelativeLocation)
        .def_readwrite("RelativeRotation", &FEmitterBaseInfo::RelativeRotation)
  ;
}