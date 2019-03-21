#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ASceneCaptureCubeMapActor()
{
    class_< ASceneCaptureCubeMapActor, bases< ASceneCaptureActor >  , boost::noncopyable>("ASceneCaptureCubeMapActor", no_init)
        .def_readwrite("StaticMesh", &ASceneCaptureCubeMapActor::StaticMesh)
        .def_readwrite("CubeMaterialInst", &ASceneCaptureCubeMapActor::CubeMaterialInst)
        .def("StaticClass", &ASceneCaptureCubeMapActor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}