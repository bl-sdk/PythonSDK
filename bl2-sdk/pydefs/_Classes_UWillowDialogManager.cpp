#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDialogManager(py::module &m)
{
    py::class_< UWillowDialogManager,  UGearboxDialogManager   >(m, "UWillowDialogManager")
		.def_static("StaticClass", &UWillowDialogManager::StaticClass, py::return_value_policy::reference)
        .def_readwrite("EchoActor", &UWillowDialogManager::EchoActor)
        .def_readwrite("EchoEmote", &UWillowDialogManager::EchoEmote)
        .def_readwrite("PureEchoActors", &UWillowDialogManager::PureEchoActors)
        .def_readwrite("QueuedPersonalEcho", &UWillowDialogManager::QueuedPersonalEcho)
        .def("PlayPersonalEchoLog", &UWillowDialogManager::PlayPersonalEchoLog)
        .def("IsMissionKickoffPlaying", &UWillowDialogManager::IsMissionKickoffPlaying)
        .def("GetPriorityForEchoActor", &UWillowDialogManager::GetPriorityForEchoActor)
        .def("Cleanup", &UWillowDialogManager::Cleanup)
        .def("PlayEchoDialog", &UWillowDialogManager::PlayEchoDialog)
          ;
}