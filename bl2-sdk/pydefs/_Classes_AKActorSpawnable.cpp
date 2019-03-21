#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AKActorSpawnable()
{
    class_< AKActorSpawnable, bases< AKActor >  , boost::noncopyable>("AKActorSpawnable", no_init)
        .def("StaticClass", &AKActorSpawnable::StaticClass, return_value_policy< reference_existing_object >())
        .def("ResetComponents", &AKActorSpawnable::ResetComponents)
        .def("eventRecycleInternal", &AKActorSpawnable::eventRecycleInternal)
        .def("Recycle", &AKActorSpawnable::Recycle)
        .def("initialize", &AKActorSpawnable::initialize)
        .def("eventReplicatedEvent", &AKActorSpawnable::eventReplicatedEvent)
        .staticmethod("StaticClass")
  ;
}