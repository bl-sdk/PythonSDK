#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDynamicLightEnvironmentComponent(py::module &m)
{
    py::class_< UDynamicLightEnvironmentComponent,  ULightEnvironmentComponent   >(m, "UDynamicLightEnvironmentComponent")
        .def_readwrite("State", &UDynamicLightEnvironmentComponent::State)
        .def_readwrite("InvisibleUpdateTime", &UDynamicLightEnvironmentComponent::InvisibleUpdateTime)
        .def_readwrite("MinTimeBetweenFullUpdates", &UDynamicLightEnvironmentComponent::MinTimeBetweenFullUpdates)
        .def_readwrite("VelocityUpdateTimeScale", &UDynamicLightEnvironmentComponent::VelocityUpdateTimeScale)
        .def_readwrite("ShadowInterpolationSpeed", &UDynamicLightEnvironmentComponent::ShadowInterpolationSpeed)
        .def_readwrite("NumVolumeVisibilitySamples", &UDynamicLightEnvironmentComponent::NumVolumeVisibilitySamples)
        .def_readwrite("LightingBoundsScale", &UDynamicLightEnvironmentComponent::LightingBoundsScale)
        .def_readwrite("AmbientShadowColor", &UDynamicLightEnvironmentComponent::AmbientShadowColor)
        .def_readwrite("AmbientShadowSourceDirection", &UDynamicLightEnvironmentComponent::AmbientShadowSourceDirection)
        .def_readwrite("AmbientGlow", &UDynamicLightEnvironmentComponent::AmbientGlow)
        .def_readwrite("LightDistance", &UDynamicLightEnvironmentComponent::LightDistance)
        .def_readwrite("ShadowDistance", &UDynamicLightEnvironmentComponent::ShadowDistance)
        .def_readwrite("ModShadowFadeoutTime", &UDynamicLightEnvironmentComponent::ModShadowFadeoutTime)
        .def_readwrite("ModShadowFadeoutExponent", &UDynamicLightEnvironmentComponent::ModShadowFadeoutExponent)
        .def_readwrite("MaxModulatedShadowColor", &UDynamicLightEnvironmentComponent::MaxModulatedShadowColor)
        .def_readwrite("DominantShadowTransitionStartDistance", &UDynamicLightEnvironmentComponent::DominantShadowTransitionStartDistance)
        .def_readwrite("DominantShadowTransitionEndDistance", &UDynamicLightEnvironmentComponent::DominantShadowTransitionEndDistance)
        .def_readwrite("MinShadowAngle", &UDynamicLightEnvironmentComponent::MinShadowAngle)
        .def_readwrite("BoundsMethod", &UDynamicLightEnvironmentComponent::BoundsMethod)
        .def_readwrite("OverriddenBounds", &UDynamicLightEnvironmentComponent::OverriddenBounds)
        .def_readwrite("OverriddenLightingChannels", &UDynamicLightEnvironmentComponent::OverriddenLightingChannels)
        .def_readwrite("OverriddenLightComponents", &UDynamicLightEnvironmentComponent::OverriddenLightComponents)
        .def("ResetEnvironment", &UDynamicLightEnvironmentComponent::ResetEnvironment)
          ;
}