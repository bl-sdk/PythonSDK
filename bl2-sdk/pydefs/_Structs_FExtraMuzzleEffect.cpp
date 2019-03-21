#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FExtraMuzzleEffect()
{
    py::class_< FExtraMuzzleEffect >("FExtraMuzzleEffect")
        .def_readwrite("Particles", &FExtraMuzzleEffect::Particles)
        .def_readwrite("Sound", &FExtraMuzzleEffect::Sound)
  ;
}