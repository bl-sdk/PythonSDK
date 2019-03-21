#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleColor_Seeded()
{
    class_< UParticleModuleColor_Seeded, bases< UParticleModuleColor >  , boost::noncopyable>("UParticleModuleColor_Seeded", no_init)
        .def_readwrite("RandomSeedInfo", &UParticleModuleColor_Seeded::RandomSeedInfo)
        .def("StaticClass", &UParticleModuleColor_Seeded::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}