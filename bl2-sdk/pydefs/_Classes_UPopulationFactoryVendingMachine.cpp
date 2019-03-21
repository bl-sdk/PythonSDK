#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationFactoryVendingMachine()
{
    py::class_< UPopulationFactoryVendingMachine,  UPopulationFactory   >("UPopulationFactoryVendingMachine")
        .def_readwrite("ShopType", &UPopulationFactoryVendingMachine::ShopType)
        .def_readwrite("FormOfCurrency", &UPopulationFactoryVendingMachine::FormOfCurrency)
        .def_readwrite("CommerceMarkup", &UPopulationFactoryVendingMachine::CommerceMarkup)
        .def_readwrite("LootConfiguration", &UPopulationFactoryVendingMachine::LootConfiguration)
        .def_readwrite("FeaturedItem", &UPopulationFactoryVendingMachine::FeaturedItem)
        .def_readwrite("FixedItemCost", &UPopulationFactoryVendingMachine::FixedItemCost)
        .def_readwrite("FixedFeaturedItemCost", &UPopulationFactoryVendingMachine::FixedFeaturedItemCost)
        .def_readwrite("ObjectDefinition", &UPopulationFactoryInteractiveObject::ObjectDefinition)
        .def_readwrite("ObjectBalanceDefinition", &UPopulationFactoryInteractiveObject::ObjectBalanceDefinition)
        .def_readwrite("EnabledBehaviorSets", &UPopulationFactoryInteractiveObject::EnabledBehaviorSets)
        .def_readwrite("AttributeStartingValues", &UPopulationFactoryInteractiveObject::AttributeStartingValues)
        .def("StaticClass", &UPopulationFactoryVendingMachine::StaticClass, py::return_value_policy::reference)
        .def("eventShouldSavePopulationActor", &UPopulationFactoryVendingMachine::eventShouldSavePopulationActor)
        .def("CreateInteractiveObject", &UPopulationFactoryVendingMachine::CreateInteractiveObject, py::return_value_policy::reference)
        .def("eventCreatePopulationActor", &UPopulationFactoryVendingMachine::eventCreatePopulationActor, py::return_value_policy::reference)
        .def("eventGetDescriptionOfFactoryOutput", &UPopulationFactoryInteractiveObject::eventGetDescriptionOfFactoryOutput)
        .def("GetSpawnLocation", &UPopulationFactoryInteractiveObject::GetSpawnLocation)
        .def("eventGetPopulatedInteractiveObjectMemento", &UPopulationFactoryInteractiveObject::eventGetPopulatedInteractiveObjectMemento)
        .def("eventRestoreInteractiveObject", &UPopulationFactoryInteractiveObject::eventRestoreInteractiveObject, py::return_value_policy::reference)
        .def("eventGetSpawnVisibilityBounds", &UPopulationFactoryInteractiveObject::eventGetSpawnVisibilityBounds)
        .def("GetActorAllegiance", &UPopulationFactoryInteractiveObject::GetActorAllegiance, py::return_value_policy::reference)
        .def("GetObjectDefinition", &UPopulationFactoryInteractiveObject::GetObjectDefinition, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}