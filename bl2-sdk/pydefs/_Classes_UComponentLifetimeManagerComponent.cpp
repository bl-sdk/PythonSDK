#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UComponentLifetimeManagerComponent(py::module &m)
{
    py::class_< UComponentLifetimeManagerComponent,  UActorComponent   >(m, "UComponentLifetimeManagerComponent")
		.def_static("StaticClass", &UComponentLifetimeManagerComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ManagedComponents", &UComponentLifetimeManagerComponent::ManagedComponents)
        .def_readwrite("ManagedComponentsLifeSpan", &UComponentLifetimeManagerComponent::ManagedComponentsLifeSpan)
        .def("RemoveManagedComponent", &UComponentLifetimeManagerComponent::RemoveManagedComponent)
        .def("AddManagedComponent", &UComponentLifetimeManagerComponent::AddManagedComponent)
          ;
}