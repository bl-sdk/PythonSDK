#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USpotLightComponent()
{
    class_< USpotLightComponent, bases< UPointLightComponent >  , boost::noncopyable>("USpotLightComponent", no_init)
        .def_readwrite("InnerConeAngle", &USpotLightComponent::InnerConeAngle)
        .def_readwrite("OuterConeAngle", &USpotLightComponent::OuterConeAngle)
        .def_readwrite("LightShaftConeAngle", &USpotLightComponent::LightShaftConeAngle)
        .def_readwrite("PreviewInnerCone", &USpotLightComponent::PreviewInnerCone)
        .def_readwrite("PreviewOuterCone", &USpotLightComponent::PreviewOuterCone)
        .def_readwrite("Rotation", &USpotLightComponent::Rotation)
        .def("StaticClass", &USpotLightComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetRotation", &USpotLightComponent::SetRotation)
        .staticmethod("StaticClass")
  ;
}