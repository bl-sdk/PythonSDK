#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIAppearanceBehavior(py::module &m)
{
    py::class_< UIAppearanceBehavior,  UInterface   >(m, "UIAppearanceBehavior")
        .def("Behavior_ChangeVisibility", &UIAppearanceBehavior::Behavior_ChangeVisibility)
        .def("Behavior_ToggleVisibility", &UIAppearanceBehavior::Behavior_ToggleVisibility)
          ;
}