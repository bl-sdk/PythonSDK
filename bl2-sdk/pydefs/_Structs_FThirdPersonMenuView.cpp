#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FThirdPersonMenuView()
{
    class_< FThirdPersonMenuView >("FThirdPersonMenuView", no_init)
        .def_readwrite("RelativeCameraLocation", &FThirdPersonMenuView::RelativeCameraLocation)
        .def_readwrite("RelativeCameraRotation", &FThirdPersonMenuView::RelativeCameraRotation)
        .def_readwrite("RelativeMenuLocation", &FThirdPersonMenuView::RelativeMenuLocation)
        .def_readwrite("RelativeMenuRotation", &FThirdPersonMenuView::RelativeMenuRotation)
        .def_readwrite("CameraYawMin", &FThirdPersonMenuView::CameraYawMin)
        .def_readwrite("CameraYawMax", &FThirdPersonMenuView::CameraYawMax)
        .def_readwrite("VerticalSplitscreenCameraOffset", &FThirdPersonMenuView::VerticalSplitscreenCameraOffset)
        .def_readwrite("VerticalSplitscreenCameraSpread", &FThirdPersonMenuView::VerticalSplitscreenCameraSpread)
        .def_readwrite("FocusBoneName", &FThirdPersonMenuView::FocusBoneName)
        .def_readwrite("FocusScreenYaw", &FThirdPersonMenuView::FocusScreenYaw)
  ;
}