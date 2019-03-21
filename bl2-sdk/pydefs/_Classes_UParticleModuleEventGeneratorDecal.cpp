#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleEventGeneratorDecal(py::object m)
{
    py::class_< UParticleModuleEventGeneratorDecal,  UParticleModuleEventGenerator   >(m, "UParticleModuleEventGeneratorDecal")
        .def_readwrite("DecalMaterials", &UParticleModuleEventGeneratorDecal::DecalMaterials)
        .def_readwrite("DecalWidth", &UParticleModuleEventGeneratorDecal::DecalWidth)
        .def_readwrite("DecalHeight", &UParticleModuleEventGeneratorDecal::DecalHeight)
        .def_readwrite("SizeVariance", &UParticleModuleEventGeneratorDecal::SizeVariance)
        .def_readwrite("DecalThickness", &UParticleModuleEventGeneratorDecal::DecalThickness)
        .def_readwrite("DecalLifeSpan", &UParticleModuleEventGeneratorDecal::DecalLifeSpan)
        .def_readwrite("DecalDepthBias", &UParticleModuleEventGeneratorDecal::DecalDepthBias)
        .def_readwrite("DecalBlendRange", &UParticleModuleEventGeneratorDecal::DecalBlendRange)
        .def("StaticClass", &UParticleModuleEventGeneratorDecal::StaticClass, py::return_value_policy::reference)
        .def("eventSpawnDecal", &UParticleModuleEventGeneratorDecal::eventSpawnDecal)
          ;
}