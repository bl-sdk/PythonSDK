#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowEmit_BodyFlame()
{
    class_< AWillowEmit_BodyFlame, bases< AWillowReplicatedEmitter >  , boost::noncopyable>("AWillowEmit_BodyFlame", no_init)
        .def_readwrite("BoneName", &AWillowEmit_HitEffect::BoneName)
        .def("StaticClass", &AWillowEmit_BodyFlame::StaticClass, return_value_policy< reference_existing_object >())
        .def("AttachTo", &AWillowEmit_HitEffect::AttachTo)
        .def("eventReplicatedEvent", &AWillowEmit_HitEffect::eventReplicatedEvent)
        .staticmethod("StaticClass")
  ;
}