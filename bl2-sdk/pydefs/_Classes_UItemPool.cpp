#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UItemPool()
{
    class_< UItemPool, bases< UObject >  , boost::noncopyable>("UItemPool", no_init)
        .def("StaticClass", &UItemPool::StaticClass, return_value_policy< reference_existing_object >())
        .def("IsAllItemTypesDebugEnabled", &UItemPool::IsAllItemTypesDebugEnabled)
        .def("ToggleAllItemTypesDebug", &UItemPool::ToggleAllItemTypesDebug)
        .def("SpawnBalancedInventoryFromInventoryBalanceDefinition", &UItemPool::SpawnBalancedInventoryFromInventoryBalanceDefinition)
        .def("SpawnBalancedInventoryFromPool", &UItemPool::SpawnBalancedInventoryFromPool)
        .staticmethod("StaticClass")
  ;
}