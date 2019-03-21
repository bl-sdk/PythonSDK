#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USceneCaptureReflectComponent()
{
    class_< USceneCaptureReflectComponent, bases< USceneCaptureComponent >  , boost::noncopyable>("USceneCaptureReflectComponent", no_init)
        .def_readwrite("TextureTarget", &USceneCaptureReflectComponent::TextureTarget)
        .def_readwrite("ScaleFOV", &USceneCaptureReflectComponent::ScaleFOV)
        .def("StaticClass", &USceneCaptureReflectComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}