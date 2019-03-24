#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFromContextFlagValueResolver(py::module &m)
{
    py::class_< UFromContextFlagValueResolver,  UFlagValueResolver   >(m, "UFromContextFlagValueResolver")
		.def_static("StaticClass", &UFromContextFlagValueResolver::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MyFlagDef", &UFromContextFlagValueResolver::MyFlagDef)
          ;
}