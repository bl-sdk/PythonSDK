#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UItemPool(py::module &m)
{
    py::class_< UItemPool,  UObject   >(m, "UItemPool")
        .def("IsAllItemTypesDebugEnabled", &UItemPool::IsAllItemTypesDebugEnabled)
        .def("ToggleAllItemTypesDebug", &UItemPool::ToggleAllItemTypesDebug)
        .def("SpawnBalancedInventoryFromInventoryBalanceDefinition", &UItemPool::SpawnBalancedInventoryFromInventoryBalanceDefinition)
        .def("SpawnBalancedInventoryFromPool", &UItemPool::SpawnBalancedInventoryFromPool)
          ;
}