#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxDialogInterface()
{
    class_< UGearboxDialogInterface, bases< UInterface >  , boost::noncopyable>("UGearboxDialogInterface", no_init)
        .def("StaticClass", &UGearboxDialogInterface::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventServerDialog_TriggerEvent", &UGearboxDialogInterface::eventServerDialog_TriggerEvent)
        .def("SetDialogNameTag", &UGearboxDialogInterface::SetDialogNameTag)
        .def("GetReplicatedDialogData", &UGearboxDialogInterface::GetReplicatedDialogData)
        .def("SetReplicatedDialogData", &UGearboxDialogInterface::SetReplicatedDialogData)
        .def("GetDialogGroups", &UGearboxDialogInterface::GetDialogGroups)
        .def("GetDialogComponent", &UGearboxDialogInterface::GetDialogComponent, return_value_policy< reference_existing_object >())
        .def("GetDialogNameTag", &UGearboxDialogInterface::GetDialogNameTag, return_value_policy< reference_existing_object >())
        .def("GetActor", &UGearboxDialogInterface::GetActor, return_value_policy< reference_existing_object >())
        .def("CanTalk", &UGearboxDialogInterface::CanTalk)
        .staticmethod("StaticClass")
  ;
}