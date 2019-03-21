#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDominantSpotLightComponent(py::object m)
{
    py::class_< UDominantSpotLightComponent,  USpotLightComponent   >(m, "UDominantSpotLightComponent")
        .def_readonly("UnknownData00", &UDominantSpotLightComponent::UnknownData00)
        .def_readwrite("DominantLightShadowInfo", &UDominantSpotLightComponent::DominantLightShadowInfo)
        .def_readwrite("DominantLightShadowMap", &UDominantSpotLightComponent::DominantLightShadowMap)
        .def("StaticClass", &UDominantSpotLightComponent::StaticClass, py::return_value_policy::reference)
          ;
}