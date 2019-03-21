#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UResourcePoolAttributeContextResolver(py::object m)
{
    py::class_< UResourcePoolAttributeContextResolver,  UAttributeContextResolver   >(m, "UResourcePoolAttributeContextResolver")
        .def_readwrite("Resource", &UResourcePoolAttributeContextResolver::Resource)
        .def("StaticClass", &UResourcePoolAttributeContextResolver::StaticClass, py::return_value_policy::reference)
          ;
}