#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDouble(py::module &m)
{
    py::class_< FDouble >(m, "FDouble")
        .def_readwrite("A", &FDouble::A)
        .def_readwrite("B", &FDouble::B)
  ;
}