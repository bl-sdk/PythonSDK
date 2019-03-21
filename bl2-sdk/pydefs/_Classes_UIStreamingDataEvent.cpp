#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIStreamingDataEvent()
{
    py::class_< UIStreamingDataEvent,  UInterface   >("UIStreamingDataEvent")
        .def("StaticClass", &UIStreamingDataEvent::StaticClass, py::return_value_policy::reference)
        .def("eventRunStreamingDataEvent", &UIStreamingDataEvent::eventRunStreamingDataEvent)
        .staticmethod("StaticClass")
  ;
}