#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIFocusable()
{
    py::class_< UIFocusable,  UInterface   >("UIFocusable")
        .def("StaticClass", &UIFocusable::StaticClass, py::return_value_policy::reference)
        .def("GetFocusScreenOffset", &UIFocusable::GetFocusScreenOffset)
        .def("GetFocusRadius", &UIFocusable::GetFocusRadius)
        .def("GetFocusLocation", &UIFocusable::GetFocusLocation)
        .def("EndFocus", &UIFocusable::EndFocus)
        .def("BeginFocus", &UIFocusable::BeginFocus)
        .staticmethod("StaticClass")
  ;
}