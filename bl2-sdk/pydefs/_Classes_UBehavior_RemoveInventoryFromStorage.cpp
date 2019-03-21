#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_RemoveInventoryFromStorage()
{
    py::class_< UBehavior_RemoveInventoryFromStorage,  UBehaviorBase   >("UBehavior_RemoveInventoryFromStorage")
        .def_readwrite("ItemDef", &UBehavior_RemoveInventoryFromStorage::ItemDef)
        .def_readwrite("WeaponDef", &UBehavior_RemoveInventoryFromStorage::WeaponDef)
        .def_readwrite("InvType", &UBehavior_RemoveInventoryFromStorage::InvType)
        .def_readwrite("Source", &UBehavior_RemoveInventoryFromStorage::Source)
        .def("StaticClass", &UBehavior_RemoveInventoryFromStorage::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_RemoveInventoryFromStorage::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}