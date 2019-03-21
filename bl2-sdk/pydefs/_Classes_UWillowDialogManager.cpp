#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDialogManager()
{
    class_< UWillowDialogManager, bases< UGearboxDialogManager >  , boost::noncopyable>("UWillowDialogManager", no_init)
        .def_readwrite("EchoActor", &UWillowDialogManager::EchoActor)
        .def_readwrite("EchoEmote", &UWillowDialogManager::EchoEmote)
        .def_readwrite("PureEchoActors", &UWillowDialogManager::PureEchoActors)
        .def_readwrite("QueuedPersonalEcho", &UWillowDialogManager::QueuedPersonalEcho)
        .def("StaticClass", &UWillowDialogManager::StaticClass, return_value_policy< reference_existing_object >())
        .def("PlayPersonalEchoLog", &UWillowDialogManager::PlayPersonalEchoLog)
        .def("IsMissionKickoffPlaying", &UWillowDialogManager::IsMissionKickoffPlaying)
        .def("GetPriorityForEchoActor", &UWillowDialogManager::GetPriorityForEchoActor)
        .def("Cleanup", &UWillowDialogManager::Cleanup)
        .def("PlayEchoDialog", &UWillowDialogManager::PlayEchoDialog)
        .staticmethod("StaticClass")
  ;
}