#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FEdgePointer(py::object m)
{
    py::class_< FEdgePointer >(m, "FEdgePointer")
        .def_readwrite("Dummy", &FEdgePointer::Dummy)
  ;
}