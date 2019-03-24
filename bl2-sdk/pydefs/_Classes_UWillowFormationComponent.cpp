#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowFormationComponent(py::module &m)
{
    py::class_< UWillowFormationComponent,  UPrimitiveComponent   >(m, "UWillowFormationComponent")
		.def_static("StaticClass", &UWillowFormationComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("NameTag", &UWillowFormationComponent::NameTag)
        .def_readwrite("AIOwner", &UWillowFormationComponent::AIOwner)
          ;
}