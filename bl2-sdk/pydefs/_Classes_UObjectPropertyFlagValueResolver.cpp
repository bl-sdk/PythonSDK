#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UObjectPropertyFlagValueResolver(py::object m)
{
    py::class_< UObjectPropertyFlagValueResolver,  UFlagValueResolver   >(m, "UObjectPropertyFlagValueResolver")
        .def_readwrite("PropertyName", &UObjectPropertyFlagValueResolver::PropertyName)
        .def("StaticClass", &UObjectPropertyFlagValueResolver::StaticClass, py::return_value_policy::reference)
          ;
}