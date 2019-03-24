#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UItemPool(py::module &m)
{
    py::class_< UItemPool,  UObject   >(m, "UItemPool")
		.def_static("StaticClass", &UItemPool::StaticClass, py::return_value_policy::reference)
        .def("IsAllItemTypesDebugEnabled", &UItemPool::IsAllItemTypesDebugEnabled)
        .def("ToggleAllItemTypesDebug", &UItemPool::ToggleAllItemTypesDebug)
        .def("SpawnBalancedInventoryFromInventoryBalanceDefinition", &UItemPool::SpawnBalancedInventoryFromInventoryBalanceDefinition)
        .def("SpawnBalancedInventoryFromPool", &UItemPool::SpawnBalancedInventoryFromPool)
          ;
}