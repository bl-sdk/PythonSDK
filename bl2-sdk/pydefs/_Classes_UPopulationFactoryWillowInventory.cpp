#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationFactoryWillowInventory(py::module &m)
{
    py::class_< UPopulationFactoryWillowInventory,  UPopulationFactory   >(m, "UPopulationFactoryWillowInventory")
        .def("eventRestorePickup", &UPopulationFactoryWillowInventory::eventRestorePickup, py::return_value_policy::reference)
        .def("CreateInventoryPickup", &UPopulationFactoryWillowInventory::CreateInventoryPickup, py::return_value_policy::reference)
        .def("eventGetPopulatedPickupMemento", &UPopulationFactoryWillowInventory::eventGetPopulatedPickupMemento)
        .def("eventShouldSavePopulationActor", &UPopulationFactoryWillowInventory::eventShouldSavePopulationActor)
          ;
}