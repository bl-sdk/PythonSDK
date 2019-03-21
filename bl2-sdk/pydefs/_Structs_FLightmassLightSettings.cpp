#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLightmassLightSettings()
{
    class_< FLightmassLightSettings >("FLightmassLightSettings", no_init)
        .def_readwrite("IndirectLightingScale", &FLightmassLightSettings::IndirectLightingScale)
        .def_readwrite("IndirectLightingSaturation", &FLightmassLightSettings::IndirectLightingSaturation)
        .def_readwrite("ShadowExponent", &FLightmassLightSettings::ShadowExponent)
  ;
}