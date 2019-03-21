#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ConvertInstanceDataIntoPhysicsActor()
{
    class_< UBehavior_ConvertInstanceDataIntoPhysicsActor, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ConvertInstanceDataIntoPhysicsActor", no_init)
        .def_readwrite("DetachImpulse", &UBehavior_ConvertInstanceDataIntoPhysicsActor::DetachImpulse)
        .def_readwrite("ImpulseSourceLocation", &UBehavior_ConvertInstanceDataIntoPhysicsActor::ImpulseSourceLocation)
        .def_readwrite("PhysicsActorLifeTime", &UBehavior_ConvertInstanceDataIntoPhysicsActor::PhysicsActorLifeTime)
        .def_readwrite("MinRelevantDistance", &UBehavior_ConvertInstanceDataIntoPhysicsActor::MinRelevantDistance)
        .def("StaticClass", &UBehavior_ConvertInstanceDataIntoPhysicsActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("PublishBehaviorOutput", &UBehavior_ConvertInstanceDataIntoPhysicsActor::PublishBehaviorOutput)
        .def("RemoveInstanceDataComponent", &UBehavior_ConvertInstanceDataIntoPhysicsActor::RemoveInstanceDataComponent)
        .def("ConvertInstanceDataToPhysicsActor", &UBehavior_ConvertInstanceDataIntoPhysicsActor::ConvertInstanceDataToPhysicsActor, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ConvertInstanceDataIntoPhysicsActor::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}