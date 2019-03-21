#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationFactoryWillowInventory()
{
    py::class_< UPopulationFactoryWillowInventory,  UPopulationFactory   >("UPopulationFactoryWillowInventory")
        .def("StaticClass", &UPopulationFactoryWillowInventory::StaticClass, py::return_value_policy::reference)
        .def("eventRestorePickup", &UPopulationFactoryWillowInventory::eventRestorePickup, py::return_value_policy::reference)
        .def("CreateInventoryPickup", &UPopulationFactoryWillowInventory::CreateInventoryPickup, py::return_value_policy::reference)
        .def("eventGetPopulatedPickupMemento", &UPopulationFactoryWillowInventory::eventGetPopulatedPickupMemento)
        .def("eventShouldSavePopulationActor", &UPopulationFactoryWillowInventory::eventShouldSavePopulationActor)
        .staticmethod("StaticClass")
  ;
}