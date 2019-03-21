#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UObjectPropertyFlagValueResolver()
{
    py::class_< UObjectPropertyFlagValueResolver,  UFlagValueResolver   >("UObjectPropertyFlagValueResolver")
        .def_readwrite("PropertyName", &UObjectPropertyFlagValueResolver::PropertyName)
        .def("StaticClass", &UObjectPropertyFlagValueResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}