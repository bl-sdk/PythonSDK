#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AddInventoryToStorage()
{
    class_< UBehavior_AddInventoryToStorage, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AddInventoryToStorage", no_init)
        .def_readwrite("ItemDef", &UBehavior_AddInventoryToStorage::ItemDef)
        .def_readwrite("WeaponDef", &UBehavior_AddInventoryToStorage::WeaponDef)
        .def_readwrite("InvType", &UBehavior_AddInventoryToStorage::InvType)
        .def_readwrite("Destination", &UBehavior_AddInventoryToStorage::Destination)
        .def("StaticClass", &UBehavior_AddInventoryToStorage::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_AddInventoryToStorage::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}