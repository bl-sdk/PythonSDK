#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDrawLightRadiusComponent()
{
    py::class_< UDrawLightRadiusComponent,  UDrawSphereComponent   >("UDrawLightRadiusComponent")
        .def("StaticClass", &UDrawLightRadiusComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}