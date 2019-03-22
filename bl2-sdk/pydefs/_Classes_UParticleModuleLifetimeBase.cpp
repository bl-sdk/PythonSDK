#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleLifetimeBase(py::module &m)
{
    py::class_< UParticleModuleLifetimeBase,  UParticleModule   >(m, "UParticleModuleLifetimeBase")
          ;
}