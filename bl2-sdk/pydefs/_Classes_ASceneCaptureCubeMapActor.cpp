#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASceneCaptureCubeMapActor()
{
    py::class_< ASceneCaptureCubeMapActor,  ASceneCaptureActor   >("ASceneCaptureCubeMapActor")
        .def_readwrite("StaticMesh", &ASceneCaptureCubeMapActor::StaticMesh)
        .def_readwrite("CubeMaterialInst", &ASceneCaptureCubeMapActor::CubeMaterialInst)
        .def("StaticClass", &ASceneCaptureCubeMapActor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}