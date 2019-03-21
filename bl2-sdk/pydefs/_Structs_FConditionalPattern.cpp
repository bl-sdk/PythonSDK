#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FConditionalPattern()
{
    py::class_< FConditionalPattern >("FConditionalPattern")
        .def_readwrite("Conditions", &FConditionalPattern::Conditions)
        .def_readwrite("Pattern", &FConditionalPattern::Pattern)
  ;
}