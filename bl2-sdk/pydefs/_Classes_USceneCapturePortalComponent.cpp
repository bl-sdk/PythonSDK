#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USceneCapturePortalComponent()
{
    class_< USceneCapturePortalComponent, bases< USceneCaptureComponent >  , boost::noncopyable>("USceneCapturePortalComponent", no_init)
        .def_readwrite("TextureTarget", &USceneCapturePortalComponent::TextureTarget)
        .def_readwrite("ScaleFOV", &USceneCapturePortalComponent::ScaleFOV)
        .def_readwrite("ViewDestination", &USceneCapturePortalComponent::ViewDestination)
        .def("StaticClass", &USceneCapturePortalComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetCaptureParameters", &USceneCapturePortalComponent::SetCaptureParameters)
        .staticmethod("StaticClass")
  ;
}