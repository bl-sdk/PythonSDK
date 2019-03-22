#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOwnerAttributeContextResolver(py::module &m)
{
    py::class_< UOwnerAttributeContextResolver,  UAttributeContextResolver   >(m, "UOwnerAttributeContextResolver")
        .def("GetAttributeContext", &UOwnerAttributeContextResolver::GetAttributeContext, py::return_value_policy::reference)
          ;
}