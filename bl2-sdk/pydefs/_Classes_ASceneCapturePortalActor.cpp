#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASceneCapturePortalActor(py::module &m)
{
    py::class_< ASceneCapturePortalActor,  AActor   >(m, "ASceneCapturePortalActor")
        .def_readwrite("StaticMesh", &ASceneCaptureReflectActor::StaticMesh)
        .def_readwrite("ReflectMaterialInst", &ASceneCaptureReflectActor::ReflectMaterialInst)
        .def_readwrite("SceneCapture", &ASceneCaptureActor::SceneCapture)
        .def("StaticClass", &ASceneCapturePortalActor::StaticClass, py::return_value_policy::reference)
        .def("OnToggle", &ASceneCaptureActor::OnToggle)
          ;
}