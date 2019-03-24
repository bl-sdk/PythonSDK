#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInventoryAttributeDefinition(py::module &m)
{
    py::class_< UInventoryAttributeDefinition,  UAttributeDefinition   >(m, "UInventoryAttributeDefinition")
		.def_static("StaticClass", &UInventoryAttributeDefinition::StaticClass, py::return_value_policy::reference)
          ;
}