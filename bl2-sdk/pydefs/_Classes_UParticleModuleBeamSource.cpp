#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleBeamSource()
{
    class_< UParticleModuleBeamSource, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleBeamSource", no_init)
        .def_readwrite("SourceMethod", &UParticleModuleBeamSource::SourceMethod)
        .def_readwrite("SourceTangentMethod", &UParticleModuleBeamSource::SourceTangentMethod)
        .def_readwrite("SourceName", &UParticleModuleBeamSource::SourceName)
        .def_readwrite("Source", &UParticleModuleBeamSource::Source)
        .def_readwrite("SourceTangent", &UParticleModuleBeamSource::SourceTangent)
        .def_readwrite("SourceStrength", &UParticleModuleBeamSource::SourceStrength)
        .def("StaticClass", &UParticleModuleBeamSource::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}