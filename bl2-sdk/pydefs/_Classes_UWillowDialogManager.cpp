#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDialogManager()
{
    py::class_< UWillowDialogManager,  UGearboxDialogManager   >("UWillowDialogManager")
        .def_readwrite("EchoActor", &UWillowDialogManager::EchoActor)
        .def_readwrite("EchoEmote", &UWillowDialogManager::EchoEmote)
        .def_readwrite("PureEchoActors", &UWillowDialogManager::PureEchoActors)
        .def_readwrite("QueuedPersonalEcho", &UWillowDialogManager::QueuedPersonalEcho)
        .def("StaticClass", &UWillowDialogManager::StaticClass, py::return_value_policy::reference)
        .def("PlayPersonalEchoLog", &UWillowDialogManager::PlayPersonalEchoLog)
        .def("IsMissionKickoffPlaying", &UWillowDialogManager::IsMissionKickoffPlaying)
        .def("GetPriorityForEchoActor", &UWillowDialogManager::GetPriorityForEchoActor)
        .def("Cleanup", &UWillowDialogManager::Cleanup)
        .def("PlayEchoDialog", &UWillowDialogManager::PlayEchoDialog)
        .staticmethod("StaticClass")
  ;
}