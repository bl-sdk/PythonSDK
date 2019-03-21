#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPostProcessOverlayInfo(py::object m)
{
    py::class_< FPostProcessOverlayInfo >(m, "FPostProcessOverlayInfo")
        .def_readwrite("PostProcessOverlay", &FPostProcessOverlayInfo::PostProcessOverlay)
        .def_readwrite("SceneInterpolationPhaseTime", &FPostProcessOverlayInfo::SceneInterpolationPhaseTime)
        .def_readwrite("SceneInterpolationDuration", &FPostProcessOverlayInfo::SceneInterpolationDuration)
        .def_readwrite("PostProcessOverlayPhase", &FPostProcessOverlayInfo::PostProcessOverlayPhase)
  ;
}