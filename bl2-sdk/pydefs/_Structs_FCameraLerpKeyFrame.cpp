#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCameraLerpKeyFrame(py::module &m)
{
    py::class_< FCameraLerpKeyFrame >(m, "FCameraLerpKeyFrame")
        .def_readwrite("Alpha", &FCameraLerpKeyFrame::Alpha)
        .def_readwrite("CameraTargetThisKeyFrame", &FCameraLerpKeyFrame::CameraTargetThisKeyFrame)
        .def_readwrite("CameraRotationBehavior", &FCameraLerpKeyFrame::CameraRotationBehavior)
        .def_readwrite("BaseCameraPosition", &FCameraLerpKeyFrame::BaseCameraPosition)
        .def_readwrite("CameraOffset", &FCameraLerpKeyFrame::CameraOffset)
        .def_readwrite("ForcedCameraRotation", &FCameraLerpKeyFrame::ForcedCameraRotation)
  ;
}