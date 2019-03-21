#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowEmit_HitEffect()
{
    class_< AWillowEmit_HitEffect, bases< AWillowReplicatedEmitter >  , boost::noncopyable>("AWillowEmit_HitEffect", no_init)
        .def_readwrite("BoneName", &AWillowEmit_HitEffect::BoneName)
        .def("StaticClass", &AWillowEmit_HitEffect::StaticClass, return_value_policy< reference_existing_object >())
        .def("AttachTo", &AWillowEmit_HitEffect::AttachTo)
        .def("eventReplicatedEvent", &AWillowEmit_HitEffect::eventReplicatedEvent)
        .staticmethod("StaticClass")
  ;
}