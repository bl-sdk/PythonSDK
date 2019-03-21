#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleRotationRate_Seeded()
{
    class_< UParticleModuleRotationRate_Seeded, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleRotationRate_Seeded", no_init)
        .def_readwrite("RandomSeedInfo", &UParticleModuleRotationRate_Seeded::RandomSeedInfo)
        .def_readwrite("StartRotationRate", &UParticleModuleRotationRate::StartRotationRate)
        .def("StaticClass", &UParticleModuleRotationRate_Seeded::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}