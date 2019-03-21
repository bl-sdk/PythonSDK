#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USceneCaptureComponent()
{
    class_< USceneCaptureComponent, bases< UActorComponent >  , boost::noncopyable>("USceneCaptureComponent", no_init)
        .def_readwrite("ClearColor", &USceneCaptureComponent::ClearColor)
        .def_readwrite("ViewMode", &USceneCaptureComponent::ViewMode)
        .def_readwrite("SceneLOD", &USceneCaptureComponent::SceneLOD)
        .def_readwrite("FrameRate", &USceneCaptureComponent::FrameRate)
        .def_readwrite("PostProcess", &USceneCaptureComponent::PostProcess)
        .def_readwrite("MaxUpdateDist", &USceneCaptureComponent::MaxUpdateDist)
        .def_readwrite("MaxViewDistanceOverride", &USceneCaptureComponent::MaxViewDistanceOverride)
        .def_readwrite("MaxStreamingUpdateDist", &USceneCaptureComponent::MaxStreamingUpdateDist)
        .def_readwrite("CaptureInfo", &USceneCaptureComponent::CaptureInfo)
        .def_readwrite("ViewState", &USceneCaptureComponent::ViewState)
        .def_readwrite("PostProcessProxies", &USceneCaptureComponent::PostProcessProxies)
        .def("StaticClass", &USceneCaptureComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetEnabled", &USceneCaptureComponent::SetEnabled)
        .def("SetFrameRate", &USceneCaptureComponent::SetFrameRate)
        .staticmethod("StaticClass")
  ;
}