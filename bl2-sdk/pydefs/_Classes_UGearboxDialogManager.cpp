#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogManager(py::object m)
{
    py::class_< UGearboxDialogManager,  UObject   >(m, "UGearboxDialogManager")
        .def_readwrite("Talkers", &UGearboxDialogManager::Talkers)
        .def_readwrite("DisabledTalkers", &UGearboxDialogManager::DisabledTalkers)
        .def_readwrite("Groups", &UGearboxDialogManager::Groups)
        .def_readwrite("CurrentEventContext", &UGearboxDialogManager::CurrentEventContext)
        .def_readwrite("GroupEventTagMap", &UGearboxDialogManager::GroupEventTagMap)
        .def_readwrite("EventDataPool", &UGearboxDialogManager::EventDataPool)
        .def_readwrite("EventDataClassPath", &UGearboxDialogManager::EventDataClassPath)
        .def_readwrite("EventDataClass", &UGearboxDialogManager::EventDataClass)
        .def("StaticClass", &UGearboxDialogManager::StaticClass, py::return_value_policy::reference)
        .def("DrawDialogDebug", &UGearboxDialogManager::DrawDialogDebug)
        .def("CheckpointRemoveReferencesBeforeDestroy", &UGearboxDialogManager::CheckpointRemoveReferencesBeforeDestroy)
        .def("GetEventTagForEventInfo", &UGearboxDialogManager::GetEventTagForEventInfo, py::return_value_policy::reference)
        .def("TriggerGroupEvent", &UGearboxDialogManager::TriggerGroupEvent, py::return_value_policy::reference)
        .def("Cleanup", &UGearboxDialogManager::Cleanup)
        .def("SetGroupEventTag", &UGearboxDialogManager::SetGroupEventTag)
        .def("GetGroupEventTag", &UGearboxDialogManager::GetGroupEventTag, py::return_value_policy::reference)
        .def("SilenceGroup", &UGearboxDialogManager::SilenceGroup)
        .def("AddGroup", &UGearboxDialogManager::AddGroup)
        .def("UnregisterTalker", &UGearboxDialogManager::UnregisterTalker)
        .def("RegisterTalker", &UGearboxDialogManager::RegisterTalker)
        .def("DisableTalker", &UGearboxDialogManager::DisableTalker)
        .def("EnableTalker", &UGearboxDialogManager::EnableTalker)
        .def("GetPriority", &UGearboxDialogManager::GetPriority)
          ;
}