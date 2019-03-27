#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FArray_Mirror(py::module &m)
{
    py::class_< FArray_Mirror >(m, "FArray_Mirror")
        .def_readwrite("Data", &FArray_Mirror::Data)
        .def_readwrite("ArrayNum", &FArray_Mirror::ArrayNum)
        .def_readwrite("ArrayMax", &FArray_Mirror::ArrayMax)
  ;
}