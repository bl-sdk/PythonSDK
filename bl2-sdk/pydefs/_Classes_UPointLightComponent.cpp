#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPointLightComponent()
{
    class_< UPointLightComponent, bases< ULightComponent >  , boost::noncopyable>("UPointLightComponent", no_init)
        .def_readwrite("ShadowRadiusMultiplier", &UPointLightComponent::ShadowRadiusMultiplier)
        .def_readwrite("Radius", &UPointLightComponent::Radius)
        .def_readwrite("FalloffExponent", &UPointLightComponent::FalloffExponent)
        .def_readwrite("ShadowFalloffExponent", &UPointLightComponent::ShadowFalloffExponent)
        .def_readwrite("MinShadowFalloffRadius", &UPointLightComponent::MinShadowFalloffRadius)
        .def_readonly("UnknownData00", &UPointLightComponent::UnknownData00)
        .def_readwrite("CachedParentToWorld", &UPointLightComponent::CachedParentToWorld)
        .def_readwrite("Translation", &UPointLightComponent::Translation)
        .def_readonly("UnknownData01", &UPointLightComponent::UnknownData01)
        .def_readwrite("ShadowPlane", &UPointLightComponent::ShadowPlane)
        .def_readwrite("PreviewLightRadius", &UPointLightComponent::PreviewLightRadius)
        .def_readwrite("LightmassSettings", &UPointLightComponent::LightmassSettings)
        .def_readwrite("PreviewLightSourceRadius", &UPointLightComponent::PreviewLightSourceRadius)
        .def("StaticClass", &UPointLightComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnUpdatePropertyLightEnv_BouncedLightBrightness", &UPointLightComponent::OnUpdatePropertyLightEnv_BouncedLightBrightness)
        .def("OnUpdatePropertyLightEnv_BouncedModulationColor", &UPointLightComponent::OnUpdatePropertyLightEnv_BouncedModulationColor)
        .def("OnUpdatePropertyBrightness", &UPointLightComponent::OnUpdatePropertyBrightness)
        .def("OnUpdatePropertyLightColor", &UPointLightComponent::OnUpdatePropertyLightColor)
        .def("SetTranslation", &UPointLightComponent::SetTranslation)
        .staticmethod("StaticClass")
  ;
}