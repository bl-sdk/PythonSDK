#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FScreenParticleRecord(py::object m)
{
    py::class_< FScreenParticleRecord >(m, "FScreenParticleRecord")
        .def_readwrite("Tag", &FScreenParticleRecord::Tag)
        .def_readwrite("Template", &FScreenParticleRecord::Template)
        .def_readwrite("MatParamName", &FScreenParticleRecord::MatParamName)
        .def_readwrite("Component", &FScreenParticleRecord::Component)
        .def_readwrite("AppliedModifiers", &FScreenParticleRecord::AppliedModifiers)
        .def_readwrite("ContentDims", &FScreenParticleRecord::ContentDims)
        .def_readwrite("ParticleDepth", &FScreenParticleRecord::ParticleDepth)
        .def_readwrite("ScalingMode", &FScreenParticleRecord::ScalingMode)
        .def_readwrite("StopParamsOT", &FScreenParticleRecord::StopParamsOT)
        .def_readwrite("StopTime", &FScreenParticleRecord::StopTime)
  ;
}