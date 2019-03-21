#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowFormationComponent()
{
    py::class_< UWillowFormationComponent,  UPrimitiveComponent   >("UWillowFormationComponent")
        .def_readwrite("NameTag", &UWillowFormationComponent::NameTag)
        .def_readwrite("AIOwner", &UWillowFormationComponent::AIOwner)
        .def_readonly("UnknownData00", &UWillowFormationComponent::UnknownData00)
        .def("StaticClass", &UWillowFormationComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}