#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleMeshRotationRate_Seeded()
{
    class_< UParticleModuleMeshRotationRate_Seeded, bases< UParticleModuleMeshRotationRate >  , boost::noncopyable>("UParticleModuleMeshRotationRate_Seeded", no_init)
        .def_readwrite("RandomSeedInfo", &UParticleModuleMeshRotationRate_Seeded::RandomSeedInfo)
        .def("StaticClass", &UParticleModuleMeshRotationRate_Seeded::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}