#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_ParticleEvent()
{
    class_< USeqEvent_ParticleEvent, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_ParticleEvent", no_init)
        .def_readwrite("EventType", &USeqEvent_ParticleEvent::EventType)
        .def_readwrite("EventPosition", &USeqEvent_ParticleEvent::EventPosition)
        .def_readwrite("EventEmitterTime", &USeqEvent_ParticleEvent::EventEmitterTime)
        .def_readwrite("EventVelocity", &USeqEvent_ParticleEvent::EventVelocity)
        .def_readwrite("EventParticleTime", &USeqEvent_ParticleEvent::EventParticleTime)
        .def_readwrite("EventNormal", &USeqEvent_ParticleEvent::EventNormal)
        .def("StaticClass", &USeqEvent_ParticleEvent::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqEvent_ParticleEvent::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}