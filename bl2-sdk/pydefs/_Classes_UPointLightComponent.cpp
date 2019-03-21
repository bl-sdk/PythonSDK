#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPointLightComponent(py::object m)
{
    py::class_< UPointLightComponent,  ULightComponent   >(m, "UPointLightComponent")
        .def_readwrite("ShadowRadiusMultiplier", &UPointLightComponent::ShadowRadiusMultiplier)
        .def_readwrite("Radius", &UPointLightComponent::Radius)
        .def_readwrite("FalloffExponent", &UPointLightComponent::FalloffExponent)
        .def_readwrite("ShadowFalloffExponent", &UPointLightComponent::ShadowFalloffExponent)
        .def_readwrite("MinShadowFalloffRadius", &UPointLightComponent::MinShadowFalloffRadius)
        .def_readwrite("CachedParentToWorld", &UPointLightComponent::CachedParentToWorld)
        .def_readwrite("Translation", &UPointLightComponent::Translation)
        .def_readwrite("ShadowPlane", &UPointLightComponent::ShadowPlane)
        .def_readwrite("PreviewLightRadius", &UPointLightComponent::PreviewLightRadius)
        .def_readwrite("LightmassSettings", &UPointLightComponent::LightmassSettings)
        .def_readwrite("PreviewLightSourceRadius", &UPointLightComponent::PreviewLightSourceRadius)
        .def("StaticClass", &UPointLightComponent::StaticClass, py::return_value_policy::reference)
        .def("OnUpdatePropertyLightEnv_BouncedLightBrightness", &UPointLightComponent::OnUpdatePropertyLightEnv_BouncedLightBrightness)
        .def("OnUpdatePropertyLightEnv_BouncedModulationColor", &UPointLightComponent::OnUpdatePropertyLightEnv_BouncedModulationColor)
        .def("OnUpdatePropertyBrightness", &UPointLightComponent::OnUpdatePropertyBrightness)
        .def("OnUpdatePropertyLightColor", &UPointLightComponent::OnUpdatePropertyLightColor)
        .def("SetTranslation", &UPointLightComponent::SetTranslation)
          ;
}