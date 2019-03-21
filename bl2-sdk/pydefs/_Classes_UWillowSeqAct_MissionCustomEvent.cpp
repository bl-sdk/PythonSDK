#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_MissionCustomEvent()
{
    py::class_< UWillowSeqAct_MissionCustomEvent,  USequenceAction   >("UWillowSeqAct_MissionCustomEvent")
        .def_readwrite("AssociatedMission", &UWillowSeqAct_MissionCustomEvent::AssociatedMission)
        .def_readwrite("EventName", &UWillowSeqAct_MissionCustomEvent::EventName)
        .def("StaticClass", &UWillowSeqAct_MissionCustomEvent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}