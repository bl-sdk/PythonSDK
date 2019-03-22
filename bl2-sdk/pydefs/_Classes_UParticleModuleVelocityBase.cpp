#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleVelocityBase(py::module &m)
{
    py::class_< UParticleModuleVelocityBase,  UParticleModule   >(m, "UParticleModuleVelocityBase")
          ;
}