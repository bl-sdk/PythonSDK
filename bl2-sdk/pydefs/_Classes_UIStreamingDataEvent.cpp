#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIStreamingDataEvent(py::module &m)
{
    py::class_< UIStreamingDataEvent,  UInterface   >(m, "UIStreamingDataEvent")
        .def("eventRunStreamingDataEvent", &UIStreamingDataEvent::eventRunStreamingDataEvent)
          ;
}