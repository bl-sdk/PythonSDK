#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleSize_Seeded()
{
    class_< UParticleModuleSize_Seeded, bases< UParticleModuleSizeBase >  , boost::noncopyable>("UParticleModuleSize_Seeded", no_init)
        .def_readwrite("RandomSeedInfo", &UParticleModuleSize_Seeded::RandomSeedInfo)
        .def_readwrite("StartSize", &UParticleModuleSize::StartSize)
        .def("StaticClass", &UParticleModuleSize_Seeded::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}