#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FScalarParticleSystemParameter()
{
    py::class_< FScalarParticleSystemParameter >("FScalarParticleSystemParameter")
        .def_readwrite("Name", &FScalarParticleSystemParameter::Name)
        .def_readwrite("Value", &FScalarParticleSystemParameter::Value)
  ;
}