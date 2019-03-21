#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleCollisionActor()
{
    class_< UParticleModuleCollisionActor, bases< UParticleModuleCollision >  , boost::noncopyable>("UParticleModuleCollisionActor", no_init)
        .def_readwrite("ActorsToCollideWith", &UParticleModuleCollisionActor::ActorsToCollideWith)
        .def("StaticClass", &UParticleModuleCollisionActor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}