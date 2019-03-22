#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBox(py::module &m)
{
    py::class_< FBox >(m, "FBox")
        .def_readwrite("Min", &FBox::Min)
        .def_readwrite("Max", &FBox::Max)
        .def_readwrite("IsValid", &FBox::IsValid)
  ;
}