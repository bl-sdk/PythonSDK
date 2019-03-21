#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USceneCaptureCubeMapComponent()
{
    py::class_< USceneCaptureCubeMapComponent,  USceneCaptureComponent   >("USceneCaptureCubeMapComponent")
        .def_readwrite("TextureTarget", &USceneCaptureCubeMapComponent::TextureTarget)
        .def_readwrite("NearPlane", &USceneCaptureCubeMapComponent::NearPlane)
        .def_readwrite("FarPlane", &USceneCaptureCubeMapComponent::FarPlane)
        .def_readwrite("WorldLocation", &USceneCaptureCubeMapComponent::WorldLocation)
        .def("StaticClass", &USceneCaptureCubeMapComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}