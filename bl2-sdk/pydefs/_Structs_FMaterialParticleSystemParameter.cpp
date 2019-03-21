#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMaterialParticleSystemParameter()
{
    py::class_< FMaterialParticleSystemParameter >("FMaterialParticleSystemParameter")
        .def_readwrite("Name", &FMaterialParticleSystemParameter::Name)
        .def_readwrite("Value", &FMaterialParticleSystemParameter::Value)
  ;
}