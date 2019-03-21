#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVectorParticleSystemParameter(py::object m)
{
    py::class_< FVectorParticleSystemParameter >(m, "FVectorParticleSystemParameter")
        .def_readwrite("Name", &FVectorParticleSystemParameter::Name)
        .def_readwrite("Value", &FVectorParticleSystemParameter::Value)
        .def_readwrite("VectorScale", &FVectorParticleSystemParameter::VectorScale)
  ;
}