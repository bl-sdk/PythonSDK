#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UComponentLifetimeManagerComponent()
{
    py::class_< UComponentLifetimeManagerComponent,  UActorComponent   >("UComponentLifetimeManagerComponent")
        .def_readwrite("ManagedComponents", &UComponentLifetimeManagerComponent::ManagedComponents)
        .def_readwrite("ManagedComponentsLifeSpan", &UComponentLifetimeManagerComponent::ManagedComponentsLifeSpan)
        .def("StaticClass", &UComponentLifetimeManagerComponent::StaticClass, py::return_value_policy::reference)
        .def("RemoveManagedComponent", &UComponentLifetimeManagerComponent::RemoveManagedComponent)
        .def("AddManagedComponent", &UComponentLifetimeManagerComponent::AddManagedComponent)
        .staticmethod("StaticClass")
  ;
}