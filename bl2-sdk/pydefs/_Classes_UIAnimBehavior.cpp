#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIAnimBehavior()
{
    class_< UIAnimBehavior, bases< UInterface >  , boost::noncopyable>("UIAnimBehavior", no_init)
        .def("StaticClass", &UIAnimBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetAnimTreeTemplate", &UIAnimBehavior::SetAnimTreeTemplate)
        .def("Behavior_ChangeBoneVisibility", &UIAnimBehavior::Behavior_ChangeBoneVisibility)
        .def("Behavior_ToggleBoneVisibility", &UIAnimBehavior::Behavior_ToggleBoneVisibility)
        .def("Behavior_InstanceVertexWeight", &UIAnimBehavior::Behavior_InstanceVertexWeight)
        .def("SetForceDiscardRootMotion", &UIAnimBehavior::SetForceDiscardRootMotion)
        .def("FindAnimNode", &UIAnimBehavior::FindAnimNode, return_value_policy< reference_existing_object >())
        .def("FindSkelControl", &UIAnimBehavior::FindSkelControl, return_value_policy< reference_existing_object >())
        .def("PlayAnim", &UIAnimBehavior::PlayAnim)
        .def("Behavior_SetMorphNodeWeight", &UIAnimBehavior::Behavior_SetMorphNodeWeight)
        .def("GetAnimTreeNodes", &UIAnimBehavior::GetAnimTreeNodes)
        .def("Behavior_SetSkelControlStrength", &UIAnimBehavior::Behavior_SetSkelControlStrength)
        .staticmethod("StaticClass")
  ;
}