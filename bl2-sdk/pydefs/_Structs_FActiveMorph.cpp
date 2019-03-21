#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FActiveMorph(py::object m)
{
    py::class_< FActiveMorph >(m, "FActiveMorph")
        .def_readwrite("Target", &FActiveMorph::Target)
        .def_readwrite("Weight", &FActiveMorph::Weight)
  ;
}