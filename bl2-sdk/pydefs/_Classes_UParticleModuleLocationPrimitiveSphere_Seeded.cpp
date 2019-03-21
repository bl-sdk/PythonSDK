#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleLocationPrimitiveSphere_Seeded()
{
    class_< UParticleModuleLocationPrimitiveSphere_Seeded, bases< UParticleModuleLocationBase >  , boost::noncopyable>("UParticleModuleLocationPrimitiveSphere_Seeded", no_init)
        .def_readwrite("RandomSeedInfo", &UParticleModuleLocationPrimitiveSphere_Seeded::RandomSeedInfo)
        .def_readwrite("StartRadius", &UParticleModuleLocationPrimitiveSphere::StartRadius)
        .def_readwrite("VelocityScale", &UParticleModuleLocationPrimitiveBase::VelocityScale)
        .def_readwrite("StartLocation", &UParticleModuleLocationPrimitiveBase::StartLocation)
        .def("StaticClass", &UParticleModuleLocationPrimitiveSphere_Seeded::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}