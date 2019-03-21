#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorParameters()
{
    py::class_< FBehaviorParameters >("FBehaviorParameters")
        .def_readwrite("Parameters", &FBehaviorParameters::Parameters)
  ;
}