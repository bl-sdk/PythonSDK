#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSmartVector(py::module &m)
{
    py::class_< FSmartVector >(m, "FSmartVector")
        .def_readwrite("Vector", &FSmartVector::Vector)
        .def_readwrite("Flag", &FSmartVector::Flag)
  ;
}