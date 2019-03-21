#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleBeamNoise()
{
    class_< UParticleModuleBeamNoise, bases< UParticleModuleBeamBase >  , boost::noncopyable>("UParticleModuleBeamNoise", no_init)
        .def_readwrite("Frequency", &UParticleModuleBeamNoise::Frequency)
        .def_readwrite("Frequency_LowRange", &UParticleModuleBeamNoise::Frequency_LowRange)
        .def_readwrite("NoiseRange", &UParticleModuleBeamNoise::NoiseRange)
        .def_readwrite("NoiseRangeScale", &UParticleModuleBeamNoise::NoiseRangeScale)
        .def_readwrite("NoiseSpeed", &UParticleModuleBeamNoise::NoiseSpeed)
        .def_readwrite("NoiseLockRadius", &UParticleModuleBeamNoise::NoiseLockRadius)
        .def_readwrite("NoiseLockTime", &UParticleModuleBeamNoise::NoiseLockTime)
        .def_readwrite("NoiseTension", &UParticleModuleBeamNoise::NoiseTension)
        .def_readwrite("NoiseTangentStrength", &UParticleModuleBeamNoise::NoiseTangentStrength)
        .def_readwrite("NoiseTessellation", &UParticleModuleBeamNoise::NoiseTessellation)
        .def_readwrite("FrequencyDistance", &UParticleModuleBeamNoise::FrequencyDistance)
        .def_readwrite("NoiseScale", &UParticleModuleBeamNoise::NoiseScale)
        .def("StaticClass", &UParticleModuleBeamNoise::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}