#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleEmitter(py::module &m)
{
    py::class_< UParticleEmitter,  UObject   >(m, "UParticleEmitter")
        .def_readwrite("EmitterName", &UParticleEmitter::EmitterName)
        .def_readwrite("SubUVDataOffset", &UParticleEmitter::SubUVDataOffset)
        .def_readwrite("EmitterRenderMode", &UParticleEmitter::EmitterRenderMode)
        .def_readwrite("LODLevels", &UParticleEmitter::LODLevels)
        .def_readwrite("PeakActiveParticles", &UParticleEmitter::PeakActiveParticles)
        .def_readwrite("InitialAllocationCount", &UParticleEmitter::InitialAllocationCount)
        .def_readwrite("MediumDetailSpawnRateScale", &UParticleEmitter::MediumDetailSpawnRateScale)
        .def("StaticClass", &UParticleEmitter::StaticClass, py::return_value_policy::reference)
        .def("GetMaxLifespan", &UParticleEmitter::GetMaxLifespan)
          ;
}