#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPhysicsLODVerticalEmitter()
{
    class_< UPhysicsLODVerticalEmitter, bases< UObject >  , boost::noncopyable>("UPhysicsLODVerticalEmitter", no_init)
        .def_readwrite("ParticlePercentage", &UPhysicsLODVerticalEmitter::ParticlePercentage)
        .def("StaticClass", &UPhysicsLODVerticalEmitter::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}