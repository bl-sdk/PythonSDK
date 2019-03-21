#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UResourcePoolAttributeContextResolver()
{
    py::class_< UResourcePoolAttributeContextResolver,  UAttributeContextResolver   >("UResourcePoolAttributeContextResolver")
        .def_readwrite("Resource", &UResourcePoolAttributeContextResolver::Resource)
        .def("StaticClass", &UResourcePoolAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}