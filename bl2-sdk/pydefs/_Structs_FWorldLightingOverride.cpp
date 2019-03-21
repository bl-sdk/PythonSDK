#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWorldLightingOverride()
{
    py::class_< FWorldLightingOverride >("FWorldLightingOverride")
        .def_readwrite("DirectionOffset", &FWorldLightingOverride::DirectionOffset)
        .def_readwrite("FadeInTime", &FWorldLightingOverride::FadeInTime)
        .def_readwrite("FadeOutTime", &FWorldLightingOverride::FadeOutTime)
        .def_readwrite("RemainingFadeTime", &FWorldLightingOverride::RemainingFadeTime)
        .def_readwrite("pMovie", &FWorldLightingOverride::pMovie)
  ;
}