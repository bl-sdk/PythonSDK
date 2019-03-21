#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AEmitterSpawnable()
{
    class_< AEmitterSpawnable, bases< AEmitter >  , boost::noncopyable>("AEmitterSpawnable", no_init)
        .def_readwrite("ParticleTemplate", &AEmitterSpawnable::ParticleTemplate)
        .def("StaticClass", &AEmitterSpawnable::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventReplicatedEvent", &AEmitterSpawnable::eventReplicatedEvent)
        .def("eventSetTemplate", &AEmitterSpawnable::eventSetTemplate)
        .staticmethod("StaticClass")
  ;
}