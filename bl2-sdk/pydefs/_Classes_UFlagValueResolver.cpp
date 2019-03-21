#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFlagValueResolver()
{
    py::class_< UFlagValueResolver,  UObject   >("UFlagValueResolver")
        .def("StaticClass", &UFlagValueResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}