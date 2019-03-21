#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FThirdPersonMenuView(py::object m)
{
    py::class_< FThirdPersonMenuView >(m, "FThirdPersonMenuView")
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