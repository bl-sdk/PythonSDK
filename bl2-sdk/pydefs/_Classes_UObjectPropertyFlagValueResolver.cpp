#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UObjectPropertyFlagValueResolver(py::module &m)
{
    py::class_< UObjectPropertyFlagValueResolver,  UFlagValueResolver   >(m, "UObjectPropertyFlagValueResolver")
		.def_static("StaticClass", &UObjectPropertyFlagValueResolver::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PropertyName", &UObjectPropertyFlagValueResolver::PropertyName)
          ;
}