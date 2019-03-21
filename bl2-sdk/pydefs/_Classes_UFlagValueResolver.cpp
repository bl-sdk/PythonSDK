#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFlagValueResolver(py::object m)
{
    py::class_< UFlagValueResolver,  UObject   >(m, "UFlagValueResolver")
        .def("StaticClass", &UFlagValueResolver::StaticClass, py::return_value_policy::reference)
          ;
}