#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FWorldLightingOverride()
{
    class_< FWorldLightingOverride >("FWorldLightingOverride", no_init)
        .def_readwrite("DirectionOffset", &FWorldLightingOverride::DirectionOffset)
        .def_readwrite("FadeInTime", &FWorldLightingOverride::FadeInTime)
        .def_readwrite("FadeOutTime", &FWorldLightingOverride::FadeOutTime)
        .def_readwrite("RemainingFadeTime", &FWorldLightingOverride::RemainingFadeTime)
        .def_readwrite("pMovie", &FWorldLightingOverride::pMovie)
  ;
}