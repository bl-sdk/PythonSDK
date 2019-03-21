#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URuleEngineFlagValueResolver(py::object m)
{
    py::class_< URuleEngineFlagValueResolver,  UFlagValueResolver   >(m, "URuleEngineFlagValueResolver")
        .def("StaticClass", &URuleEngineFlagValueResolver::StaticClass, py::return_value_policy::reference)
          ;
}