#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FScreenParticleInitParams(py::object m)
{
    py::class_< FScreenParticleInitParams >(m, "FScreenParticleInitParams")
        .def_readwrite("Template", &FScreenParticleInitParams::Template)
        .def_readwrite("ScreenParticleModifiers", &FScreenParticleInitParams::ScreenParticleModifiers)
        .def_readwrite("TemplateScreenParticleMaterial", &FScreenParticleInitParams::TemplateScreenParticleMaterial)
        .def_readwrite("MatParamName", &FScreenParticleInitParams::MatParamName)
        .def_readwrite("ParticleTag", &FScreenParticleInitParams::ParticleTag)
        .def_readwrite("ContentDims", &FScreenParticleInitParams::ContentDims)
        .def_readwrite("ParticleDepth", &FScreenParticleInitParams::ParticleDepth)
        .def_readwrite("ScalingMode", &FScreenParticleInitParams::ScalingMode)
        .def_readwrite("StopParamsOT", &FScreenParticleInitParams::StopParamsOT)
  ;
}