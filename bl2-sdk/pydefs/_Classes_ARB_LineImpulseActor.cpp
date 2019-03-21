#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ARB_LineImpulseActor()
{
    class_< ARB_LineImpulseActor, bases< ARigidBodyBase >  , boost::noncopyable>("ARB_LineImpulseActor", no_init)
        .def_readwrite("ImpulseStrength", &ARB_LineImpulseActor::ImpulseStrength)
        .def_readwrite("ImpulseRange", &ARB_LineImpulseActor::ImpulseRange)
        .def_readwrite("Arrow", &ARB_LineImpulseActor::Arrow)
        .def_readwrite("ImpulseCount", &ARB_LineImpulseActor::ImpulseCount)
        .def("StaticClass", &ARB_LineImpulseActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventReplicatedEvent", &ARB_LineImpulseActor::eventReplicatedEvent)
        .def("OnToggle", &ARB_LineImpulseActor::OnToggle)
        .def("FireLineImpulse", &ARB_LineImpulseActor::FireLineImpulse)
        .staticmethod("StaticClass")
  ;
}