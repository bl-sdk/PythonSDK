#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ARB_RadialImpulseActor()
{
    class_< ARB_RadialImpulseActor, bases< ARigidBodyBase >  , boost::noncopyable>("ARB_RadialImpulseActor", no_init)
        .def_readwrite("RenderComponent", &ARB_RadialImpulseActor::RenderComponent)
        .def_readwrite("ImpulseComponent", &ARB_RadialImpulseActor::ImpulseComponent)
        .def_readwrite("ImpulseCount", &ARB_RadialImpulseActor::ImpulseCount)
        .def("StaticClass", &ARB_RadialImpulseActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventReplicatedEvent", &ARB_RadialImpulseActor::eventReplicatedEvent)
        .def("OnToggle", &ARB_RadialImpulseActor::OnToggle)
        .staticmethod("StaticClass")
  ;
}