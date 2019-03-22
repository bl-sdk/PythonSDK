#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APortalTeleporter(py::module &m)
{
    py::class_< APortalTeleporter,  AActor   >(m, "APortalTeleporter")
        .def_readwrite("SisterPortal", &APortalTeleporter::SisterPortal)
        .def_readwrite("TextureResolutionX", &APortalTeleporter::TextureResolutionX)
        .def_readwrite("TextureResolutionY", &APortalTeleporter::TextureResolutionY)
        .def_readwrite("MyMarker", &APortalTeleporter::MyMarker)
        .def_readwrite("StaticMesh", &ASceneCaptureReflectActor::StaticMesh)
        .def_readwrite("ReflectMaterialInst", &ASceneCaptureReflectActor::ReflectMaterialInst)
        .def_readwrite("SceneCapture", &ASceneCaptureActor::SceneCapture)
        .def("StaticClass", &APortalTeleporter::StaticClass, py::return_value_policy::reference)
        .def("StopsProjectile", &APortalTeleporter::StopsProjectile)
        .def("CreatePortalTexture", &APortalTeleporter::CreatePortalTexture, py::return_value_policy::reference)
        .def("TransformHitLocation", &APortalTeleporter::TransformHitLocation)
        .def("TransformVectorDir", &APortalTeleporter::TransformVectorDir)
        .def("TransformActor", &APortalTeleporter::TransformActor)
        .def("OnToggle", &ASceneCaptureActor::OnToggle)
          ;
}