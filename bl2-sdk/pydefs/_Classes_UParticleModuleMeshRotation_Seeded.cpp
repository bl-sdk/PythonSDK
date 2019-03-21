#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleMeshRotation_Seeded()
{
    class_< UParticleModuleMeshRotation_Seeded, bases< UParticleModuleRotationBase >  , boost::noncopyable>("UParticleModuleMeshRotation_Seeded", no_init)
        .def_readwrite("RandomSeedInfo", &UParticleModuleMeshRotation_Seeded::RandomSeedInfo)
        .def_readwrite("StartRotation", &UParticleModuleMeshRotation::StartRotation)
        .def("StaticClass", &UParticleModuleMeshRotation_Seeded::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}