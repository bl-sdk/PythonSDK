#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTransformedFlagValueResolver(py::object m)
{
    py::class_< UTransformedFlagValueResolver,  UFlagValueResolver   >(m, "UTransformedFlagValueResolver")
        .def_readwrite("Transform", &UTransformedFlagValueResolver::Transform)
        .def("StaticClass", &UTransformedFlagValueResolver::StaticClass, py::return_value_policy::reference)
          ;
}