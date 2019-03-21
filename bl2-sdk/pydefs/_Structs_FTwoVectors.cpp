#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTwoVectors(py::object m)
{
    py::class_< FTwoVectors >(m, "FTwoVectors")
        .def_readwrite("v1", &FTwoVectors::v1)
        .def_readwrite("v2", &FTwoVectors::v2)
  ;
}