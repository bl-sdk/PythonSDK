#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPhysicsJumpConnection()
{
    class_< UPhysicsJumpConnection, bases< UObject >  , boost::noncopyable>("UPhysicsJumpConnection", no_init)
        .def_readwrite("Source", &UPhysicsJumpConnection::Source)
        .def_readwrite("Destination", &UPhysicsJumpConnection::Destination)
        .def_readwrite("Speed", &UPhysicsJumpConnection::Speed)
        .def_readwrite("Angle", &UPhysicsJumpConnection::Angle)
        .def_readwrite("Velocity", &UPhysicsJumpConnection::Velocity)
        .def("StaticClass", &UPhysicsJumpConnection::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}