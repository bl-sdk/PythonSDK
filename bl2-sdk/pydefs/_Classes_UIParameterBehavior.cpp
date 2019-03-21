#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIParameterBehavior()
{
    class_< UIParameterBehavior, bases< UInterface >  , boost::noncopyable>("UIParameterBehavior", no_init)
        .def("StaticClass", &UIParameterBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .def("Behavior_SetColorParameterValue", &UIParameterBehavior::Behavior_SetColorParameterValue)
        .def("Behavior_SetFloatParameterValue", &UIParameterBehavior::Behavior_SetFloatParameterValue)
        .def("Behavior_SetObjectParameterValue", &UIParameterBehavior::Behavior_SetObjectParameterValue)
        .def("Behavior_SetVectorParameterValue", &UIParameterBehavior::Behavior_SetVectorParameterValue)
        .def("Behavior_GetColorParameterValue", &UIParameterBehavior::Behavior_GetColorParameterValue)
        .def("Behavior_GetFloatParameterValue", &UIParameterBehavior::Behavior_GetFloatParameterValue)
        .def("Behavior_GetObjectParameterValue", &UIParameterBehavior::Behavior_GetObjectParameterValue)
        .def("Behavior_GetVectorParameterValue", &UIParameterBehavior::Behavior_GetVectorParameterValue)
        .staticmethod("StaticClass")
  ;
}