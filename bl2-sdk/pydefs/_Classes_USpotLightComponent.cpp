#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpotLightComponent()
{
    py::class_< USpotLightComponent,  UPointLightComponent   >("USpotLightComponent")
        .def_readwrite("InnerConeAngle", &USpotLightComponent::InnerConeAngle)
        .def_readwrite("OuterConeAngle", &USpotLightComponent::OuterConeAngle)
        .def_readwrite("LightShaftConeAngle", &USpotLightComponent::LightShaftConeAngle)
        .def_readwrite("PreviewInnerCone", &USpotLightComponent::PreviewInnerCone)
        .def_readwrite("PreviewOuterCone", &USpotLightComponent::PreviewOuterCone)
        .def_readwrite("Rotation", &USpotLightComponent::Rotation)
        .def("StaticClass", &USpotLightComponent::StaticClass, py::return_value_policy::reference)
        .def("SetRotation", &USpotLightComponent::SetRotation)
        .staticmethod("StaticClass")
  ;
}