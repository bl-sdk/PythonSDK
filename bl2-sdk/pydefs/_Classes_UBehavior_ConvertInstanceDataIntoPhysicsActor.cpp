#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ConvertInstanceDataIntoPhysicsActor(py::object m)
{
    py::class_< UBehavior_ConvertInstanceDataIntoPhysicsActor,  UBehaviorBase   >(m, "UBehavior_ConvertInstanceDataIntoPhysicsActor")
        .def_readwrite("DetachImpulse", &UBehavior_ConvertInstanceDataIntoPhysicsActor::DetachImpulse)
        .def_readwrite("ImpulseSourceLocation", &UBehavior_ConvertInstanceDataIntoPhysicsActor::ImpulseSourceLocation)
        .def_readwrite("PhysicsActorLifeTime", &UBehavior_ConvertInstanceDataIntoPhysicsActor::PhysicsActorLifeTime)
        .def_readwrite("MinRelevantDistance", &UBehavior_ConvertInstanceDataIntoPhysicsActor::MinRelevantDistance)
        .def("StaticClass", &UBehavior_ConvertInstanceDataIntoPhysicsActor::StaticClass, py::return_value_policy::reference)
        .def("PublishBehaviorOutput", &UBehavior_ConvertInstanceDataIntoPhysicsActor::PublishBehaviorOutput)
        .def("RemoveInstanceDataComponent", &UBehavior_ConvertInstanceDataIntoPhysicsActor::RemoveInstanceDataComponent)
        .def("ConvertInstanceDataToPhysicsActor", &UBehavior_ConvertInstanceDataIntoPhysicsActor::ConvertInstanceDataToPhysicsActor, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ConvertInstanceDataIntoPhysicsActor::ApplyBehaviorToContext)
          ;
}