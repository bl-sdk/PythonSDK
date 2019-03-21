#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_RemoveInventoryFromStorage()
{
    class_< UBehavior_RemoveInventoryFromStorage, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_RemoveInventoryFromStorage", no_init)
        .def_readwrite("ItemDef", &UBehavior_RemoveInventoryFromStorage::ItemDef)
        .def_readwrite("WeaponDef", &UBehavior_RemoveInventoryFromStorage::WeaponDef)
        .def_readwrite("InvType", &UBehavior_RemoveInventoryFromStorage::InvType)
        .def_readwrite("Source", &UBehavior_RemoveInventoryFromStorage::Source)
        .def("StaticClass", &UBehavior_RemoveInventoryFromStorage::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_RemoveInventoryFromStorage::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}