#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleColorBase(py::module &m)
{
    py::class_< UParticleModuleColorBase,  UParticleModule   >(m, "UParticleModuleColorBase")
          ;
}