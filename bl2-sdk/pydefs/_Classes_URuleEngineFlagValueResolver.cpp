#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URuleEngineFlagValueResolver()
{
    py::class_< URuleEngineFlagValueResolver,  UFlagValueResolver   >("URuleEngineFlagValueResolver")
        .def("StaticClass", &URuleEngineFlagValueResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}