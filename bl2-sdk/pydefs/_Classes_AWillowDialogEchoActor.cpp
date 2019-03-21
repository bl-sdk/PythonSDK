#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowDialogEchoActor()
{
    class_< AWillowDialogEchoActor, bases< AActor >  , boost::noncopyable>("AWillowDialogEchoActor", no_init)
        .def_readwrite("VfTable_IGearboxDialogInterface", &AWillowDialogEchoActor::VfTable_IGearboxDialogInterface)
        .def_readwrite("NameTag", &AWillowDialogEchoActor::NameTag)
        .def_readwrite("DialogComponent", &AWillowDialogEchoActor::DialogComponent)
        .def_readwrite("DialogReplicatedData", &AWillowDialogEchoActor::DialogReplicatedData)
        .def("StaticClass", &AWillowDialogEchoActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetDialogNameTag", &AWillowDialogEchoActor::SetDialogNameTag)
        .def("GetReplicatedDialogData", &AWillowDialogEchoActor::GetReplicatedDialogData)
        .def("SetReplicatedDialogData", &AWillowDialogEchoActor::SetReplicatedDialogData)
        .def("GetDialogGroups", &AWillowDialogEchoActor::GetDialogGroups)
        .def("GetDialogComponent", &AWillowDialogEchoActor::GetDialogComponent, return_value_policy< reference_existing_object >())
        .def("GetDialogNameTag", &AWillowDialogEchoActor::GetDialogNameTag, return_value_policy< reference_existing_object >())
        .def("GetActor", &AWillowDialogEchoActor::GetActor, return_value_policy< reference_existing_object >())
        .def("CanTalk", &AWillowDialogEchoActor::CanTalk)
        .def("eventServerDialog_TriggerEvent", &AWillowDialogEchoActor::eventServerDialog_TriggerEvent)
        .def("eventReplicatedEvent", &AWillowDialogEchoActor::eventReplicatedEvent)
        .staticmethod("StaticClass")
  ;
}