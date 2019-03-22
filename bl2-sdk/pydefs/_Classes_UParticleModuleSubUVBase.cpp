#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleSubUVBase(py::module &m)
{
    py::class_< UParticleModuleSubUVBase,  UParticleModule   >(m, "UParticleModuleSubUVBase")
          ;
}