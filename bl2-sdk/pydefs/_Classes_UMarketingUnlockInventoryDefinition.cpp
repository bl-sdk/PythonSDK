#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMarketingUnlockInventoryDefinition(py::module &m)
{
    py::class_< UMarketingUnlockInventoryDefinition,  UMarketingUnlockDefinition   >(m, "UMarketingUnlockInventoryDefinition")
        .def_readwrite("UnlockItems", &UMarketingUnlockInventoryDefinition::UnlockItems)
        .def("GenerateUnlockedItems", &UMarketingUnlockInventoryDefinition::GenerateUnlockedItems)
          ;
}