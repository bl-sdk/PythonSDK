#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDominantDirectionalLightComponent()
{
    class_< UDominantDirectionalLightComponent, bases< ULightComponent >  , boost::noncopyable>("UDominantDirectionalLightComponent", no_init)
        .def_readwrite("DominantLightmassBrightness", &UDominantDirectionalLightComponent::DominantLightmassBrightness)
        .def_readwrite("TimeOfDayDiffuseBrightness", &UDominantDirectionalLightComponent::TimeOfDayDiffuseBrightness)
        .def_readwrite("TimeOfDayDiffuseColor", &UDominantDirectionalLightComponent::TimeOfDayDiffuseColor)
        .def_readwrite("TimeOfDaySpecularBrightness", &UDominantDirectionalLightComponent::TimeOfDaySpecularBrightness)
        .def_readwrite("TimeOfDaySpecularColor", &UDominantDirectionalLightComponent::TimeOfDaySpecularColor)
        .def_readonly("UnknownData00", &UDominantDirectionalLightComponent::UnknownData00)
        .def_readwrite("DominantLightShadowInfo", &UDominantDirectionalLightComponent::DominantLightShadowInfo)
        .def_readwrite("DominantLightShadowMap", &UDominantDirectionalLightComponent::DominantLightShadowMap)
        .def_readwrite("TraceDistance", &UDirectionalLightComponent::TraceDistance)
        .def_readwrite("WholeSceneDynamicShadowRadius", &UDirectionalLightComponent::WholeSceneDynamicShadowRadius)
        .def_readwrite("NumWholeSceneDynamicShadowCascades", &UDirectionalLightComponent::NumWholeSceneDynamicShadowCascades)
        .def_readwrite("CascadeDistributionExponent", &UDirectionalLightComponent::CascadeDistributionExponent)
        .def_readwrite("LightmassSettings", &UDirectionalLightComponent::LightmassSettings)
        .def("StaticClass", &UDominantDirectionalLightComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnUpdatePropertyTimeOfDaySpecularColor", &UDominantDirectionalLightComponent::OnUpdatePropertyTimeOfDaySpecularColor)
        .def("OnUpdatePropertyTimeOfDaySpecularBrightness", &UDominantDirectionalLightComponent::OnUpdatePropertyTimeOfDaySpecularBrightness)
        .def("OnUpdatePropertyTimeOfDayDiffuseColor", &UDominantDirectionalLightComponent::OnUpdatePropertyTimeOfDayDiffuseColor)
        .def("OnUpdatePropertyTimeOfDayDiffuseBrightness", &UDominantDirectionalLightComponent::OnUpdatePropertyTimeOfDayDiffuseBrightness)
        .def("OnUpdatePropertyLightEnv_BouncedLightBrightness", &UDirectionalLightComponent::OnUpdatePropertyLightEnv_BouncedLightBrightness)
        .def("OnUpdatePropertyLightEnv_BouncedModulationColor", &UDirectionalLightComponent::OnUpdatePropertyLightEnv_BouncedModulationColor)
        .def("OnUpdatePropertyBrightness", &UDirectionalLightComponent::OnUpdatePropertyBrightness)
        .def("OnUpdatePropertyLightColor", &UDirectionalLightComponent::OnUpdatePropertyLightColor)
        .staticmethod("StaticClass")
  ;
}