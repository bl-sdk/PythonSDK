#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AKActorFromStatic()
{
    class_< AKActorFromStatic, bases< AKActor >  , boost::noncopyable>("AKActorFromStatic", no_init)
        .def_readwrite("MyStaticMeshActor", &AKActorFromStatic::MyStaticMeshActor)
        .def_readwrite("MaxImpulseSpeed", &AKActorFromStatic::MaxImpulseSpeed)
        .def("StaticClass", &AKActorFromStatic::StaticClass, return_value_policy< reference_existing_object >())
        .def("TakeRadiusDamage", &AKActorFromStatic::TakeRadiusDamage)
        .def("eventTouch", &AKActorFromStatic::eventTouch)
        .def("eventBump", &AKActorFromStatic::eventBump)
        .def("ReceiveImpulse", &AKActorFromStatic::ReceiveImpulse)
        .def("eventApplyImpulse", &AKActorFromStatic::eventApplyImpulse)
        .def("MakeDynamic", &AKActorFromStatic::MakeDynamic, return_value_policy< reference_existing_object >())
        .def("MakeStatic", &AKActorFromStatic::MakeStatic)
        .def("BecomeStatic", &AKActorFromStatic::BecomeStatic)
        .def("eventOnWakeRBPhysics", &AKActorFromStatic::eventOnWakeRBPhysics)
        .def("eventOnSleepRBPhysics", &AKActorFromStatic::eventOnSleepRBPhysics)
        .def("DisablePrecomputedLighting", &AKActorFromStatic::DisablePrecomputedLighting)
        .staticmethod("StaticClass")
  ;
}