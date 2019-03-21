#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UComponentLifetimeManagerComponent()
{
    class_< UComponentLifetimeManagerComponent, bases< UActorComponent >  , boost::noncopyable>("UComponentLifetimeManagerComponent", no_init)
        .def_readwrite("ManagedComponents", &UComponentLifetimeManagerComponent::ManagedComponents)
        .def_readwrite("ManagedComponentsLifeSpan", &UComponentLifetimeManagerComponent::ManagedComponentsLifeSpan)
        .def("StaticClass", &UComponentLifetimeManagerComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("RemoveManagedComponent", &UComponentLifetimeManagerComponent::RemoveManagedComponent)
        .def("AddManagedComponent", &UComponentLifetimeManagerComponent::AddManagedComponent)
        .staticmethod("StaticClass")
  ;
}