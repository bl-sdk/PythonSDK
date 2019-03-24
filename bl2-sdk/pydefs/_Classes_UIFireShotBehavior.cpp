#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIFireShotBehavior(py::module &m)
{
    py::class_< UIFireShotBehavior,  UInterface   >(m, "UIFireShotBehavior")
		.def_static("StaticClass", &UIFireShotBehavior::StaticClass, py::return_value_policy::reference)
        .def("Behavior_Fire", &UIFireShotBehavior::Behavior_Fire)
          ;
}