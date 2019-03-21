#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_CustomEvent()
{
    py::class_< UBehavior_CustomEvent,  UBehaviorBase   >("UBehavior_CustomEvent")
        .def_readwrite("CustomEventName", &UBehavior_CustomEvent::CustomEventName)
        .def("StaticClass", &UBehavior_CustomEvent::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_CustomEvent::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}