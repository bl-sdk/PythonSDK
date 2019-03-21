#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInjuredLoopOverride()
{
    py::class_< FInjuredLoopOverride >("FInjuredLoopOverride")
        .def_readwrite("NameTag", &FInjuredLoopOverride::NameTag)
        .def_readwrite("StartAkEvent", &FInjuredLoopOverride::StartAkEvent)
  ;
}