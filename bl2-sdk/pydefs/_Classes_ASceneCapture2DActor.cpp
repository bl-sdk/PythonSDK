#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASceneCapture2DActor()
{
    py::class_< ASceneCapture2DActor,  ASceneCaptureActor   >("ASceneCapture2DActor")
        .def_readwrite("DrawFrustum", &ASceneCapture2DActor::DrawFrustum)
        .def("StaticClass", &ASceneCapture2DActor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}