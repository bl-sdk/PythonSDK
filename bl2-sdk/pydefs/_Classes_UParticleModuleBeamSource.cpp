#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleBeamSource(py::module &m)
{
    py::class_< UParticleModuleBeamSource,  UParticleModule   >(m, "UParticleModuleBeamSource")
        .def_readwrite("SourceMethod", &UParticleModuleBeamSource::SourceMethod)
        .def_readwrite("SourceTangentMethod", &UParticleModuleBeamSource::SourceTangentMethod)
        .def_readwrite("SourceName", &UParticleModuleBeamSource::SourceName)
        .def_readwrite("Source", &UParticleModuleBeamSource::Source)
        .def_readwrite("SourceTangent", &UParticleModuleBeamSource::SourceTangent)
        .def_readwrite("SourceStrength", &UParticleModuleBeamSource::SourceStrength)
          ;
}