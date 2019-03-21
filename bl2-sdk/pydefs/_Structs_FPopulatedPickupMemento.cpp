#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPopulatedPickupMemento(py::object m)
{
    py::class_< FPopulatedPickupMemento >(m, "FPopulatedPickupMemento")
        .def_readwrite("SavedInventoryClass", &FPopulatedPickupMemento::SavedInventoryClass)
        .def_readwrite("PickupMemento", &FPopulatedPickupMemento::PickupMemento)
        .def_readwrite("WeaponMemento", &FPopulatedPickupMemento::WeaponMemento)
        .def_readwrite("ItemMemento", &FPopulatedPickupMemento::ItemMemento)
  ;
}