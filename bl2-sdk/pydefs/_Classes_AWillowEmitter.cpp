#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowEmitter()
{
    class_< AWillowEmitter, bases< AEmitter >  , boost::noncopyable>("AWillowEmitter", no_init)
        .def_readwrite("NetCullDistanceSquared", &AWillowEmitter::NetCullDistanceSquared)
        .def("StaticClass", &AWillowEmitter::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetOwnerNoSeeEmitter", &AWillowEmitter::SetOwnerNoSeeEmitter)
        .def("eventReplicatedEvent", &AWillowEmitter::eventReplicatedEvent)
        .staticmethod("StaticClass")
  ;
}