#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FResolution()
{
    py::class_< FResolution >("FResolution")
        .def_readwrite("Width", &FResolution::Width)
        .def_readwrite("Height", &FResolution::Height)
  ;
}