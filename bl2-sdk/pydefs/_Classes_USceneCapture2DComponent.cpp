#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USceneCapture2DComponent()
{
    class_< USceneCapture2DComponent, bases< USceneCaptureComponent >  , boost::noncopyable>("USceneCapture2DComponent", no_init)
        .def_readwrite("TextureTarget", &USceneCapture2DComponent::TextureTarget)
        .def_readwrite("FieldOfView", &USceneCapture2DComponent::FieldOfView)
        .def_readwrite("NearPlane", &USceneCapture2DComponent::NearPlane)
        .def_readwrite("FarPlane", &USceneCapture2DComponent::FarPlane)
        .def_readonly("UnknownData00", &USceneCapture2DComponent::UnknownData00)
        .def_readwrite("ViewMatrix", &USceneCapture2DComponent::ViewMatrix)
        .def_readwrite("ProjMatrix", &USceneCapture2DComponent::ProjMatrix)
        .def("StaticClass", &USceneCapture2DComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetView", &USceneCapture2DComponent::SetView)
        .def("SetCaptureParameters", &USceneCapture2DComponent::SetCaptureParameters)
        .staticmethod("StaticClass")
  ;
}