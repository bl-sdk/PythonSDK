#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInjuredLoopOverride(py::module &m)
{
    py::class_< FInjuredLoopOverride >(m, "FInjuredLoopOverride")
        .def_readwrite("NameTag", &FInjuredLoopOverride::NameTag)
        .def_readwrite("StartAkEvent", &FInjuredLoopOverride::StartAkEvent)
  ;
}