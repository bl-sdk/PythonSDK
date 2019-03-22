#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleAcceleration(py::module &m)
{
    py::class_< UParticleModuleAcceleration,  UParticleModule   >(m, "UParticleModuleAcceleration")
        .def_readwrite("Acceleration", &UParticleModuleAcceleration::Acceleration)
          ;
}