#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AKActorPizazz()
{
    py::class_< AKActorPizazz,  AKActor   >("AKActorPizazz")
        .def_readwrite("ReplicatedImpulse", &AKActorPizazz::ReplicatedImpulse)
        .def("StaticClass", &AKActorPizazz::StaticClass, py::return_value_policy::reference)
        .def("ApplyReplicatedImpulse", &AKActorPizazz::ApplyReplicatedImpulse)
        .def("eventReplicatedEvent", &AKActorPizazz::eventReplicatedEvent)
        .def("ResetComponents", &AKActorSpawnable::ResetComponents)
        .def("eventRecycleInternal", &AKActorSpawnable::eventRecycleInternal)
        .def("Recycle", &AKActorSpawnable::Recycle)
        .def("initialize", &AKActorSpawnable::initialize)
        .staticmethod("StaticClass")
  ;
}