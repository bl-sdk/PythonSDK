#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FColorParticleSystemParameter(py::module &m)
{
    py::class_< FColorParticleSystemParameter >(m, "FColorParticleSystemParameter")
        .def_readwrite("Name", &FColorParticleSystemParameter::Name)
        .def_readwrite("Value", &FColorParticleSystemParameter::Value)
  ;
}