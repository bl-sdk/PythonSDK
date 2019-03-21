#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_RigidBodyCollision()
{
    class_< USeqEvent_RigidBodyCollision, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_RigidBodyCollision", no_init)
        .def_readwrite("MinCollisionVelocity", &USeqEvent_RigidBodyCollision::MinCollisionVelocity)
        .def("StaticClass", &USeqEvent_RigidBodyCollision::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}