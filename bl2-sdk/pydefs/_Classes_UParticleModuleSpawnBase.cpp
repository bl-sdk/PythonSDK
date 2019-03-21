#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleSpawnBase()
{
    class_< UParticleModuleSpawnBase, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleSpawnBase", no_init)
        .def("StaticClass", &UParticleModuleSpawnBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}