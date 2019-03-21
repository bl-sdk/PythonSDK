#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleSpriteEmitter()
{
    py::class_< UParticleSpriteEmitter,  UParticleEmitter   >("UParticleSpriteEmitter")
        .def("StaticClass", &UParticleSpriteEmitter::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}