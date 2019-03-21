#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAIResourceAttributeValueResolver()
{
    py::class_< UAIResourceAttributeValueResolver,  UAttributeValueResolver   >("UAIResourceAttributeValueResolver")
        .def_readwrite("Resource", &UAIResourceAttributeValueResolver::Resource)
        .def("StaticClass", &UAIResourceAttributeValueResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}