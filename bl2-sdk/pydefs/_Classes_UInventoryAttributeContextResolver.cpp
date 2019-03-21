#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInventoryAttributeContextResolver()
{
    py::class_< UInventoryAttributeContextResolver,  UAttributeContextResolver   >("UInventoryAttributeContextResolver")
        .def_readwrite("InventoryDefinition", &UInventoryAttributeContextResolver::InventoryDefinition)
        .def("StaticClass", &UInventoryAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .def("GetAttributeContext", &UInventoryAttributeContextResolver::GetAttributeContext, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}