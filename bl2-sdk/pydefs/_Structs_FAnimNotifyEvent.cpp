#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAnimNotifyEvent(py::module &m)
{
    py::class_< FAnimNotifyEvent >(m, "FAnimNotifyEvent")
        .def_readwrite("Time", &FAnimNotifyEvent::Time)
        .def_readwrite("Notify", &FAnimNotifyEvent::Notify)
        .def_readwrite("Duration", &FAnimNotifyEvent::Duration)
  ;
}