#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIKilledBehavior(py::object m)
{
    py::class_< UIKilledBehavior,  UInterface   >(m, "UIKilledBehavior")
        .def("StaticClass", &UIKilledBehavior::StaticClass, py::return_value_policy::reference)
        .def("Behavior_Killed", &UIKilledBehavior::Behavior_Killed)
          ;
}