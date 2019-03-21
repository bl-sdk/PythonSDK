#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_TriggerDialogEvent()
{
    py::class_< UBehavior_TriggerDialogEvent,  UBehaviorBase   >("UBehavior_TriggerDialogEvent")
        .def_readwrite("EventTag", &UBehavior_TriggerDialogEvent::EventTag)
        .def_readwrite("Group", &UBehavior_TriggerDialogEvent::Group)
        .def_readwrite("NameTag", &UBehavior_TriggerDialogEvent::NameTag)
        .def_readwrite("Other", &UBehavior_TriggerDialogEvent::Other)
        .def_readwrite("MyEventData", &UBehavior_TriggerDialogEvent::MyEventData)
        .def_readwrite("MyDataUseCount", &UBehavior_TriggerDialogEvent::MyDataUseCount)
        .def("StaticClass", &UBehavior_TriggerDialogEvent::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_TriggerDialogEvent::ApplyBehaviorToContext)
        .def("TriggerDialogEvent", &UBehavior_TriggerDialogEvent::TriggerDialogEvent)
        .staticmethod("StaticClass")
  ;
}