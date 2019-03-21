#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLightmassPointLightSettings()
{
    class_< FLightmassPointLightSettings >("FLightmassPointLightSettings", no_init)
        .def_readwrite("LightSourceRadius", &FLightmassPointLightSettings::LightSourceRadius)
        .def_readwrite("IndirectLightingScale", &FLightmassLightSettings::IndirectLightingScale)
        .def_readwrite("IndirectLightingSaturation", &FLightmassLightSettings::IndirectLightingSaturation)
        .def_readwrite("ShadowExponent", &FLightmassLightSettings::ShadowExponent)
  ;
}