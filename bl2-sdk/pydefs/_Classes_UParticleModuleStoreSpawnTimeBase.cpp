#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleStoreSpawnTimeBase()
{
    class_< UParticleModuleStoreSpawnTimeBase, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleStoreSpawnTimeBase", no_init)
        .def("StaticClass", &UParticleModuleStoreSpawnTimeBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}