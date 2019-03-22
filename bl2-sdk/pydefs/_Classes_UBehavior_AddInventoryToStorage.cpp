#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AddInventoryToStorage(py::module &m)
{
    py::class_< UBehavior_AddInventoryToStorage,  UBehaviorBase   >(m, "UBehavior_AddInventoryToStorage")
        .def_readwrite("ItemDef", &UBehavior_AddInventoryToStorage::ItemDef)
        .def_readwrite("WeaponDef", &UBehavior_AddInventoryToStorage::WeaponDef)
        .def_readwrite("InvType", &UBehavior_AddInventoryToStorage::InvType)
        .def_readwrite("Destination", &UBehavior_AddInventoryToStorage::Destination)
        .def("ApplyBehaviorToContext", &UBehavior_AddInventoryToStorage::ApplyBehaviorToContext)
          ;
}