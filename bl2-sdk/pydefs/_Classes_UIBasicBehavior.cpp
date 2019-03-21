#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIBasicBehavior()
{
    class_< UIBasicBehavior, bases< UInterface >  , boost::noncopyable>("UIBasicBehavior", no_init)
        .def("StaticClass", &UIBasicBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .def("EvaluateAttributeInitialization", &UIBasicBehavior::EvaluateAttributeInitialization)
        .def("FindAnimNode", &UIBasicBehavior::FindAnimNode, return_value_policy< reference_existing_object >())
        .def("SetRotationRate", &UIBasicBehavior::SetRotationRate)
        .def("GetCollisionRadius", &UIBasicBehavior::GetCollisionRadius)
        .staticmethod("StaticClass")
  ;
}