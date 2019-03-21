#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSMPerchRandomPair()
{
    py::class_< FSMPerchRandomPair >("FSMPerchRandomPair")
        .def_readwrite("Weight", &FSMPerchRandomPair::Weight)
        .def_readwrite("SMD", &FSMPerchRandomPair::SMD)
  ;
}