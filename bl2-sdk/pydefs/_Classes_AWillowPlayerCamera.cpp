#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowPlayerCamera()
{
    class_< AWillowPlayerCamera, bases< AGearboxCameraBasic >  , boost::noncopyable>("AWillowPlayerCamera", no_init)
        .def("StaticClass", &AWillowPlayerCamera::StaticClass, return_value_policy< reference_existing_object >())
        .def("UpdateViewTarget", &AWillowPlayerCamera::UpdateViewTarget)
        .def("PostBeginPlay", &AWillowPlayerCamera::PostBeginPlay)
        .staticmethod("StaticClass")
  ;
}