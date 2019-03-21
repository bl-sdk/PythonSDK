#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPostProcessOverlayInfo()
{
    py::class_< FPostProcessOverlayInfo >("FPostProcessOverlayInfo")
        .def_readwrite("PostProcessOverlay", &FPostProcessOverlayInfo::PostProcessOverlay)
        .def_readwrite("SceneInterpolationPhaseTime", &FPostProcessOverlayInfo::SceneInterpolationPhaseTime)
        .def_readwrite("SceneInterpolationDuration", &FPostProcessOverlayInfo::SceneInterpolationDuration)
        .def_readwrite("PostProcessOverlayPhase", &FPostProcessOverlayInfo::PostProcessOverlayPhase)
  ;
}