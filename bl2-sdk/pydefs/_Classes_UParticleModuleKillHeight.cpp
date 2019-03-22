#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleKillHeight(py::module &m)
{
    py::class_< UParticleModuleKillHeight,  UParticleModule   >(m, "UParticleModuleKillHeight")
        .def_readwrite("Height", &UParticleModuleKillHeight::Height)
          ;
}