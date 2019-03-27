#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNotify_CustomEvent(py::module &m)
{
    py::class_< UAnimNotify_CustomEvent,  UAnimNotify   >(m, "UAnimNotify_CustomEvent")
		.def_static("StaticClass", &UAnimNotify_CustomEvent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("CustomEventName", &UAnimNotify_CustomEvent::CustomEventName)
          ;
}