#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNotify_AkEvent(py::object m)
{
    py::class_< UAnimNotify_AkEvent,  UAnimNotify   >(m, "UAnimNotify_AkEvent")
        .def_readwrite("AkEvent", &UAnimNotify_AkEvent::AkEvent)
        .def_readwrite("BoneName", &UAnimNotify_AkEvent::BoneName)
        .def("StaticClass", &UAnimNotify_AkEvent::StaticClass, py::return_value_policy::reference)
          ;
}