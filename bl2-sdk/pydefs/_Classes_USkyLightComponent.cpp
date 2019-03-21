#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkyLightComponent()
{
    py::class_< USkyLightComponent,  ULightComponent   >("USkyLightComponent")
        .def_readwrite("LowerBrightness", &USkyLightComponent::LowerBrightness)
        .def_readwrite("LowerColor", &USkyLightComponent::LowerColor)
        .def("StaticClass", &USkyLightComponent::StaticClass, py::return_value_policy::reference)
        .def("OnUpdatePropertyLowerBrightness", &USkyLightComponent::OnUpdatePropertyLowerBrightness)
        .def("OnUpdatePropertyLowerColor", &USkyLightComponent::OnUpdatePropertyLowerColor)
        .def("OnUpdatePropertyLightEnv_BouncedLightBrightness", &USkyLightComponent::OnUpdatePropertyLightEnv_BouncedLightBrightness)
        .def("OnUpdatePropertyLightEnv_BouncedModulationColor", &USkyLightComponent::OnUpdatePropertyLightEnv_BouncedModulationColor)
        .def("OnUpdatePropertyBrightness", &USkyLightComponent::OnUpdatePropertyBrightness)
        .def("OnUpdatePropertyLightColor", &USkyLightComponent::OnUpdatePropertyLightColor)
        .staticmethod("StaticClass")
  ;
}