#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASceneCaptureActor()
{
    py::class_< ASceneCaptureActor,  AActor   >("ASceneCaptureActor")
        .def_readwrite("SceneCapture", &ASceneCaptureActor::SceneCapture)
        .def("StaticClass", &ASceneCaptureActor::StaticClass, py::return_value_policy::reference)
        .def("OnToggle", &ASceneCaptureActor::OnToggle)
        .staticmethod("StaticClass")
  ;
}