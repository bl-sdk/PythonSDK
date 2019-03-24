#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFlagValueResolver(py::module &m)
{
    py::class_< UFlagValueResolver,  UObject   >(m, "UFlagValueResolver")
		.def_static("StaticClass", &UFlagValueResolver::StaticClass, py::return_value_policy::reference)
          ;
}