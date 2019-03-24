#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWindPointSourceComponent(py::module &m)
{
    py::class_< UWindPointSourceComponent,  UWindDirectionalSourceComponent   >(m, "UWindPointSourceComponent")
		.def_static("StaticClass", &UWindPointSourceComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PreviewRadiusComponent", &UWindPointSourceComponent::PreviewRadiusComponent)
        .def_readwrite("Radius", &UWindPointSourceComponent::Radius)
          ;
}