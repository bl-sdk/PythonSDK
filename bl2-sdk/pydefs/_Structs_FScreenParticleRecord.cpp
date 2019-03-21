#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FScreenParticleRecord()
{
    class_< FScreenParticleRecord >("FScreenParticleRecord", no_init)
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