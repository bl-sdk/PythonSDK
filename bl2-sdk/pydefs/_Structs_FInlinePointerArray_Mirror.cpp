#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInlinePointerArray_Mirror()
{
    py::class_< FInlinePointerArray_Mirror >("FInlinePointerArray_Mirror")
        .def_readwrite("InlineData", &FInlinePointerArray_Mirror::InlineData)
        .def_readwrite("SecondaryData", &FInlinePointerArray_Mirror::SecondaryData)
  ;
}