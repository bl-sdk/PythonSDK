#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULightEnvironmentComponent(py::module &m)
{
    py::class_< ULightEnvironmentComponent,  UActorComponent   >(m, "ULightEnvironmentComponent")
		.def_static("StaticClass", &ULightEnvironmentComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DominantShadowFactor", &ULightEnvironmentComponent::DominantShadowFactor)
        .def_readwrite("AffectingDominantLight", &ULightEnvironmentComponent::AffectingDominantLight)
        .def_readwrite("AffectedComponents", &ULightEnvironmentComponent::AffectedComponents)
        .def("IsEnabled", &ULightEnvironmentComponent::IsEnabled)
        .def("SetEnabled", &ULightEnvironmentComponent::SetEnabled)
          ;
}