#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleSpawn(py::module &m)
{
    py::class_< UParticleModuleSpawn,  UParticleModule   >(m, "UParticleModuleSpawn")
        .def_readwrite("Rate", &UParticleModuleSpawn::Rate)
        .def_readwrite("RateScale", &UParticleModuleSpawn::RateScale)
        .def_readwrite("ParticleBurstMethod", &UParticleModuleSpawn::ParticleBurstMethod)
        .def_readwrite("BurstList", &UParticleModuleSpawn::BurstList)
          ;
}