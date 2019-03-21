#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AGearboxDialogActor()
{
    class_< AGearboxDialogActor, bases< AActor >  , boost::noncopyable>("AGearboxDialogActor", no_init)
        .def_readwrite("VfTable_IGearboxDialogInterface", &AGearboxDialogActor::VfTable_IGearboxDialogInterface)
        .def_readwrite("DialogGroups", &AGearboxDialogActor::DialogGroups)
        .def_readwrite("NameTag", &AGearboxDialogActor::NameTag)
        .def_readwrite("EditorSprite", &AGearboxDialogActor::EditorSprite)
        .def_readwrite("DialogComponent", &AGearboxDialogActor::DialogComponent)
        .def_readwrite("DialogReplicatedData", &AGearboxDialogActor::DialogReplicatedData)
        .def_readwrite("CurrentNameTag", &AGearboxDialogActor::CurrentNameTag)
        .def("StaticClass", &AGearboxDialogActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetDialogNameTag", &AGearboxDialogActor::SetDialogNameTag)
        .def("GetReplicatedDialogData", &AGearboxDialogActor::GetReplicatedDialogData)
        .def("SetReplicatedDialogData", &AGearboxDialogActor::SetReplicatedDialogData)
        .def("GetDialogGroups", &AGearboxDialogActor::GetDialogGroups)
        .def("GetDialogComponent", &AGearboxDialogActor::GetDialogComponent, return_value_policy< reference_existing_object >())
        .def("GetDialogNameTag", &AGearboxDialogActor::GetDialogNameTag, return_value_policy< reference_existing_object >())
        .def("GetActor", &AGearboxDialogActor::GetActor, return_value_policy< reference_existing_object >())
        .def("CanTalk", &AGearboxDialogActor::CanTalk)
        .def("eventServerDialog_TriggerEvent", &AGearboxDialogActor::eventServerDialog_TriggerEvent)
        .def("eventReplicatedEvent", &AGearboxDialogActor::eventReplicatedEvent)
        .staticmethod("StaticClass")
  ;
}