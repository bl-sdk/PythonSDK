#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APortalTeleporter()
{
    class_< APortalTeleporter, bases< AActor >  , boost::noncopyable>("APortalTeleporter", no_init)
        .def_readwrite("SisterPortal", &APortalTeleporter::SisterPortal)
        .def_readwrite("TextureResolutionX", &APortalTeleporter::TextureResolutionX)
        .def_readwrite("TextureResolutionY", &APortalTeleporter::TextureResolutionY)
        .def_readwrite("MyMarker", &APortalTeleporter::MyMarker)
        .def_readwrite("StaticMesh", &ASceneCaptureReflectActor::StaticMesh)
        .def_readwrite("ReflectMaterialInst", &ASceneCaptureReflectActor::ReflectMaterialInst)
        .def_readwrite("SceneCapture", &ASceneCaptureActor::SceneCapture)
        .def("StaticClass", &APortalTeleporter::StaticClass, return_value_policy< reference_existing_object >())
        .def("StopsProjectile", &APortalTeleporter::StopsProjectile)
        .def("CreatePortalTexture", &APortalTeleporter::CreatePortalTexture, return_value_policy< reference_existing_object >())
        .def("TransformHitLocation", &APortalTeleporter::TransformHitLocation)
        .def("TransformVectorDir", &APortalTeleporter::TransformVectorDir)
        .def("TransformActor", &APortalTeleporter::TransformActor)
        .def("OnToggle", &ASceneCaptureActor::OnToggle)
        .staticmethod("StaticClass")
  ;
}