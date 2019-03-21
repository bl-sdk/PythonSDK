#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAnimNotifyEvent()
{
    py::class_< FAnimNotifyEvent >("FAnimNotifyEvent")
        .def_readwrite("Time", &FAnimNotifyEvent::Time)
        .def_readwrite("Notify", &FAnimNotifyEvent::Notify)
        .def_readwrite("Duration", &FAnimNotifyEvent::Duration)
  ;
}