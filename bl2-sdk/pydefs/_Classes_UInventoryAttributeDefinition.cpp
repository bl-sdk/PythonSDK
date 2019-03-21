#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInventoryAttributeDefinition()
{
    py::class_< UInventoryAttributeDefinition,  UAttributeDefinition   >("UInventoryAttributeDefinition")
        .def("StaticClass", &UInventoryAttributeDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}