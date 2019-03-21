#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPostProcessOverlayInfo()
{
    class_< FPostProcessOverlayInfo >("FPostProcessOverlayInfo", no_init)
        .def_readwrite("PostProcessOverlay", &FPostProcessOverlayInfo::PostProcessOverlay)
        .def_readwrite("SceneInterpolationPhaseTime", &FPostProcessOverlayInfo::SceneInterpolationPhaseTime)
        .def_readwrite("SceneInterpolationDuration", &FPostProcessOverlayInfo::SceneInterpolationDuration)
        .def_readwrite("PostProcessOverlayPhase", &FPostProcessOverlayInfo::PostProcessOverlayPhase)
  ;
}