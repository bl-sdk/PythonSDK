#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USceneCapture2DComponent(py::module &m)
{
    py::class_< USceneCapture2DComponent,  USceneCaptureComponent   >(m, "USceneCapture2DComponent")
        .def_readwrite("TextureTarget", &USceneCapture2DComponent::TextureTarget)
        .def_readwrite("FieldOfView", &USceneCapture2DComponent::FieldOfView)
        .def_readwrite("NearPlane", &USceneCapture2DComponent::NearPlane)
        .def_readwrite("FarPlane", &USceneCapture2DComponent::FarPlane)
        .def_readwrite("ViewMatrix", &USceneCapture2DComponent::ViewMatrix)
        .def_readwrite("ProjMatrix", &USceneCapture2DComponent::ProjMatrix)
        .def("SetView", &USceneCapture2DComponent::SetView)
        .def("SetCaptureParameters", &USceneCapture2DComponent::SetCaptureParameters)
          ;
}