#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSubarrayData()
{
    py::class_< FSubarrayData >("FSubarrayData")
        .def_readwrite("ArrayIndexAndLength", &FSubarrayData::ArrayIndexAndLength)
  ;
}