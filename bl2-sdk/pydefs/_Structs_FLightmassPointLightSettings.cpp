#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLightmassPointLightSettings()
{
    py::class_< FLightmassPointLightSettings >("FLightmassPointLightSettings")
        .def_readwrite("LightSourceRadius", &FLightmassPointLightSettings::LightSourceRadius)
        .def_readwrite("IndirectLightingScale", &FLightmassLightSettings::IndirectLightingScale)
        .def_readwrite("IndirectLightingSaturation", &FLightmassLightSettings::IndirectLightingSaturation)
        .def_readwrite("ShadowExponent", &FLightmassLightSettings::ShadowExponent)
  ;
}