#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowDialogEchoActor(py::module &m)
{
    py::class_< AWillowDialogEchoActor,  AActor   >(m, "AWillowDialogEchoActor")
        .def_readwrite("VfTable_IGearboxDialogInterface", &AWillowDialogEchoActor::VfTable_IGearboxDialogInterface)
        .def_readwrite("NameTag", &AWillowDialogEchoActor::NameTag)
        .def_readwrite("DialogComponent", &AWillowDialogEchoActor::DialogComponent)
        .def_readwrite("DialogReplicatedData", &AWillowDialogEchoActor::DialogReplicatedData)
        .def("SetDialogNameTag", &AWillowDialogEchoActor::SetDialogNameTag)
        .def("GetReplicatedDialogData", &AWillowDialogEchoActor::GetReplicatedDialogData)
        .def("SetReplicatedDialogData", &AWillowDialogEchoActor::SetReplicatedDialogData)
        .def("GetDialogGroups", &AWillowDialogEchoActor::GetDialogGroups)
        .def("GetDialogComponent", &AWillowDialogEchoActor::GetDialogComponent, py::return_value_policy::reference)
        .def("GetDialogNameTag", &AWillowDialogEchoActor::GetDialogNameTag, py::return_value_policy::reference)
        .def("GetActor", &AWillowDialogEchoActor::GetActor, py::return_value_policy::reference)
        .def("CanTalk", &AWillowDialogEchoActor::CanTalk)
        .def("eventServerDialog_TriggerEvent", &AWillowDialogEchoActor::eventServerDialog_TriggerEvent)
        .def("eventReplicatedEvent", &AWillowDialogEchoActor::eventReplicatedEvent)
          ;
}