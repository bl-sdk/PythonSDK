#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleTrailSource()
{
    class_< UParticleModuleTrailSource, bases< UParticleModuleTrailBase >  , boost::noncopyable>("UParticleModuleTrailSource", no_init)
        .def_readwrite("SourceMethod", &UParticleModuleTrailSource::SourceMethod)
        .def_readwrite("SelectionMethod", &UParticleModuleTrailSource::SelectionMethod)
        .def_readwrite("SourceName", &UParticleModuleTrailSource::SourceName)
        .def_readwrite("SourceStrength", &UParticleModuleTrailSource::SourceStrength)
        .def_readwrite("SourceOffsetCount", &UParticleModuleTrailSource::SourceOffsetCount)
        .def_readwrite("SourceOffsetDefaults", &UParticleModuleTrailSource::SourceOffsetDefaults)
        .def("StaticClass", &UParticleModuleTrailSource::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}