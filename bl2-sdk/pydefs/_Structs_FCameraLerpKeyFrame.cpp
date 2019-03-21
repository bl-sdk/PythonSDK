#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCameraLerpKeyFrame()
{
    class_< FCameraLerpKeyFrame >("FCameraLerpKeyFrame", no_init)
        .def_readwrite("Alpha", &FCameraLerpKeyFrame::Alpha)
        .def_readwrite("CameraTargetThisKeyFrame", &FCameraLerpKeyFrame::CameraTargetThisKeyFrame)
        .def_readwrite("CameraRotationBehavior", &FCameraLerpKeyFrame::CameraRotationBehavior)
        .def_readwrite("BaseCameraPosition", &FCameraLerpKeyFrame::BaseCameraPosition)
        .def_readwrite("CameraOffset", &FCameraLerpKeyFrame::CameraOffset)
        .def_readwrite("ForcedCameraRotation", &FCameraLerpKeyFrame::ForcedCameraRotation)
  ;
}