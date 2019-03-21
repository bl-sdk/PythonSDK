#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FScreenParticleModifier(py::object m)
{
    py::class_< FScreenParticleModifier >(m, "FScreenParticleModifier")
        .def_readwrite("ScalarParams", &FScreenParticleModifier::ScalarParams)
        .def_readwrite("CachedValue", &FScreenParticleModifier::CachedValue)
  ;
}