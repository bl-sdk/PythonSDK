#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleLocationPrimitiveCylinder_Seeded()
{
    class_< UParticleModuleLocationPrimitiveCylinder_Seeded, bases< UParticleModuleLocationPrimitiveCylinder >  , boost::noncopyable>("UParticleModuleLocationPrimitiveCylinder_Seeded", no_init)
        .def_readwrite("RandomSeedInfo", &UParticleModuleLocationPrimitiveCylinder_Seeded::RandomSeedInfo)
        .def("StaticClass", &UParticleModuleLocationPrimitiveCylinder_Seeded::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}