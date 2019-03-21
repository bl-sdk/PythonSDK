#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCameraModifier()
{
    class_< UCameraModifier, bases< UObject >  , boost::noncopyable>("UCameraModifier", no_init)
        .def_readwrite("CameraOwner", &UCameraModifier::CameraOwner)
        .def_readwrite("Priority", &UCameraModifier::Priority)
        .def_readwrite("AlphaInTime", &UCameraModifier::AlphaInTime)
        .def_readwrite("AlphaOutTime", &UCameraModifier::AlphaOutTime)
        .def_readwrite("Alpha", &UCameraModifier::Alpha)
        .def_readwrite("TargetAlpha", &UCameraModifier::TargetAlpha)
        .def("StaticClass", &UCameraModifier::StaticClass, return_value_policy< reference_existing_object >())
        .def("UpdateAlpha", &UCameraModifier::UpdateAlpha)
        .def("ProcessViewRotation", &UCameraModifier::ProcessViewRotation)
        .def("ToggleModifier", &UCameraModifier::ToggleModifier)
        .def("EnableModifier", &UCameraModifier::EnableModifier)
        .def("eventDisableModifier", &UCameraModifier::eventDisableModifier)
        .def("RemoveCameraModifier", &UCameraModifier::RemoveCameraModifier)
        .def("AddCameraModifier", &UCameraModifier::AddCameraModifier)
        .def("IsDisabled", &UCameraModifier::IsDisabled)
        .def("ModifyCamera", &UCameraModifier::ModifyCamera)
        .def("Init", &UCameraModifier::Init)
        .staticmethod("StaticClass")
  ;
}