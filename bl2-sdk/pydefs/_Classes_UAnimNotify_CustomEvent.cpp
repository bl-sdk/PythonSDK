#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNotify_CustomEvent()
{
    py::class_< UAnimNotify_CustomEvent,  UAnimNotify   >("UAnimNotify_CustomEvent")
        .def_readwrite("CustomEventName", &UAnimNotify_CustomEvent::CustomEventName)
        .def("StaticClass", &UAnimNotify_CustomEvent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}