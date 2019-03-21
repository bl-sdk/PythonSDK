#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSmartVector()
{
    py::class_< FSmartVector >("FSmartVector")
        .def_readwrite("Vector", &FSmartVector::Vector)
        .def_readwrite("Flag", &FSmartVector::Flag)
  ;
}