#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ASceneCapturePortalActor()
{
    class_< ASceneCapturePortalActor, bases< AActor >  , boost::noncopyable>("ASceneCapturePortalActor", no_init)
        .def_readwrite("StaticMesh", &ASceneCaptureReflectActor::StaticMesh)
        .def_readwrite("ReflectMaterialInst", &ASceneCaptureReflectActor::ReflectMaterialInst)
        .def_readwrite("SceneCapture", &ASceneCaptureActor::SceneCapture)
        .def("StaticClass", &ASceneCapturePortalActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnToggle", &ASceneCaptureActor::OnToggle)
        .staticmethod("StaticClass")
  ;
}