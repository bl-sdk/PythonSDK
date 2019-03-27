#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleSpriteEmitter(py::module &m)
{
    py::class_< UParticleSpriteEmitter,  UParticleEmitter   >(m, "UParticleSpriteEmitter")
		.def_static("StaticClass", &UParticleSpriteEmitter::StaticClass, py::return_value_policy::reference)
          ;
}