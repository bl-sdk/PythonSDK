#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FObjectiveIcon()
{
    py::class_< FObjectiveIcon >("FObjectiveIcon")
        .def_readwrite("TransitionStartTime", &FObjectiveIcon::TransitionStartTime)
        .def_readwrite("LastLocation", &FObjectiveIcon::LastLocation)
        .def_readwrite("FadeAlpha", &FObjectiveIcon::FadeAlpha)
        .def_readwrite("FadeScale", &FObjectiveIcon::FadeScale)
        .def_readwrite("ObjectiveClip", &FObjectiveIcon::ObjectiveClip)
        .def_readwrite("AboveClip", &FObjectiveIcon::AboveClip)
        .def_readwrite("BelowClip", &FObjectiveIcon::BelowClip)
        .def_readwrite("OptionalClip", &FObjectiveIcon::OptionalClip)
        .def_readwrite("IconClip", &FWorldSpaceIcon::IconClip)
        .def_readwrite("ArrowClip", &FWorldSpaceIcon::ArrowClip)
        .def_readwrite("NextOcclusionTestTime", &FWorldSpaceIcon::NextOcclusionTestTime)
        .def_readwrite("CachedTextboxWidth", &FWorldSpaceIcon::CachedTextboxWidth)
        .def_readwrite("CachedTextboxHeight", &FWorldSpaceIcon::CachedTextboxHeight)
  ;
}