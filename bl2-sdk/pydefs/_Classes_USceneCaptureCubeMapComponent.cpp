#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USceneCaptureCubeMapComponent(py::module &m)
{
    py::class_< USceneCaptureCubeMapComponent,  USceneCaptureComponent   >(m, "USceneCaptureCubeMapComponent")
        .def_readwrite("TextureTarget", &USceneCaptureCubeMapComponent::TextureTarget)
        .def_readwrite("NearPlane", &USceneCaptureCubeMapComponent::NearPlane)
        .def_readwrite("FarPlane", &USceneCaptureCubeMapComponent::FarPlane)
        .def_readwrite("WorldLocation", &USceneCaptureCubeMapComponent::WorldLocation)
          ;
}