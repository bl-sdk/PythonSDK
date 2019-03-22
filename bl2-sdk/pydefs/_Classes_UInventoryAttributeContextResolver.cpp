#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInventoryAttributeContextResolver(py::module &m)
{
    py::class_< UInventoryAttributeContextResolver,  UAttributeContextResolver   >(m, "UInventoryAttributeContextResolver")
        .def_readwrite("InventoryDefinition", &UInventoryAttributeContextResolver::InventoryDefinition)
        .def("StaticClass", &UInventoryAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .def("GetAttributeContext", &UInventoryAttributeContextResolver::GetAttributeContext, py::return_value_policy::reference)
          ;
}