#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxDialogComponent()
{
    class_< UGearboxDialogComponent, bases< UActorComponent >  , boost::noncopyable>("UGearboxDialogComponent", no_init)
        .def_readwrite("EventData", &UGearboxDialogComponent::EventData)
        .def_readwrite("ClientPlayingInfo", &UGearboxDialogComponent::ClientPlayingInfo)
        .def("StaticClass", &UGearboxDialogComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("IsTalking", &UGearboxDialogComponent::IsTalking)
        .def("StopTalking", &UGearboxDialogComponent::StopTalking)
        .def("TalkReplicated", &UGearboxDialogComponent::TalkReplicated)
        .def("Talk", &UGearboxDialogComponent::Talk)
        .def("GetMatchingEvent", &UGearboxDialogComponent::GetMatchingEvent)
        .def("TriggerEvent", &UGearboxDialogComponent::TriggerEvent, return_value_policy< reference_existing_object >())
        .def("GetDialogInterface", &UGearboxDialogComponent::GetDialogInterface, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}