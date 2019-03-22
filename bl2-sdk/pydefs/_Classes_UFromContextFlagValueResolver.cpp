#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFromContextFlagValueResolver(py::module &m)
{
    py::class_< UFromContextFlagValueResolver,  UFlagValueResolver   >(m, "UFromContextFlagValueResolver")
        .def_readwrite("MyFlagDef", &UFromContextFlagValueResolver::MyFlagDef)
        .def("StaticClass", &UFromContextFlagValueResolver::StaticClass, py::return_value_policy::reference)
          ;
}