#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ASceneCapture2DActor()
{
    class_< ASceneCapture2DActor, bases< ASceneCaptureActor >  , boost::noncopyable>("ASceneCapture2DActor", no_init)
        .def_readwrite("DrawFrustum", &ASceneCapture2DActor::DrawFrustum)
        .def("StaticClass", &ASceneCapture2DActor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}