#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIStreamingDataEvent(py::module &m)
{
    py::class_< UIStreamingDataEvent,  UInterface   >(m, "UIStreamingDataEvent")
		.def_static("StaticClass", &UIStreamingDataEvent::StaticClass, py::return_value_policy::reference)
        .def("eventRunStreamingDataEvent", &UIStreamingDataEvent::eventRunStreamingDataEvent)
          ;
}