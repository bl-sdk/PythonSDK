#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_TriggerDialogEvent()
{
    class_< UBehavior_TriggerDialogEvent, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_TriggerDialogEvent", no_init)
        .def_readwrite("EventTag", &UBehavior_TriggerDialogEvent::EventTag)
        .def_readwrite("Group", &UBehavior_TriggerDialogEvent::Group)
        .def_readwrite("NameTag", &UBehavior_TriggerDialogEvent::NameTag)
        .def_readwrite("Other", &UBehavior_TriggerDialogEvent::Other)
        .def_readwrite("MyEventData", &UBehavior_TriggerDialogEvent::MyEventData)
        .def_readwrite("MyDataUseCount", &UBehavior_TriggerDialogEvent::MyDataUseCount)
        .def("StaticClass", &UBehavior_TriggerDialogEvent::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_TriggerDialogEvent::ApplyBehaviorToContext)
        .def("TriggerDialogEvent", &UBehavior_TriggerDialogEvent::TriggerDialogEvent)
        .staticmethod("StaticClass")
  ;
}