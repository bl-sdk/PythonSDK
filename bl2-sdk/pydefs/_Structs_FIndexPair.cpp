#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FIndexPair()
{
    py::class_< FIndexPair >("FIndexPair")
        .def_readwrite("Index1", &FIndexPair::Index1)
        .def_readwrite("Index2", &FIndexPair::Index2)
  ;
}