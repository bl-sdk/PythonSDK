#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowInventoryStorage()
{
    class_< UWillowInventoryStorage, bases< UObject >  , boost::noncopyable>("UWillowInventoryStorage", no_init)
        .def_readwrite("MaxSlots", &UWillowInventoryStorage::MaxSlots)
        .def_readwrite("ChestSlots", &UWillowInventoryStorage::ChestSlots)
        .def_readwrite("TheChest", &UWillowInventoryStorage::TheChest)
        .def_readwrite("UnloadableInventory", &UWillowInventoryStorage::UnloadableInventory)
        .def("StaticClass", &UWillowInventoryStorage::StaticClass, return_value_policy< reference_existing_object >())
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
        .staticmethod("StaticClass")
  ;
}