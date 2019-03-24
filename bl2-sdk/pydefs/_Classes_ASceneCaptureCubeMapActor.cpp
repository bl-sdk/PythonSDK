#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASceneCaptureCubeMapActor(py::module &m)
{
    py::class_< ASceneCaptureCubeMapActor,  ASceneCaptureActor   >(m, "ASceneCaptureCubeMapActor")
		.def_static("StaticClass", &ASceneCaptureCubeMapActor::StaticClass, py::return_value_policy::reference)
        .def_readwrite("StaticMesh", &ASceneCaptureCubeMapActor::StaticMesh)
        .def_readwrite("CubeMaterialInst", &ASceneCaptureCubeMapActor::CubeMaterialInst)
          ;
}