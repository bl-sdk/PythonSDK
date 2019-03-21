#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ASceneCaptureActor()
{
    class_< ASceneCaptureActor, bases< AActor >  , boost::noncopyable>("ASceneCaptureActor", no_init)
        .def_readwrite("SceneCapture", &ASceneCaptureActor::SceneCapture)
        .def("StaticClass", &ASceneCaptureActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnToggle", &ASceneCaptureActor::OnToggle)
        .staticmethod("StaticClass")
  ;
}