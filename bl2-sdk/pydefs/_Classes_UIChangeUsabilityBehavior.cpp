#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIChangeUsabilityBehavior(py::module &m)
{
    py::class_< UIChangeUsabilityBehavior,  UInterface   >(m, "UIChangeUsabilityBehavior")
        .def("StaticClass", &UIChangeUsabilityBehavior::StaticClass, py::return_value_policy::reference)
        .def("Behavior_ChangeUsabilityCost", &UIChangeUsabilityBehavior::Behavior_ChangeUsabilityCost)
        .def("Behavior_ChangeUsability", &UIChangeUsabilityBehavior::Behavior_ChangeUsability)
          ;
}