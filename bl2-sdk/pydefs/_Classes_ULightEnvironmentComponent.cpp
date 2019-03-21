#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULightEnvironmentComponent()
{
    py::class_< ULightEnvironmentComponent,  UActorComponent   >("ULightEnvironmentComponent")
        .def_readwrite("DominantShadowFactor", &ULightEnvironmentComponent::DominantShadowFactor)
        .def_readwrite("AffectingDominantLight", &ULightEnvironmentComponent::AffectingDominantLight)
        .def_readwrite("AffectedComponents", &ULightEnvironmentComponent::AffectedComponents)
        .def("StaticClass", &ULightEnvironmentComponent::StaticClass, py::return_value_policy::reference)
        .def("IsEnabled", &ULightEnvironmentComponent::IsEnabled)
        .def("SetEnabled", &ULightEnvironmentComponent::SetEnabled)
        .staticmethod("StaticClass")
  ;
}