#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIChangeBehaviorSetStateBehavior()
{
    class_< UIChangeBehaviorSetStateBehavior, bases< UInterface >  , boost::noncopyable>("UIChangeBehaviorSetStateBehavior", no_init)
        .def("StaticClass", &UIChangeBehaviorSetStateBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .def("Behavior_ChangeBehaviorSet", &UIChangeBehaviorSetStateBehavior::Behavior_ChangeBehaviorSet)
        .staticmethod("StaticClass")
  ;
}