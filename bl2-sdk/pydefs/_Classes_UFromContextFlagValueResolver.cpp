#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFromContextFlagValueResolver()
{
    py::class_< UFromContextFlagValueResolver,  UFlagValueResolver   >("UFromContextFlagValueResolver")
        .def_readwrite("MyFlagDef", &UFromContextFlagValueResolver::MyFlagDef)
        .def("StaticClass", &UFromContextFlagValueResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}