#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBitArray_Mirror(py::object m)
{
    py::class_< FBitArray_Mirror >(m, "FBitArray_Mirror")
        .def_readwrite("IndirectData", &FBitArray_Mirror::IndirectData)
        .def_readonly("InlineData", &FBitArray_Mirror::InlineData)
        .def_readwrite("NumBits", &FBitArray_Mirror::NumBits)
        .def_readwrite("MaxBits", &FBitArray_Mirror::MaxBits)
  ;
}