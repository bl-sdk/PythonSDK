#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleVelocity(py::module &m)
{
    py::class_< UParticleModuleVelocity,  UParticleModuleVelocityBase   >(m, "UParticleModuleVelocity")
        .def_readwrite("StartVelocity", &UParticleModuleVelocity::StartVelocity)
        .def_readwrite("StartVelocityRadial", &UParticleModuleVelocity::StartVelocityRadial)
          ;
}