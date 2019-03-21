#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AKActorFromStatic()
{
    py::class_< AKActorFromStatic,  AKActor   >("AKActorFromStatic")
        .def_readwrite("MyStaticMeshActor", &AKActorFromStatic::MyStaticMeshActor)
        .def_readwrite("MaxImpulseSpeed", &AKActorFromStatic::MaxImpulseSpeed)
        .def("StaticClass", &AKActorFromStatic::StaticClass, py::return_value_policy::reference)
        .def("TakeRadiusDamage", &AKActorFromStatic::TakeRadiusDamage)
        .def("eventTouch", &AKActorFromStatic::eventTouch)
        .def("eventBump", &AKActorFromStatic::eventBump)
        .def("ReceiveImpulse", &AKActorFromStatic::ReceiveImpulse)
        .def("eventApplyImpulse", &AKActorFromStatic::eventApplyImpulse)
        .def("MakeDynamic", &AKActorFromStatic::MakeDynamic, py::return_value_policy::reference)
        .def("MakeStatic", &AKActorFromStatic::MakeStatic)
        .def("BecomeStatic", &AKActorFromStatic::BecomeStatic)
        .def("eventOnWakeRBPhysics", &AKActorFromStatic::eventOnWakeRBPhysics)
        .def("eventOnSleepRBPhysics", &AKActorFromStatic::eventOnSleepRBPhysics)
        .def("DisablePrecomputedLighting", &AKActorFromStatic::DisablePrecomputedLighting)
        .staticmethod("StaticClass")
  ;
}