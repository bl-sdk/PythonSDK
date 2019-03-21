#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIPhysicsBehavior()
{
    class_< UIPhysicsBehavior, bases< UInterface >  , boost::noncopyable>("UIPhysicsBehavior", no_init)
        .def("StaticClass", &UIPhysicsBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetDamageVector", &UIPhysicsBehavior::GetDamageVector)
        .def("GetRigidBodyMesh", &UIPhysicsBehavior::GetRigidBodyMesh, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}