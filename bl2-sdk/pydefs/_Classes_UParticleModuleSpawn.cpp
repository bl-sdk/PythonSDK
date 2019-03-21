#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleSpawn()
{
    class_< UParticleModuleSpawn, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleSpawn", no_init)
        .def_readwrite("Rate", &UParticleModuleSpawn::Rate)
        .def_readwrite("RateScale", &UParticleModuleSpawn::RateScale)
        .def_readwrite("ParticleBurstMethod", &UParticleModuleSpawn::ParticleBurstMethod)
        .def_readwrite("BurstList", &UParticleModuleSpawn::BurstList)
        .def("StaticClass", &UParticleModuleSpawn::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}