#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ADynamicCameraActor()
{
    class_< ADynamicCameraActor, bases< AActor >  , boost::noncopyable>("ADynamicCameraActor", no_init)
        .def_readwrite("AspectRatio", &ACameraActor::AspectRatio)
        .def_readwrite("FOVAngle", &ACameraActor::FOVAngle)
        .def_readwrite("CamOverridePostProcessAlpha", &ACameraActor::CamOverridePostProcessAlpha)
        .def_readwrite("CamOverridePostProcess", &ACameraActor::CamOverridePostProcess)
        .def_readwrite("DrawFrustum", &ACameraActor::DrawFrustum)
        .def_readwrite("MeshComp", &ACameraActor::MeshComp)
        .def("StaticClass", &ADynamicCameraActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetCameraView", &ACameraActor::GetCameraView)
        .staticmethod("StaticClass")
  ;
}