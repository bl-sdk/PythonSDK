#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDrawLightConeComponent()
{
    py::class_< UDrawLightConeComponent,  UPrimitiveComponent   >("UDrawLightConeComponent")
        .def_readwrite("ConeColor", &UDrawConeComponent::ConeColor)
        .def_readwrite("ConeRadius", &UDrawConeComponent::ConeRadius)
        .def_readwrite("ConeAngle", &UDrawConeComponent::ConeAngle)
        .def_readwrite("ConeSides", &UDrawConeComponent::ConeSides)
        .def("StaticClass", &UDrawLightConeComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}