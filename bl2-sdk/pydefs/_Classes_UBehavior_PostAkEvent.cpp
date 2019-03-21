#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_PostAkEvent()
{
    py::class_< UBehavior_PostAkEvent,  UBehaviorBase   >("UBehavior_PostAkEvent")
        .def_readwrite("Event", &UBehavior_PostAkEvent::Event)
        .def_readwrite("PlayingInfo", &UBehavior_PostAkEvent::PlayingInfo)
        .def("StaticClass", &UBehavior_PostAkEvent::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_PostAkEvent::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}