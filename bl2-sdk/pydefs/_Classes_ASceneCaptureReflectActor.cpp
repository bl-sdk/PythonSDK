#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ASceneCaptureReflectActor()
{
    class_< ASceneCaptureReflectActor, bases< AActor >  , boost::noncopyable>("ASceneCaptureReflectActor", no_init)
        .def_readwrite("StaticMesh", &ASceneCaptureReflectActor::StaticMesh)
        .def_readwrite("ReflectMaterialInst", &ASceneCaptureReflectActor::ReflectMaterialInst)
        .def_readwrite("SceneCapture", &ASceneCaptureActor::SceneCapture)
        .def("StaticClass", &ASceneCaptureReflectActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnToggle", &ASceneCaptureActor::OnToggle)
        .staticmethod("StaticClass")
  ;
}