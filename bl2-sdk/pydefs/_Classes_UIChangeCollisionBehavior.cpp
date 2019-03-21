#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIChangeCollisionBehavior()
{
    class_< UIChangeCollisionBehavior, bases< UInterface >  , boost::noncopyable>("UIChangeCollisionBehavior", no_init)
        .def("StaticClass", &UIChangeCollisionBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .def("Behavior_ChangeCollisionSize", &UIChangeCollisionBehavior::Behavior_ChangeCollisionSize)
        .def("Behavior_ChangeCollision", &UIChangeCollisionBehavior::Behavior_ChangeCollision)
        .staticmethod("StaticClass")
  ;
}