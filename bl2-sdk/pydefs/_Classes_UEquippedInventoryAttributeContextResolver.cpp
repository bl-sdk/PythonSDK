#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEquippedInventoryAttributeContextResolver(py::module &m)
{
    py::class_< UEquippedInventoryAttributeContextResolver,  UAttributeContextResolver   >(m, "UEquippedInventoryAttributeContextResolver")
		.def_static("StaticClass", &UEquippedInventoryAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .def_readwrite("EquipmentLocation", &UEquippedInventoryAttributeContextResolver::EquipmentLocation)
          ;
}