#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPostProcessOverlay(py::object m)
{
    py::class_< FPostProcessOverlay >(m, "FPostProcessOverlay")
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