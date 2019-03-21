#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAnimSwapData(py::object m)
{
    py::class_< FAnimSwapData >(m, "FAnimSwapData")
        .def_readwrite("Index1", &FAnimSwapData::Index1)
        .def_readwrite("Index2", &FAnimSwapData::Index2)
  ;
}