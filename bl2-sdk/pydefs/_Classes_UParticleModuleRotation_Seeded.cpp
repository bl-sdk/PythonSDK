#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleRotation_Seeded()
{
    class_< UParticleModuleRotation_Seeded, bases< UParticleModuleRotation >  , boost::noncopyable>("UParticleModuleRotation_Seeded", no_init)
        .def_readwrite("RandomSeedInfo", &UParticleModuleRotation_Seeded::RandomSeedInfo)
        .def("StaticClass", &UParticleModuleRotation_Seeded::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}