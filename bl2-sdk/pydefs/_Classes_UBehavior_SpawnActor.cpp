#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnActor()
{
    class_< UBehavior_SpawnActor, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SpawnActor", no_init)
        .def_readwrite("SavedReferenceName", &UBehavior_SpawnActor::SavedReferenceName)
        .def_readwrite("InstanceDataContext", &UBehavior_SpawnActor::InstanceDataContext)
        .def_readwrite("ActorTemplate", &UBehavior_SpawnActor::ActorTemplate)
        .def_readwrite("AttachmentPointName", &UBehavior_SpawnActor::AttachmentPointName)
        .def_readwrite("RelativeLocation", &UBehavior_SpawnActor::RelativeLocation)
        .def_readwrite("RelativeRotation", &UBehavior_SpawnActor::RelativeRotation)
        .def_readwrite("SpawnDirection", &UBehavior_SpawnActor::SpawnDirection)
        .def("StaticClass", &UBehavior_SpawnActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SpawnActor::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}