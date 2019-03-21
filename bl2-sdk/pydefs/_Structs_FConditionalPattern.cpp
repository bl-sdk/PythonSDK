#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FConditionalPattern(py::object m)
{
    py::class_< FConditionalPattern >(m, "FConditionalPattern")
        .def_readwrite("Conditions", &FConditionalPattern::Conditions)
        .def_readwrite("Pattern", &FConditionalPattern::Pattern)
  ;
}