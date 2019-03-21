#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSMRandomPair()
{
    py::class_< FSMRandomPair >("FSMRandomPair")
        .def_readwrite("Weight", &FSMRandomPair::Weight)
        .def_readwrite("SMD", &FSMRandomPair::SMD)
  ;
}