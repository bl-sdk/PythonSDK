#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASceneCaptureReflectActor(py::object m)
{
    py::class_< ASceneCaptureReflectActor,  AActor   >(m, "ASceneCaptureReflectActor")
        .def_readwrite("StaticMesh", &ASceneCaptureReflectActor::StaticMesh)
        .def_readwrite("ReflectMaterialInst", &ASceneCaptureReflectActor::ReflectMaterialInst)
        .def_readwrite("SceneCapture", &ASceneCaptureActor::SceneCapture)
        .def("StaticClass", &ASceneCaptureReflectActor::StaticClass, py::return_value_policy::reference)
        .def("OnToggle", &ASceneCaptureActor::OnToggle)
          ;
}