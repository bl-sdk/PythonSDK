#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIRBCollisionListener()
{
    class_< UIRBCollisionListener, bases< UInterface >  , boost::noncopyable>("UIRBCollisionListener", no_init)
        .def("StaticClass", &UIRBCollisionListener::StaticClass, return_value_policy< reference_existing_object >())
        .def("NotifyRigidBodyCollision", &UIRBCollisionListener::NotifyRigidBodyCollision)
        .staticmethod("StaticClass")
  ;
}