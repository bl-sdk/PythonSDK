#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleForceFieldTornado(py::module &m)
{
    py::class_< UParticleModuleForceFieldTornado,  UParticleModuleForceFieldBase   >(m, "UParticleModuleForceFieldTornado")
          ;
}