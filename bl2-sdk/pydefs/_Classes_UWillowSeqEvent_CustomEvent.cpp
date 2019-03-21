#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_CustomEvent()
{
    py::class_< UWillowSeqEvent_CustomEvent,  USequenceEvent   >("UWillowSeqEvent_CustomEvent")
        .def_readwrite("EventName", &UWillowSeqEvent_CustomEvent::EventName)
        .def("StaticClass", &UWillowSeqEvent_CustomEvent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}