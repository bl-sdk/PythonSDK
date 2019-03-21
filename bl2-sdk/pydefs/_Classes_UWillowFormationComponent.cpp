#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowFormationComponent(py::object m)
{
    py::class_< UWillowFormationComponent,  UPrimitiveComponent   >(m, "UWillowFormationComponent")
        .def_readwrite("NameTag", &UWillowFormationComponent::NameTag)
        .def_readwrite("AIOwner", &UWillowFormationComponent::AIOwner)
        .def("StaticClass", &UWillowFormationComponent::StaticClass, py::return_value_policy::reference)
          ;
}