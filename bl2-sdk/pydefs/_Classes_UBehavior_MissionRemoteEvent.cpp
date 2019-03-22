#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_MissionRemoteEvent(py::module &m)
{
    py::class_< UBehavior_MissionRemoteEvent,  UBehaviorBase   >(m, "UBehavior_MissionRemoteEvent")
        .def_readwrite("EventName", &UBehavior_MissionRemoteEvent::EventName)
        .def("ApplyBehaviorToContext", &UBehavior_MissionRemoteEvent::ApplyBehaviorToContext)
          ;
}