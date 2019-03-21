#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryDominantDirectionalLightMovable()
{
    class_< UActorFactoryDominantDirectionalLightMovable, bases< UObject >  , boost::noncopyable>("UActorFactoryDominantDirectionalLightMovable", no_init)
        .def_readwrite("GameplayActorClass", &UActorFactory::GameplayActorClass)
        .def_readwrite("MenuName", &UActorFactory::MenuName)
        .def_readwrite("MenuPriority", &UActorFactory::MenuPriority)
        .def_readwrite("AlternateMenuPriority", &UActorFactory::AlternateMenuPriority)
        .def_readwrite("NewActorClass", &UActorFactory::NewActorClass)
        .def_readwrite("SpecificGameName", &UActorFactory::SpecificGameName)
        .def_readwrite("CustomPropertyEditorDelegateClassName", &UActorFactory::CustomPropertyEditorDelegateClassName)
        .def_readwrite("CustomPropertyEditorDelegateInstance", &UActorFactory::CustomPropertyEditorDelegateInstance)
        .def_readwrite("CustomPropertyEditorDelegateTargetClass", &UActorFactory::CustomPropertyEditorDelegateTargetClass)
        .def("StaticClass", &UActorFactoryDominantDirectionalLightMovable::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventPostCreateActor", &UActorFactory::eventPostCreateActor)
        .staticmethod("StaticClass")
  ;
}