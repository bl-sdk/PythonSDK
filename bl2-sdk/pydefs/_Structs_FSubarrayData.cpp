#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSubarrayData(py::object m)
{
    py::class_< FSubarrayData >(m, "FSubarrayData")
        .def_readwrite("ArrayIndexAndLength", &FSubarrayData::ArrayIndexAndLength)
  ;
}