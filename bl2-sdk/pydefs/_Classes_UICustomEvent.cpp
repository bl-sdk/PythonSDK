#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UICustomEvent(py::module &m)
{
    py::class_< UICustomEvent,  UInterface   >(m, "UICustomEvent")
        .def("eventRunCustomEvent", &UICustomEvent::eventRunCustomEvent)
          ;
}