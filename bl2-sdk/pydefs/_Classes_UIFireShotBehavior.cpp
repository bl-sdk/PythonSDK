#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIFireShotBehavior(py::object m)
{
    py::class_< UIFireShotBehavior,  UInterface   >(m, "UIFireShotBehavior")
        .def("StaticClass", &UIFireShotBehavior::StaticClass, py::return_value_policy::reference)
        .def("Behavior_Fire", &UIFireShotBehavior::Behavior_Fire)
          ;
}