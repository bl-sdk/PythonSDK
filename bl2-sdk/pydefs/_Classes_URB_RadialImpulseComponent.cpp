#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URB_RadialImpulseComponent()
{
    class_< URB_RadialImpulseComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("URB_RadialImpulseComponent", no_init)
        .def_readwrite("ImpulseFalloff", &URB_RadialImpulseComponent::ImpulseFalloff)
        .def_readwrite("ImpulseStrength", &URB_RadialImpulseComponent::ImpulseStrength)
        .def_readwrite("ImpulseRadius", &URB_RadialImpulseComponent::ImpulseRadius)
        .def_readwrite("PreviewSphere", &URB_RadialImpulseComponent::PreviewSphere)
        .def("StaticClass", &URB_RadialImpulseComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("FireImpulse", &URB_RadialImpulseComponent::FireImpulse)
        .staticmethod("StaticClass")
  ;
}