#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_RemoteEvent(py::module &m)
{
    py::class_< USeqEvent_RemoteEvent,  USequenceEvent   >(m, "USeqEvent_RemoteEvent")
		.def_static("StaticClass", &USeqEvent_RemoteEvent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("EventName", &USeqEvent_RemoteEvent::EventName)
        .def("eventGetObjClassVersion", &USeqEvent_RemoteEvent::eventGetObjClassVersion)
          ;
}