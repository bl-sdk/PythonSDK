#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleEventBase(py::module &m)
{
    py::class_< UParticleModuleEventBase,  UParticleModule   >(m, "UParticleModuleEventBase")
          ;
}