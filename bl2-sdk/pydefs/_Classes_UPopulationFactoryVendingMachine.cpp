#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPopulationFactoryVendingMachine()
{
    class_< UPopulationFactoryVendingMachine, bases< UPopulationFactory >  , boost::noncopyable>("UPopulationFactoryVendingMachine", no_init)
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
        .def("StaticClass", &UPopulationFactoryVendingMachine::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventShouldSavePopulationActor", &UPopulationFactoryVendingMachine::eventShouldSavePopulationActor)
        .def("CreateInteractiveObject", &UPopulationFactoryVendingMachine::CreateInteractiveObject, return_value_policy< reference_existing_object >())
        .def("eventCreatePopulationActor", &UPopulationFactoryVendingMachine::eventCreatePopulationActor, return_value_policy< reference_existing_object >())
        .def("eventGetDescriptionOfFactoryOutput", &UPopulationFactoryInteractiveObject::eventGetDescriptionOfFactoryOutput)
        .def("GetSpawnLocation", &UPopulationFactoryInteractiveObject::GetSpawnLocation)
        .def("eventGetPopulatedInteractiveObjectMemento", &UPopulationFactoryInteractiveObject::eventGetPopulatedInteractiveObjectMemento)
        .def("eventRestoreInteractiveObject", &UPopulationFactoryInteractiveObject::eventRestoreInteractiveObject, return_value_policy< reference_existing_object >())
        .def("eventGetSpawnVisibilityBounds", &UPopulationFactoryInteractiveObject::eventGetSpawnVisibilityBounds)
        .def("GetActorAllegiance", &UPopulationFactoryInteractiveObject::GetActorAllegiance, return_value_policy< reference_existing_object >())
        .def("GetObjectDefinition", &UPopulationFactoryInteractiveObject::GetObjectDefinition, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}