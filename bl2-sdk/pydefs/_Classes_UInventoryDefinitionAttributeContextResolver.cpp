#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInventoryDefinitionAttributeContextResolver(py::module &m)
{
    py::class_< UInventoryDefinitionAttributeContextResolver,  UAttributeContextResolver   >(m, "UInventoryDefinitionAttributeContextResolver")
        .def("GetAttributeContext", &UInventoryDefinitionAttributeContextResolver::GetAttributeContext, py::return_value_policy::reference)
          ;
}