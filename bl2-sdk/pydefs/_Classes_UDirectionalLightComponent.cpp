#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDirectionalLightComponent(py::object m)
{
    py::class_< UDirectionalLightComponent,  ULightComponent   >(m, "UDirectionalLightComponent")
        .def_readwrite("TraceDistance", &UDirectionalLightComponent::TraceDistance)
        .def_readwrite("WholeSceneDynamicShadowRadius", &UDirectionalLightComponent::WholeSceneDynamicShadowRadius)
        .def_readwrite("NumWholeSceneDynamicShadowCascades", &UDirectionalLightComponent::NumWholeSceneDynamicShadowCascades)
        .def_readwrite("CascadeDistributionExponent", &UDirectionalLightComponent::CascadeDistributionExponent)
        .def_readwrite("LightmassSettings", &UDirectionalLightComponent::LightmassSettings)
        .def("StaticClass", &UDirectionalLightComponent::StaticClass, py::return_value_policy::reference)
        .def("OnUpdatePropertyLightEnv_BouncedLightBrightness", &UDirectionalLightComponent::OnUpdatePropertyLightEnv_BouncedLightBrightness)
        .def("OnUpdatePropertyLightEnv_BouncedModulationColor", &UDirectionalLightComponent::OnUpdatePropertyLightEnv_BouncedModulationColor)
        .def("OnUpdatePropertyBrightness", &UDirectionalLightComponent::OnUpdatePropertyBrightness)
        .def("OnUpdatePropertyLightColor", &UDirectionalLightComponent::OnUpdatePropertyLightColor)
          ;
}