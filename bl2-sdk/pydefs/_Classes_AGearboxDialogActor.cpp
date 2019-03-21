#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AGearboxDialogActor(py::object m)
{
    py::class_< AGearboxDialogActor,  AActor   >(m, "AGearboxDialogActor")
        .def_readwrite("VfTable_IGearboxDialogInterface", &AGearboxDialogActor::VfTable_IGearboxDialogInterface)
        .def_readwrite("DialogGroups", &AGearboxDialogActor::DialogGroups)
        .def_readwrite("NameTag", &AGearboxDialogActor::NameTag)
        .def_readwrite("EditorSprite", &AGearboxDialogActor::EditorSprite)
        .def_readwrite("DialogComponent", &AGearboxDialogActor::DialogComponent)
        .def_readwrite("DialogReplicatedData", &AGearboxDialogActor::DialogReplicatedData)
        .def_readwrite("CurrentNameTag", &AGearboxDialogActor::CurrentNameTag)
        .def("StaticClass", &AGearboxDialogActor::StaticClass, py::return_value_policy::reference)
        .def("SetDialogNameTag", &AGearboxDialogActor::SetDialogNameTag)
        .def("GetReplicatedDialogData", &AGearboxDialogActor::GetReplicatedDialogData)
        .def("SetReplicatedDialogData", &AGearboxDialogActor::SetReplicatedDialogData)
        .def("GetDialogGroups", &AGearboxDialogActor::GetDialogGroups)
        .def("GetDialogComponent", &AGearboxDialogActor::GetDialogComponent, py::return_value_policy::reference)
        .def("GetDialogNameTag", &AGearboxDialogActor::GetDialogNameTag, py::return_value_policy::reference)
        .def("GetActor", &AGearboxDialogActor::GetActor, py::return_value_policy::reference)
        .def("CanTalk", &AGearboxDialogActor::CanTalk)
        .def("eventServerDialog_TriggerEvent", &AGearboxDialogActor::eventServerDialog_TriggerEvent)
        .def("eventReplicatedEvent", &AGearboxDialogActor::eventReplicatedEvent)
          ;
}