#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UObjectPropertyContextResolver(py::object m)
{
    py::class_< UObjectPropertyContextResolver,  UAttributeContextResolver   >(m, "UObjectPropertyContextResolver")
        .def_readwrite("PropertyName", &UObjectPropertyContextResolver::PropertyName)
        .def("StaticClass", &UObjectPropertyContextResolver::StaticClass, py::return_value_policy::reference)
          ;
}