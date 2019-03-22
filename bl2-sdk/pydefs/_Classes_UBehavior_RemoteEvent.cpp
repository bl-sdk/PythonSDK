#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_RemoteEvent(py::module &m)
{
    py::class_< UBehavior_RemoteEvent,  UBehaviorBase   >(m, "UBehavior_RemoteEvent")
        .def_readwrite("EventName", &UBehavior_RemoteEvent::EventName)
        .def("StaticClass", &UBehavior_RemoteEvent::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_RemoteEvent::ApplyBehaviorToContext)
          ;
}