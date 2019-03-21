#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCameraModifier_CameraShake()
{
    class_< UCameraModifier_CameraShake, bases< UCameraModifier >  , boost::noncopyable>("UCameraModifier_CameraShake", no_init)
        .def_readwrite("ActiveShakes", &UCameraModifier_CameraShake::ActiveShakes)
        .def_readwrite("SplitScreenShakeScale", &UCameraModifier_CameraShake::SplitScreenShakeScale)
        .def("StaticClass", &UCameraModifier_CameraShake::StaticClass, return_value_policy< reference_existing_object >())
        .def("ModifyCamera", &UCameraModifier_CameraShake::ModifyCamera)
        .def("UpdateCameraShake", &UCameraModifier_CameraShake::UpdateCameraShake)
        .def("RemoveAllCameraShakes", &UCameraModifier_CameraShake::RemoveAllCameraShakes)
        .def("RemoveCameraShake", &UCameraModifier_CameraShake::RemoveCameraShake)
        .def("AddCameraShake", &UCameraModifier_CameraShake::AddCameraShake)
        .def("InitializeShake", &UCameraModifier_CameraShake::InitializeShake)
        .def("ReinitShake", &UCameraModifier_CameraShake::ReinitShake)
        .def("InitializeOffset", &UCameraModifier_CameraShake::InitializeOffset)
        .staticmethod("StaticClass")
  ;
}