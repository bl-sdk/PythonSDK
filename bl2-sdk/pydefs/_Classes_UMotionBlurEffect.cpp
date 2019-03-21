#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMotionBlurEffect()
{
    class_< UMotionBlurEffect, bases< UPostProcessEffect >  , boost::noncopyable>("UMotionBlurEffect", no_init)
        .def_readwrite("MaxVelocity", &UMotionBlurEffect::MaxVelocity)
        .def_readwrite("MotionBlurAmount", &UMotionBlurEffect::MotionBlurAmount)
        .def_readwrite("CameraRotationThreshold", &UMotionBlurEffect::CameraRotationThreshold)
        .def_readwrite("CameraTranslationThreshold", &UMotionBlurEffect::CameraTranslationThreshold)
        .def("StaticClass", &UMotionBlurEffect::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}