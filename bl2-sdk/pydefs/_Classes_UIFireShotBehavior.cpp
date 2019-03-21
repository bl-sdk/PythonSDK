#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIFireShotBehavior()
{
    class_< UIFireShotBehavior, bases< UInterface >  , boost::noncopyable>("UIFireShotBehavior", no_init)
        .def("StaticClass", &UIFireShotBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .def("Behavior_Fire", &UIFireShotBehavior::Behavior_Fire)
        .staticmethod("StaticClass")
  ;
}