#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USceneCaptureCubeMapComponent()
{
    class_< USceneCaptureCubeMapComponent, bases< USceneCaptureComponent >  , boost::noncopyable>("USceneCaptureCubeMapComponent", no_init)
        .def_readwrite("TextureTarget", &USceneCaptureCubeMapComponent::TextureTarget)
        .def_readwrite("NearPlane", &USceneCaptureCubeMapComponent::NearPlane)
        .def_readwrite("FarPlane", &USceneCaptureCubeMapComponent::FarPlane)
        .def_readwrite("WorldLocation", &USceneCaptureCubeMapComponent::WorldLocation)
        .def("StaticClass", &USceneCaptureCubeMapComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}