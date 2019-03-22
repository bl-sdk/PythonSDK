#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowInventoryStorage(py::module &m)
{
    py::class_< UWillowInventoryStorage,  UObject   >(m, "UWillowInventoryStorage")
        .def_readwrite("MaxSlots", &UWillowInventoryStorage::MaxSlots)
        .def_readwrite("ChestSlots", &UWillowInventoryStorage::ChestSlots)
        .def_readwrite("TheChest", &UWillowInventoryStorage::TheChest)
        .def_readwrite("UnloadableInventory", &UWillowInventoryStorage::UnloadableInventory)
        .def("SetMaxSlots", &UWillowInventoryStorage::SetMaxSlots)
        .def("PrintLog", &UWillowInventoryStorage::PrintLog)
        .def("IsOpen", &UWillowInventoryStorage::IsOpen)
        .def("GetList", &UWillowInventoryStorage::GetList)
        .def("PutItem", &UWillowInventoryStorage::PutItem)
        .def("PutWeapon", &UWillowInventoryStorage::PutWeapon)
        .def("GetInternal", &UWillowInventoryStorage::GetInternal)
        .def("Get", &UWillowInventoryStorage::Get)
        .def("PutInternal", &UWillowInventoryStorage::PutInternal)
        .def("Put", &UWillowInventoryStorage::Put)
        .def("RemoveWeaponsByDef", &UWillowInventoryStorage::RemoveWeaponsByDef)
        .def("RemoveItemsByDef", &UWillowInventoryStorage::RemoveItemsByDef)
        .def("AddWeaponFromDef", &UWillowInventoryStorage::AddWeaponFromDef)
        .def("AddItemFromDef", &UWillowInventoryStorage::AddItemFromDef)
        .def("Swap", &UWillowInventoryStorage::Swap)
        .def("Close", &UWillowInventoryStorage::Close)
        .def("Open", &UWillowInventoryStorage::Open)
        .def("Reset", &UWillowInventoryStorage::Reset)
        .def("SetSlotCount", &UWillowInventoryStorage::SetSlotCount)
        .def("AddSlots", &UWillowInventoryStorage::AddSlots)
        .def("GetSizeIncludingUnloadable", &UWillowInventoryStorage::GetSizeIncludingUnloadable)
        .def("GetUnloadableCount", &UWillowInventoryStorage::GetUnloadableCount)
        .def("GetMaxSize", &UWillowInventoryStorage::GetMaxSize)
        .def("GetSize", &UWillowInventoryStorage::GetSize)
          ;
}