#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_RemoveInventoryFromStorage(py::module &m)
{
    py::class_< UBehavior_RemoveInventoryFromStorage,  UBehaviorBase   >(m, "UBehavior_RemoveInventoryFromStorage")
		.def_static("StaticClass", &UBehavior_RemoveInventoryFromStorage::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ItemDef", &UBehavior_RemoveInventoryFromStorage::ItemDef)
        .def_readwrite("WeaponDef", &UBehavior_RemoveInventoryFromStorage::WeaponDef)
        .def_readwrite("InvType", &UBehavior_RemoveInventoryFromStorage::InvType)
        .def_readwrite("Source", &UBehavior_RemoveInventoryFromStorage::Source)
        .def("ApplyBehaviorToContext", &UBehavior_RemoveInventoryFromStorage::ApplyBehaviorToContext)
          ;
}