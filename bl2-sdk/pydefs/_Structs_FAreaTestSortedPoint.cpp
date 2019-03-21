#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAreaTestSortedPoint()
{
    py::class_< FAreaTestSortedPoint >("FAreaTestSortedPoint")
        .def_readwrite("Nav", &FAreaTestSortedPoint::Nav)
        .def_readwrite("DistSq", &FAreaTestSortedPoint::DistSq)
  ;
}