#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UProjectileAttributeContextResolver(py::object m)
{
    py::class_< UProjectileAttributeContextResolver,  UAttributeContextResolver   >(m, "UProjectileAttributeContextResolver")
        .def("StaticClass", &UProjectileAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .def("GetAttributeContext", &UProjectileAttributeContextResolver::GetAttributeContext, py::return_value_policy::reference)
          ;
}