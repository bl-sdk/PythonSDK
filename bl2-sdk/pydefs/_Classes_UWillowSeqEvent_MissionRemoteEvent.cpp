#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_MissionRemoteEvent(py::object m)
{
    py::class_< UWillowSeqEvent_MissionRemoteEvent,  USequenceEvent   >(m, "UWillowSeqEvent_MissionRemoteEvent")
        .def_readwrite("AssociatedMissionDefinition", &UWillowSeqEvent_MissionRemoteEvent::AssociatedMissionDefinition)
        .def_readwrite("EventName", &UWillowSeqEvent_MissionRemoteEvent::EventName)
        .def("StaticClass", &UWillowSeqEvent_MissionRemoteEvent::StaticClass, py::return_value_policy::reference)
          ;
}