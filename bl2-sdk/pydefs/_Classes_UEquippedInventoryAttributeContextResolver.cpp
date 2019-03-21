#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEquippedInventoryAttributeContextResolver()
{
    py::class_< UEquippedInventoryAttributeContextResolver,  UAttributeContextResolver   >("UEquippedInventoryAttributeContextResolver")
        .def_readwrite("EquipmentLocation", &UEquippedInventoryAttributeContextResolver::EquipmentLocation)
        .def("StaticClass", &UEquippedInventoryAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}