#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADynamicCameraActor(py::module &m)
{
    py::class_< ADynamicCameraActor,  AActor   >(m, "ADynamicCameraActor")
        .def_readwrite("AspectRatio", &ACameraActor::AspectRatio)
        .def_readwrite("FOVAngle", &ACameraActor::FOVAngle)
        .def_readwrite("CamOverridePostProcessAlpha", &ACameraActor::CamOverridePostProcessAlpha)
        .def_readwrite("CamOverridePostProcess", &ACameraActor::CamOverridePostProcess)
        .def_readwrite("DrawFrustum", &ACameraActor::DrawFrustum)
        .def_readwrite("MeshComp", &ACameraActor::MeshComp)
        .def("StaticClass", &ADynamicCameraActor::StaticClass, py::return_value_policy::reference)
        .def("GetCameraView", &ACameraActor::GetCameraView)
          ;
}