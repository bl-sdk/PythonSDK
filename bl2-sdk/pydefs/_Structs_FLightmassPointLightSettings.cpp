#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLightmassPointLightSettings(py::module &m)
{
    py::class_< FLightmassPointLightSettings >(m, "FLightmassPointLightSettings")
        .def_readwrite("LightSourceRadius", &FLightmassPointLightSettings::LightSourceRadius)
        .def_readwrite("IndirectLightingScale", &FLightmassLightSettings::IndirectLightingScale)
        .def_readwrite("IndirectLightingSaturation", &FLightmassLightSettings::IndirectLightingSaturation)
        .def_readwrite("ShadowExponent", &FLightmassLightSettings::ShadowExponent)
  ;
}