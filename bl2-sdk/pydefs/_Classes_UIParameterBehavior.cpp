#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIParameterBehavior(py::object m)
{
    py::class_< UIParameterBehavior,  UInterface   >(m, "UIParameterBehavior")
        .def("StaticClass", &UIParameterBehavior::StaticClass, py::return_value_policy::reference)
        .def("Behavior_SetColorParameterValue", &UIParameterBehavior::Behavior_SetColorParameterValue)
        .def("Behavior_SetFloatParameterValue", &UIParameterBehavior::Behavior_SetFloatParameterValue)
        .def("Behavior_SetObjectParameterValue", &UIParameterBehavior::Behavior_SetObjectParameterValue)
        .def("Behavior_SetVectorParameterValue", &UIParameterBehavior::Behavior_SetVectorParameterValue)
        .def("Behavior_GetColorParameterValue", &UIParameterBehavior::Behavior_GetColorParameterValue)
        .def("Behavior_GetFloatParameterValue", &UIParameterBehavior::Behavior_GetFloatParameterValue)
        .def("Behavior_GetObjectParameterValue", &UIParameterBehavior::Behavior_GetObjectParameterValue)
        .def("Behavior_GetVectorParameterValue", &UIParameterBehavior::Behavior_GetVectorParameterValue)
          ;
}