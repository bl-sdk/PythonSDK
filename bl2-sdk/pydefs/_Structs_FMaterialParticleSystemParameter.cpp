#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMaterialParticleSystemParameter(py::module &m)
{
    py::class_< FMaterialParticleSystemParameter >(m, "FMaterialParticleSystemParameter")
        .def_readwrite("Name", &FMaterialParticleSystemParameter::Name)
        .def_readwrite("Value", &FMaterialParticleSystemParameter::Value)
  ;
}