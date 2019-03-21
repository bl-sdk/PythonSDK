#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTwoVectors()
{
    py::class_< FTwoVectors >("FTwoVectors")
        .def_readwrite("v1", &FTwoVectors::v1)
        .def_readwrite("v2", &FTwoVectors::v2)
  ;
}