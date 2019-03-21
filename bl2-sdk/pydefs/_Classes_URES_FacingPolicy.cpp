#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_FacingPolicy()
{
    py::class_< URES_FacingPolicy,  UObject   >("URES_FacingPolicy")
        .def("StaticClass", &URES_FacingPolicy::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}