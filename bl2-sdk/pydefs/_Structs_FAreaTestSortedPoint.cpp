#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAreaTestSortedPoint(py::object m)
{
    py::class_< FAreaTestSortedPoint >(m, "FAreaTestSortedPoint")
        .def_readwrite("Nav", &FAreaTestSortedPoint::Nav)
        .def_readwrite("DistSq", &FAreaTestSortedPoint::DistSq)
  ;
}