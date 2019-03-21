#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USkyLightComponent()
{
    class_< USkyLightComponent, bases< ULightComponent >  , boost::noncopyable>("USkyLightComponent", no_init)
        .def_readwrite("LowerBrightness", &USkyLightComponent::LowerBrightness)
        .def_readwrite("LowerColor", &USkyLightComponent::LowerColor)
        .def("StaticClass", &USkyLightComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnUpdatePropertyLowerBrightness", &USkyLightComponent::OnUpdatePropertyLowerBrightness)
        .def("OnUpdatePropertyLowerColor", &USkyLightComponent::OnUpdatePropertyLowerColor)
        .def("OnUpdatePropertyLightEnv_BouncedLightBrightness", &USkyLightComponent::OnUpdatePropertyLightEnv_BouncedLightBrightness)
        .def("OnUpdatePropertyLightEnv_BouncedModulationColor", &USkyLightComponent::OnUpdatePropertyLightEnv_BouncedModulationColor)
        .def("OnUpdatePropertyBrightness", &USkyLightComponent::OnUpdatePropertyBrightness)
        .def("OnUpdatePropertyLightColor", &USkyLightComponent::OnUpdatePropertyLightColor)
        .staticmethod("StaticClass")
  ;
}