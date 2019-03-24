#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMarketingUnlockInventoryDefinition(py::module &m)
{
    py::class_< UMarketingUnlockInventoryDefinition,  UMarketingUnlockDefinition   >(m, "UMarketingUnlockInventoryDefinition")
		.def_static("StaticClass", &UMarketingUnlockInventoryDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("UnlockItems", &UMarketingUnlockInventoryDefinition::UnlockItems)
        .def("GenerateUnlockedItems", &UMarketingUnlockInventoryDefinition::GenerateUnlockedItems)
          ;
}