#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FScreenParticleModifier()
{
    py::class_< FScreenParticleModifier >("FScreenParticleModifier")
        .def_readwrite("ScalarParams", &FScreenParticleModifier::ScalarParams)
        .def_readwrite("CachedValue", &FScreenParticleModifier::CachedValue)
  ;
}