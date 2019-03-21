#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIChangeUsabilityBehavior()
{
    class_< UIChangeUsabilityBehavior, bases< UInterface >  , boost::noncopyable>("UIChangeUsabilityBehavior", no_init)
        .def("StaticClass", &UIChangeUsabilityBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .def("Behavior_ChangeUsabilityCost", &UIChangeUsabilityBehavior::Behavior_ChangeUsabilityCost)
        .def("Behavior_ChangeUsability", &UIChangeUsabilityBehavior::Behavior_ChangeUsability)
        .staticmethod("StaticClass")
  ;
}