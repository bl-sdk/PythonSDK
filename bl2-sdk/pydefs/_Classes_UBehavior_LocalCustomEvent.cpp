#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_LocalCustomEvent(py::module &m)
{
    py::class_< UBehavior_LocalCustomEvent,  UBehaviorBase   >(m, "UBehavior_LocalCustomEvent")
		.def_static("StaticClass", &UBehavior_LocalCustomEvent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("CustomEventName", &UBehavior_LocalCustomEvent::CustomEventName)
        .def("ApplyBehaviorToContext", &UBehavior_LocalCustomEvent::ApplyBehaviorToContext)
          ;
}