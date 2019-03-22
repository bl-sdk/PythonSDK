#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSubarrayData(py::module &m)
{
    py::class_< FSubarrayData >(m, "FSubarrayData")
        .def_readwrite("ArrayIndexAndLength", &FSubarrayData::ArrayIndexAndLength)
  ;
}