#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIScaleBehavior(py::module &m)
{
    py::class_< UIScaleBehavior,  UInterface   >(m, "UIScaleBehavior")
		.def_static("StaticClass", &UIScaleBehavior::StaticClass, py::return_value_policy::reference)
        .def("Behavior_ChangeScale", &UIScaleBehavior::Behavior_ChangeScale)
          ;
}