#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDirectionalLightComponent()
{
    class_< UDirectionalLightComponent, bases< ULightComponent >  , boost::noncopyable>("UDirectionalLightComponent", no_init)
        .def_readwrite("TraceDistance", &UDirectionalLightComponent::TraceDistance)
        .def_readwrite("WholeSceneDynamicShadowRadius", &UDirectionalLightComponent::WholeSceneDynamicShadowRadius)
        .def_readwrite("NumWholeSceneDynamicShadowCascades", &UDirectionalLightComponent::NumWholeSceneDynamicShadowCascades)
        .def_readwrite("CascadeDistributionExponent", &UDirectionalLightComponent::CascadeDistributionExponent)
        .def_readwrite("LightmassSettings", &UDirectionalLightComponent::LightmassSettings)
        .def("StaticClass", &UDirectionalLightComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnUpdatePropertyLightEnv_BouncedLightBrightness", &UDirectionalLightComponent::OnUpdatePropertyLightEnv_BouncedLightBrightness)
        .def("OnUpdatePropertyLightEnv_BouncedModulationColor", &UDirectionalLightComponent::OnUpdatePropertyLightEnv_BouncedModulationColor)
        .def("OnUpdatePropertyBrightness", &UDirectionalLightComponent::OnUpdatePropertyBrightness)
        .def("OnUpdatePropertyLightColor", &UDirectionalLightComponent::OnUpdatePropertyLightColor)
        .staticmethod("StaticClass")
  ;
}