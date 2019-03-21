#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FQWord(py::object m)
{
    py::class_< FQWord >(m, "FQWord")
        .def_readwrite("A", &FQWord::A)
        .def_readwrite("B", &FQWord::B)
  ;
}