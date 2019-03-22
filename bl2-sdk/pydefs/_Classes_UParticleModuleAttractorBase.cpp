#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleAttractorBase(py::module &m)
{
    py::class_< UParticleModuleAttractorBase,  UParticleModule   >(m, "UParticleModuleAttractorBase")
          ;
}