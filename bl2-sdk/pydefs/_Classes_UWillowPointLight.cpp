#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowPointLight()
{
    py::class_< UWillowPointLight,  UPointLightComponent   >("UWillowPointLight")
        .def_readwrite("HighDetailFrameTime", &UWillowPointLight::HighDetailFrameTime)
        .def_readwrite("Lifetime", &UWillowPointLight::Lifetime)
        .def_readwrite("TimeShiftIndex", &UWillowPointLight::TimeShiftIndex)
        .def_readwrite("TimeShift", &UWillowPointLight::TimeShift)
        .def("StaticClass", &UWillowPointLight::StaticClass, py::return_value_policy::reference)
        .def("ResetLight", &UWillowPointLight::ResetLight)
        .staticmethod("StaticClass")
  ;
}