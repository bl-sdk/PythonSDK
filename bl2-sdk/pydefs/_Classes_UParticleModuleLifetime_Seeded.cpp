#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleLifetime_Seeded()
{
    class_< UParticleModuleLifetime_Seeded, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleLifetime_Seeded", no_init)
        .def_readwrite("RandomSeedInfo", &UParticleModuleLifetime_Seeded::RandomSeedInfo)
        .def_readwrite("Lifetime", &UParticleModuleLifetime::Lifetime)
        .def("StaticClass", &UParticleModuleLifetime_Seeded::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}