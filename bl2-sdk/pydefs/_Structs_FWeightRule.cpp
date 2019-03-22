#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWeightRule(py::module &m)
{
    py::class_< FWeightRule >(m, "FWeightRule")
        .def_readwrite("FirstNode", &FWeightRule::FirstNode)
        .def_readwrite("SecondNode", &FWeightRule::SecondNode)
  ;
}