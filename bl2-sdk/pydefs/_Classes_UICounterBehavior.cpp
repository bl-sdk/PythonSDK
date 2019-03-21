#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UICounterBehavior(py::object m)
{
    py::class_< UICounterBehavior,  UInterface   >(m, "UICounterBehavior")
        .def("StaticClass", &UICounterBehavior::StaticClass, py::return_value_policy::reference)
        .def("SetCounterState", &UICounterBehavior::SetCounterState)
        .def("GetCounterState", &UICounterBehavior::GetCounterState)
        .def("OnCounterEvent", &UICounterBehavior::OnCounterEvent)
          ;
}