#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FActorParticleSystemParameter(py::object m)
{
    py::class_< FActorParticleSystemParameter >(m, "FActorParticleSystemParameter")
        .def_readwrite("Name", &FActorParticleSystemParameter::Name)
        .def_readwrite("Context", &FActorParticleSystemParameter::Context)
  ;
}