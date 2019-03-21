#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_LocalCustomEvent()
{
    py::class_< UBehavior_LocalCustomEvent,  UBehaviorBase   >("UBehavior_LocalCustomEvent")
        .def_readwrite("CustomEventName", &UBehavior_LocalCustomEvent::CustomEventName)
        .def("StaticClass", &UBehavior_LocalCustomEvent::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_LocalCustomEvent::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}