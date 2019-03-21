#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleStoreSpawnTime()
{
    class_< UParticleModuleStoreSpawnTime, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleStoreSpawnTime", no_init)
        .def("StaticClass", &UParticleModuleStoreSpawnTime::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}