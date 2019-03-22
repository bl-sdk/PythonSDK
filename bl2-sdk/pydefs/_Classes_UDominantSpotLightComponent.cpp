#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDominantSpotLightComponent(py::module &m)
{
    py::class_< UDominantSpotLightComponent,  USpotLightComponent   >(m, "UDominantSpotLightComponent")
        .def_readwrite("DominantLightShadowInfo", &UDominantSpotLightComponent::DominantLightShadowInfo)
        .def_readwrite("DominantLightShadowMap", &UDominantSpotLightComponent::DominantLightShadowMap)
          ;
}