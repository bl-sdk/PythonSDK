#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWeightRule()
{
    py::class_< FWeightRule >("FWeightRule")
        .def_readwrite("FirstNode", &FWeightRule::FirstNode)
        .def_readwrite("SecondNode", &FWeightRule::SecondNode)
  ;
}