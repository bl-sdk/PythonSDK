#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AddInventoryToStorage()
{
    py::class_< UBehavior_AddInventoryToStorage,  UBehaviorBase   >("UBehavior_AddInventoryToStorage")
        .def_readwrite("ItemDef", &UBehavior_AddInventoryToStorage::ItemDef)
        .def_readwrite("WeaponDef", &UBehavior_AddInventoryToStorage::WeaponDef)
        .def_readwrite("InvType", &UBehavior_AddInventoryToStorage::InvType)
        .def_readwrite("Destination", &UBehavior_AddInventoryToStorage::Destination)
        .def("StaticClass", &UBehavior_AddInventoryToStorage::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_AddInventoryToStorage::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}