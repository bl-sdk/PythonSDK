#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleVelocity_Seeded()
{
    class_< UParticleModuleVelocity_Seeded, bases< UParticleModuleVelocityBase >  , boost::noncopyable>("UParticleModuleVelocity_Seeded", no_init)
        .def_readwrite("RandomSeedInfo", &UParticleModuleVelocity_Seeded::RandomSeedInfo)
        .def_readwrite("StartVelocity", &UParticleModuleVelocity::StartVelocity)
        .def_readwrite("StartVelocityRadial", &UParticleModuleVelocity::StartVelocityRadial)
        .def("StaticClass", &UParticleModuleVelocity_Seeded::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}