#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UObjectPropertyFlagValueResolver(py::module &m)
{
    py::class_< UObjectPropertyFlagValueResolver,  UFlagValueResolver   >(m, "UObjectPropertyFlagValueResolver")
        .def_readwrite("PropertyName", &UObjectPropertyFlagValueResolver::PropertyName)
          ;
}