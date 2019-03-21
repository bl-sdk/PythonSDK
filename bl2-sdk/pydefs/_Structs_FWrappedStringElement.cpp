#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWrappedStringElement()
{
    py::class_< FWrappedStringElement >("FWrappedStringElement")
        .def_readwrite("Value", &FWrappedStringElement::Value)
        .def_readwrite("LineExtent", &FWrappedStringElement::LineExtent)
  ;
}