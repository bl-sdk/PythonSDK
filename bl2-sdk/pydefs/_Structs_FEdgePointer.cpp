#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FEdgePointer()
{
    py::class_< FEdgePointer >("FEdgePointer")
        .def_readwrite("Dummy", &FEdgePointer::Dummy)
  ;
}