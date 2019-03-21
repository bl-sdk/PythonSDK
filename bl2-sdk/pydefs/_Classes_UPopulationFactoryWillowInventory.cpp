#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPopulationFactoryWillowInventory()
{
    class_< UPopulationFactoryWillowInventory, bases< UPopulationFactory >  , boost::noncopyable>("UPopulationFactoryWillowInventory", no_init)
        .def("StaticClass", &UPopulationFactoryWillowInventory::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventRestorePickup", &UPopulationFactoryWillowInventory::eventRestorePickup, return_value_policy< reference_existing_object >())
        .def("CreateInventoryPickup", &UPopulationFactoryWillowInventory::CreateInventoryPickup, return_value_policy< reference_existing_object >())
        .def("eventGetPopulatedPickupMemento", &UPopulationFactoryWillowInventory::eventGetPopulatedPickupMemento)
        .def("eventShouldSavePopulationActor", &UPopulationFactoryWillowInventory::eventShouldSavePopulationActor)
        .staticmethod("StaticClass")
  ;
}