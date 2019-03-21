#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAkComponent()
{
    class_< UWillowAkComponent, bases< UAkComponent >  , boost::noncopyable>("UWillowAkComponent", no_init)
        .def_readwrite("DistanceRTPCRefCount", &UWillowAkComponent::DistanceRTPCRefCount)
        .def_readwrite("SpeedRTPCRefCount", &UWillowAkComponent::SpeedRTPCRefCount)
        .def_readwrite("ApproachSpeedRTPCRefCount", &UWillowAkComponent::ApproachSpeedRTPCRefCount)
        .def_readwrite("CustomVelocity", &UWillowAkComponent::CustomVelocity)
        .def("StaticClass", &UWillowAkComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}