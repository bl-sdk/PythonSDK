#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIAnimBehavior()
{
    py::class_< UIAnimBehavior,  UInterface   >("UIAnimBehavior")
        .def("StaticClass", &UIAnimBehavior::StaticClass, py::return_value_policy::reference)
        .def("SetAnimTreeTemplate", &UIAnimBehavior::SetAnimTreeTemplate)
        .def("Behavior_ChangeBoneVisibility", &UIAnimBehavior::Behavior_ChangeBoneVisibility)
        .def("Behavior_ToggleBoneVisibility", &UIAnimBehavior::Behavior_ToggleBoneVisibility)
        .def("Behavior_InstanceVertexWeight", &UIAnimBehavior::Behavior_InstanceVertexWeight)
        .def("SetForceDiscardRootMotion", &UIAnimBehavior::SetForceDiscardRootMotion)
        .def("FindAnimNode", &UIAnimBehavior::FindAnimNode, py::return_value_policy::reference)
        .def("FindSkelControl", &UIAnimBehavior::FindSkelControl, py::return_value_policy::reference)
        .def("PlayAnim", &UIAnimBehavior::PlayAnim)
        .def("Behavior_SetMorphNodeWeight", &UIAnimBehavior::Behavior_SetMorphNodeWeight)
        .def("GetAnimTreeNodes", &UIAnimBehavior::GetAnimTreeNodes)
        .def("Behavior_SetSkelControlStrength", &UIAnimBehavior::Behavior_SetSkelControlStrength)
        .staticmethod("StaticClass")
  ;
}