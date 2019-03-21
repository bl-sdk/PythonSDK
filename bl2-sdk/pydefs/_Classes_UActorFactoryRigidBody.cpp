#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryRigidBody()
{
    class_< UActorFactoryRigidBody, bases< UActorFactoryDynamicSM >  , boost::noncopyable>("UActorFactoryRigidBody", no_init)
        .def_readwrite("InitialVelocity", &UActorFactoryRigidBody::InitialVelocity)
        .def_readwrite("AdditionalVelocity", &UActorFactoryRigidBody::AdditionalVelocity)
        .def_readwrite("InitialAngularVelocity", &UActorFactoryRigidBody::InitialAngularVelocity)
        .def_readwrite("RBChannel", &UActorFactoryRigidBody::RBChannel)
        .def_readwrite("StayUprightTorqueFactor", &UActorFactoryRigidBody::StayUprightTorqueFactor)
        .def_readwrite("StayUprightMaxTorque", &UActorFactoryRigidBody::StayUprightMaxTorque)
        .def("StaticClass", &UActorFactoryRigidBody::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}