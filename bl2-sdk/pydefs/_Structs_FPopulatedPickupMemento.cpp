#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPopulatedPickupMemento()
{
    class_< FPopulatedPickupMemento >("FPopulatedPickupMemento", no_init)
        .def_readwrite("SavedInventoryClass", &FPopulatedPickupMemento::SavedInventoryClass)
        .def_readwrite("PickupMemento", &FPopulatedPickupMemento::PickupMemento)
        .def_readwrite("WeaponMemento", &FPopulatedPickupMemento::WeaponMemento)
        .def_readwrite("ItemMemento", &FPopulatedPickupMemento::ItemMemento)
  ;
}