#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFiringPattern()
{
    py::class_< UFiringPattern,  UObject   >("UFiringPattern")
        .def("StaticClass", &UFiringPattern::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}