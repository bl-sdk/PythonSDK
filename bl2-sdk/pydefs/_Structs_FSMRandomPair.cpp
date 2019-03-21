#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSMRandomPair(py::object m)
{
    py::class_< FSMRandomPair >(m, "FSMRandomPair")
        .def_readwrite("Weight", &FSMRandomPair::Weight)
        .def_readwrite("SMD", &FSMRandomPair::SMD)
  ;
}