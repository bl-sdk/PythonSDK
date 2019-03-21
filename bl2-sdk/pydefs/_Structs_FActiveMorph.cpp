#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FActiveMorph()
{
    py::class_< FActiveMorph >("FActiveMorph")
        .def_readwrite("Target", &FActiveMorph::Target)
        .def_readwrite("Weight", &FActiveMorph::Weight)
  ;
}