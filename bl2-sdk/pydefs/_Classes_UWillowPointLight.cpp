#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowPointLight()
{
    class_< UWillowPointLight, bases< UPointLightComponent >  , boost::noncopyable>("UWillowPointLight", no_init)
        .def_readwrite("HighDetailFrameTime", &UWillowPointLight::HighDetailFrameTime)
        .def_readwrite("Lifetime", &UWillowPointLight::Lifetime)
        .def_readwrite("TimeShiftIndex", &UWillowPointLight::TimeShiftIndex)
        .def_readwrite("TimeShift", &UWillowPointLight::TimeShift)
        .def("StaticClass", &UWillowPointLight::StaticClass, return_value_policy< reference_existing_object >())
        .def("ResetLight", &UWillowPointLight::ResetLight)
        .staticmethod("StaticClass")
  ;
}