#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIStreamingDataEvent(py::object m)
{
    py::class_< UIStreamingDataEvent,  UInterface   >(m, "UIStreamingDataEvent")
        .def("StaticClass", &UIStreamingDataEvent::StaticClass, py::return_value_policy::reference)
        .def("eventRunStreamingDataEvent", &UIStreamingDataEvent::eventRunStreamingDataEvent)
          ;
}