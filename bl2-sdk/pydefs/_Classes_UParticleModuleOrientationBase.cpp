#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleOrientationBase(py::module &m)
{
    py::class_< UParticleModuleOrientationBase,  UParticleModule   >(m, "UParticleModuleOrientationBase")
          ;
}