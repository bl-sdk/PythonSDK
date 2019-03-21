#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USequenceEvent()
{
    class_< USequenceEvent, bases< USequenceOp >  , boost::noncopyable>("USequenceEvent", no_init)
        .def_readwrite("DuplicateEvts", &USequenceEvent::DuplicateEvts)
        .def_readwrite("Originator", &USequenceEvent::Originator)
        .def_readwrite("Instigator", &USequenceEvent::Instigator)
        .def_readwrite("ActivationTime", &USequenceEvent::ActivationTime)
        .def_readwrite("TriggerCount", &USequenceEvent::TriggerCount)
        .def_readwrite("MaxTriggerCount", &USequenceEvent::MaxTriggerCount)
        .def_readwrite("ReTriggerDelay", &USequenceEvent::ReTriggerDelay)
        .def_readwrite("Priority", &USequenceEvent::Priority)
        .def_readwrite("MaxWidth", &USequenceEvent::MaxWidth)
        .def_readwrite("RequiredAllegiance", &USequenceEvent::RequiredAllegiance)
        .def_readwrite("CustomEnableCondition", &USequenceEvent::CustomEnableCondition)
        .def("StaticClass", &USequenceEvent::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventToggled", &USequenceEvent::eventToggled)
        .def("Reset", &USequenceEvent::Reset)
        .def("CheckActivate", &USequenceEvent::CheckActivate)
        .def("eventRegisterEvent", &USequenceEvent::eventRegisterEvent)
        .staticmethod("StaticClass")
  ;
}