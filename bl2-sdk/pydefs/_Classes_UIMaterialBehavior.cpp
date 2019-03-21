#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIMaterialBehavior()
{
    class_< UIMaterialBehavior, bases< UInterface >  , boost::noncopyable>("UIMaterialBehavior", no_init)
        .def("StaticClass", &UIMaterialBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .def("Behavior_SetTextureParameterValue", &UIMaterialBehavior::Behavior_SetTextureParameterValue)
        .def("Behavior_SetScalarParameterValue", &UIMaterialBehavior::Behavior_SetScalarParameterValue)
        .def("Behavior_SetVectorParameterValue", &UIMaterialBehavior::Behavior_SetVectorParameterValue)
        .def("Behavior_GetScalarParameterValue", &UIMaterialBehavior::Behavior_GetScalarParameterValue)
        .def("Behavior_GetVectorParameterValue", &UIMaterialBehavior::Behavior_GetVectorParameterValue)
        .staticmethod("StaticClass")
  ;
}