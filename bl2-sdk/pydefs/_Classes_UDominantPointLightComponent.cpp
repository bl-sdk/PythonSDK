#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDominantPointLightComponent()
{
    py::class_< UDominantPointLightComponent,  UPointLightComponent   >("UDominantPointLightComponent")
        .def("StaticClass", &UDominantPointLightComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}