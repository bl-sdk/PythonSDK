#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleEmitter()
{
    class_< UParticleEmitter, bases< UObject >  , boost::noncopyable>("UParticleEmitter", no_init)
        .def_readwrite("EmitterName", &UParticleEmitter::EmitterName)
        .def_readwrite("SubUVDataOffset", &UParticleEmitter::SubUVDataOffset)
        .def_readwrite("EmitterRenderMode", &UParticleEmitter::EmitterRenderMode)
        .def_readwrite("LODLevels", &UParticleEmitter::LODLevels)
        .def_readwrite("PeakActiveParticles", &UParticleEmitter::PeakActiveParticles)
        .def_readwrite("InitialAllocationCount", &UParticleEmitter::InitialAllocationCount)
        .def_readwrite("MediumDetailSpawnRateScale", &UParticleEmitter::MediumDetailSpawnRateScale)
        .def("StaticClass", &UParticleEmitter::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetMaxLifespan", &UParticleEmitter::GetMaxLifespan)
        .staticmethod("StaticClass")
  ;
}