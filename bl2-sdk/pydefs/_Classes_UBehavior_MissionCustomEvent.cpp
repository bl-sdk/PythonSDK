#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_MissionCustomEvent(py::module &m)
{
    py::class_< UBehavior_MissionCustomEvent,  UBehaviorBase   >(m, "UBehavior_MissionCustomEvent")
        .def_readwrite("RelatedMission", &UBehavior_MissionCustomEvent::RelatedMission)
        .def_readwrite("EventName", &UBehavior_MissionCustomEvent::EventName)
        .def("StaticClass", &UBehavior_MissionCustomEvent::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_MissionCustomEvent::ApplyBehaviorToContext)
          ;
}