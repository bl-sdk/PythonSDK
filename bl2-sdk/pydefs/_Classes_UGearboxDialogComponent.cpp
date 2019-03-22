#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogComponent(py::object m)
{
    py::class_< UGearboxDialogComponent,  UActorComponent   >(m, "UGearboxDialogComponent")
        .def_readwrite("EventData", &UGearboxDialogComponent::EventData)
        .def_readwrite("ClientPlayingInfo", &UGearboxDialogComponent::ClientPlayingInfo)
        .def("StaticClass", &UGearboxDialogComponent::StaticClass, py::return_value_policy::reference)
        .def("IsTalking", &UGearboxDialogComponent::IsTalking)
        .def("StopTalking", &UGearboxDialogComponent::StopTalking)
        .def("TalkReplicated", &UGearboxDialogComponent::TalkReplicated)
        .def("Talk", &UGearboxDialogComponent::Talk)
        .def("GetMatchingEvent", [](UGearboxDialogComponent &self , class UGearboxDialogEventTag* InEventTag, unsigned long bIncludeDisabled, class UGearboxDialogNameTag* OtherNameTag, unsigned long bAllowTemplateGroups) { class UGearboxDialogEvent** pyOutEvent = 0 ; class UGearboxDialogGroup** pyOutGroup = 0 ;   self.GetMatchingEvent(InEventTag, bIncludeDisabled, OtherNameTag, bAllowTemplateGroups, pyOutEvent, pyOutGroup); return py::make_tuple(*pyOutEvent, *pyOutGroup); })
        .def("TriggerEvent", &UGearboxDialogComponent::TriggerEvent, py::return_value_policy::reference)
        .def("GetDialogInterface", &UGearboxDialogComponent::GetDialogInterface, py::return_value_policy::reference)
          ;
}