#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMarketingUnlockInventoryDefinition()
{
    py::class_< UMarketingUnlockInventoryDefinition,  UMarketingUnlockDefinition   >("UMarketingUnlockInventoryDefinition")
        .def_readwrite("UnlockItems", &UMarketingUnlockInventoryDefinition::UnlockItems)
        .def("StaticClass", &UMarketingUnlockInventoryDefinition::StaticClass, py::return_value_policy::reference)
        .def("GenerateUnlockedItems", &UMarketingUnlockInventoryDefinition::GenerateUnlockedItems)
        .staticmethod("StaticClass")
  ;
}