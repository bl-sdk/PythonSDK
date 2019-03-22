#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UProjectileAttributeContextResolver(py::module &m)
{
    py::class_< UProjectileAttributeContextResolver,  UAttributeContextResolver   >(m, "UProjectileAttributeContextResolver")
        .def("GetAttributeContext", &UProjectileAttributeContextResolver::GetAttributeContext, py::return_value_policy::reference)
          ;
}