#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FIndirectArray_Mirror(py::module &m)
{
    py::class_< FIndirectArray_Mirror >(m, "FIndirectArray_Mirror")
        .def_readwrite("Data", &FIndirectArray_Mirror::Data)
        .def_readwrite("ArrayNum", &FIndirectArray_Mirror::ArrayNum)
        .def_readwrite("ArrayMax", &FIndirectArray_Mirror::ArrayMax)
  ;
}