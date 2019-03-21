#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleLocation_Seeded()
{
    class_< UParticleModuleLocation_Seeded, bases< UParticleModuleLocation >  , boost::noncopyable>("UParticleModuleLocation_Seeded", no_init)
        .def_readwrite("RandomSeedInfo", &UParticleModuleLocation_Seeded::RandomSeedInfo)
        .def("StaticClass", &UParticleModuleLocation_Seeded::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}