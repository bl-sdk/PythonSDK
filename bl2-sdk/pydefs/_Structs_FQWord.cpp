#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FQWord()
{
    py::class_< FQWord >("FQWord")
        .def_readwrite("A", &FQWord::A)
        .def_readwrite("B", &FQWord::B)
  ;
}