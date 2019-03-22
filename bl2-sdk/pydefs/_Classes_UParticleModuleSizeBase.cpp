#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleSizeBase(py::module &m)
{
    py::class_< UParticleModuleSizeBase,  UParticleModule   >(m, "UParticleModuleSizeBase")
          ;
}