#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPostProcessOverlay()
{
    class_< FPostProcessOverlay >("FPostProcessOverlay", no_init)
        .def_readwrite("OverlayName", &FPostProcessOverlay::OverlayName)
        .def_readwrite("DestPostProcessOverlay", &FPostProcessOverlay::DestPostProcessOverlay)
        .def_readwrite("MinTransitionInDuration", &FPostProcessOverlay::MinTransitionInDuration)
        .def_readwrite("MinTransitionHoldDuration", &FPostProcessOverlay::MinTransitionHoldDuration)
        .def_readwrite("MinTransitionOutDuration", &FPostProcessOverlay::MinTransitionOutDuration)
        .def_readwrite("MaxTransitionInDuration", &FPostProcessOverlay::MaxTransitionInDuration)
        .def_readwrite("MaxTransitionHoldDuration", &FPostProcessOverlay::MaxTransitionHoldDuration)
        .def_readwrite("MaxTransitionOutDuration", &FPostProcessOverlay::MaxTransitionOutDuration)
  ;
}