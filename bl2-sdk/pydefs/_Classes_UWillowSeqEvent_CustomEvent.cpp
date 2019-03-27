#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_CustomEvent(py::module &m)
{
    py::class_< UWillowSeqEvent_CustomEvent,  USequenceEvent   >(m, "UWillowSeqEvent_CustomEvent")
		.def_static("StaticClass", &UWillowSeqEvent_CustomEvent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("EventName", &UWillowSeqEvent_CustomEvent::EventName)
          ;
}