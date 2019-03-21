#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleSpawn()
{
    py::class_< UParticleModuleSpawn,  UParticleModule   >("UParticleModuleSpawn")
        .def_readwrite("Rate", &UParticleModuleSpawn::Rate)
        .def_readwrite("RateScale", &UParticleModuleSpawn::RateScale)
        .def_readwrite("ParticleBurstMethod", &UParticleModuleSpawn::ParticleBurstMethod)
        .def_readwrite("BurstList", &UParticleModuleSpawn::BurstList)
        .def("StaticClass", &UParticleModuleSpawn::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}