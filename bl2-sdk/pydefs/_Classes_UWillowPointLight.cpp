#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowPointLight(py::module &m)
{
    py::class_< UWillowPointLight,  UPointLightComponent   >(m, "UWillowPointLight")
        .def_readwrite("HighDetailFrameTime", &UWillowPointLight::HighDetailFrameTime)
        .def_readwrite("Lifetime", &UWillowPointLight::Lifetime)
        .def_readwrite("TimeShiftIndex", &UWillowPointLight::TimeShiftIndex)
        .def_readwrite("TimeShift", &UWillowPointLight::TimeShift)
        .def("ResetLight", &UWillowPointLight::ResetLight)
          ;
}