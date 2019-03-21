#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AKActorPizazz()
{
    class_< AKActorPizazz, bases< AKActor >  , boost::noncopyable>("AKActorPizazz", no_init)
        .def_readwrite("ReplicatedImpulse", &AKActorPizazz::ReplicatedImpulse)
        .def("StaticClass", &AKActorPizazz::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyReplicatedImpulse", &AKActorPizazz::ApplyReplicatedImpulse)
        .def("eventReplicatedEvent", &AKActorPizazz::eventReplicatedEvent)
        .def("ResetComponents", &AKActorSpawnable::ResetComponents)
        .def("eventRecycleInternal", &AKActorSpawnable::eventRecycleInternal)
        .def("Recycle", &AKActorSpawnable::Recycle)
        .def("initialize", &AKActorSpawnable::initialize)
        .staticmethod("StaticClass")
  ;
}