#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxDialogManager()
{
    class_< UGearboxDialogManager, bases< UObject >  , boost::noncopyable>("UGearboxDialogManager", no_init)
        .def_readwrite("Talkers", &UGearboxDialogManager::Talkers)
        .def_readwrite("DisabledTalkers", &UGearboxDialogManager::DisabledTalkers)
        .def_readwrite("Groups", &UGearboxDialogManager::Groups)
        .def_readwrite("CurrentEventContext", &UGearboxDialogManager::CurrentEventContext)
        .def_readwrite("GroupEventTagMap", &UGearboxDialogManager::GroupEventTagMap)
        .def_readwrite("EventDataPool", &UGearboxDialogManager::EventDataPool)
        .def_readwrite("EventDataClassPath", &UGearboxDialogManager::EventDataClassPath)
        .def_readwrite("EventDataClass", &UGearboxDialogManager::EventDataClass)
        .def("StaticClass", &UGearboxDialogManager::StaticClass, return_value_policy< reference_existing_object >())
        .def("DrawDialogDebug", &UGearboxDialogManager::DrawDialogDebug)
        .def("CheckpointRemoveReferencesBeforeDestroy", &UGearboxDialogManager::CheckpointRemoveReferencesBeforeDestroy)
        .def("GetEventTagForEventInfo", &UGearboxDialogManager::GetEventTagForEventInfo, return_value_policy< reference_existing_object >())
        .def("TriggerGroupEvent", &UGearboxDialogManager::TriggerGroupEvent, return_value_policy< reference_existing_object >())
        .def("Cleanup", &UGearboxDialogManager::Cleanup)
        .def("SetGroupEventTag", &UGearboxDialogManager::SetGroupEventTag)
        .def("GetGroupEventTag", &UGearboxDialogManager::GetGroupEventTag, return_value_policy< reference_existing_object >())
        .def("SilenceGroup", &UGearboxDialogManager::SilenceGroup)
        .def("AddGroup", &UGearboxDialogManager::AddGroup)
        .def("UnregisterTalker", &UGearboxDialogManager::UnregisterTalker)
        .def("RegisterTalker", &UGearboxDialogManager::RegisterTalker)
        .def("DisableTalker", &UGearboxDialogManager::DisableTalker)
        .def("EnableTalker", &UGearboxDialogManager::EnableTalker)
        .def("GetPriority", &UGearboxDialogManager::GetPriority)
        .staticmethod("StaticClass")
  ;
}