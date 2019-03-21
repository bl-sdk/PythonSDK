#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USequenceEvent()
{
    py::class_< USequenceEvent,  USequenceOp   >("USequenceEvent")
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
        .def("StaticClass", &USequenceEvent::StaticClass, py::return_value_policy::reference)
        .def("eventToggled", &USequenceEvent::eventToggled)
        .def("Reset", &USequenceEvent::Reset)
        .def("CheckActivate", &USequenceEvent::CheckActivate)
        .def("eventRegisterEvent", &USequenceEvent::eventRegisterEvent)
        .staticmethod("StaticClass")
  ;
}