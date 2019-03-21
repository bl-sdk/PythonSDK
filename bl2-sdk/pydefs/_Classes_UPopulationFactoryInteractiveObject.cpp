#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPopulationFactoryInteractiveObject()
{
    class_< UPopulationFactoryInteractiveObject, bases< UPopulationFactory >  , boost::noncopyable>("UPopulationFactoryInteractiveObject", no_init)
        .def_readwrite("ObjectDefinition", &UPopulationFactoryInteractiveObject::ObjectDefinition)
        .def_readwrite("ObjectBalanceDefinition", &UPopulationFactoryInteractiveObject::ObjectBalanceDefinition)
        .def_readwrite("EnabledBehaviorSets", &UPopulationFactoryInteractiveObject::EnabledBehaviorSets)
        .def_readwrite("AttributeStartingValues", &UPopulationFactoryInteractiveObject::AttributeStartingValues)
        .def("StaticClass", &UPopulationFactoryInteractiveObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetDescriptionOfFactoryOutput", &UPopulationFactoryInteractiveObject::eventGetDescriptionOfFactoryOutput)
        .def("GetSpawnLocation", &UPopulationFactoryInteractiveObject::GetSpawnLocation)
        .def("CreateInteractiveObject", &UPopulationFactoryInteractiveObject::CreateInteractiveObject, return_value_policy< reference_existing_object >())
        .def("eventGetPopulatedInteractiveObjectMemento", &UPopulationFactoryInteractiveObject::eventGetPopulatedInteractiveObjectMemento)
        .def("eventShouldSavePopulationActor", &UPopulationFactoryInteractiveObject::eventShouldSavePopulationActor)
        .def("eventRestoreInteractiveObject", &UPopulationFactoryInteractiveObject::eventRestoreInteractiveObject, return_value_policy< reference_existing_object >())
        .def("eventCreatePopulationActor", &UPopulationFactoryInteractiveObject::eventCreatePopulationActor, return_value_policy< reference_existing_object >())
        .def("eventGetSpawnVisibilityBounds", &UPopulationFactoryInteractiveObject::eventGetSpawnVisibilityBounds)
        .def("GetActorAllegiance", &UPopulationFactoryInteractiveObject::GetActorAllegiance, return_value_policy< reference_existing_object >())
        .def("GetObjectDefinition", &UPopulationFactoryInteractiveObject::GetObjectDefinition, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}