#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FColorParticleSystemParameter()
{
    py::class_< FColorParticleSystemParameter >("FColorParticleSystemParameter")
        .def_readwrite("Name", &FColorParticleSystemParameter::Name)
        .def_readwrite("Value", &FColorParticleSystemParameter::Value)
  ;
}