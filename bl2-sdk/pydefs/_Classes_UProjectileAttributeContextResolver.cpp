#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UProjectileAttributeContextResolver()
{
    py::class_< UProjectileAttributeContextResolver,  UAttributeContextResolver   >("UProjectileAttributeContextResolver")
        .def("StaticClass", &UProjectileAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .def("GetAttributeContext", &UProjectileAttributeContextResolver::GetAttributeContext, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}