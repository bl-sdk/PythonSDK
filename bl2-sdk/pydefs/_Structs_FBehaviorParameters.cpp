#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorParameters(py::object m)
{
    py::class_< FBehaviorParameters >(m, "FBehaviorParameters")
        .def_readwrite("Parameters", &FBehaviorParameters::Parameters)
  ;
}