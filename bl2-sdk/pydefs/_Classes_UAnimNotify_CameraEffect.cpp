#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNotify_CameraEffect()
{
    class_< UAnimNotify_CameraEffect, bases< UAnimNotify >  , boost::noncopyable>("UAnimNotify_CameraEffect", no_init)
        .def_readwrite("CameraLensEffect", &UAnimNotify_CameraEffect::CameraLensEffect)
        .def("StaticClass", &UAnimNotify_CameraEffect::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}