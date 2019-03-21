#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FScreenParticleInitParams()
{
    class_< FScreenParticleInitParams >("FScreenParticleInitParams", no_init)
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