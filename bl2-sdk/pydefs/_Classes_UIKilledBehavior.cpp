#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIKilledBehavior()
{
    class_< UIKilledBehavior, bases< UInterface >  , boost::noncopyable>("UIKilledBehavior", no_init)
        .def("StaticClass", &UIKilledBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .def("Behavior_Killed", &UIKilledBehavior::Behavior_Killed)
        .staticmethod("StaticClass")
  ;
}