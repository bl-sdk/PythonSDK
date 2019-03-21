#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleTrailSource()
{
    py::class_< UParticleModuleTrailSource,  UParticleModuleTrailBase   >("UParticleModuleTrailSource")
        .def_readwrite("SourceMethod", &UParticleModuleTrailSource::SourceMethod)
        .def_readwrite("SelectionMethod", &UParticleModuleTrailSource::SelectionMethod)
        .def_readwrite("SourceName", &UParticleModuleTrailSource::SourceName)
        .def_readwrite("SourceStrength", &UParticleModuleTrailSource::SourceStrength)
        .def_readwrite("SourceOffsetCount", &UParticleModuleTrailSource::SourceOffsetCount)
        .def_readwrite("SourceOffsetDefaults", &UParticleModuleTrailSource::SourceOffsetDefaults)
        .def("StaticClass", &UParticleModuleTrailSource::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}