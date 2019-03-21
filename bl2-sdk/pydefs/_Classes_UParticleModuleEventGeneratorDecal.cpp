#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleEventGeneratorDecal()
{
    class_< UParticleModuleEventGeneratorDecal, bases< UParticleModuleEventGenerator >  , boost::noncopyable>("UParticleModuleEventGeneratorDecal", no_init)
        .def_readwrite("DecalMaterials", &UParticleModuleEventGeneratorDecal::DecalMaterials)
        .def_readwrite("DecalWidth", &UParticleModuleEventGeneratorDecal::DecalWidth)
        .def_readwrite("DecalHeight", &UParticleModuleEventGeneratorDecal::DecalHeight)
        .def_readwrite("SizeVariance", &UParticleModuleEventGeneratorDecal::SizeVariance)
        .def_readwrite("DecalThickness", &UParticleModuleEventGeneratorDecal::DecalThickness)
        .def_readwrite("DecalLifeSpan", &UParticleModuleEventGeneratorDecal::DecalLifeSpan)
        .def_readwrite("DecalDepthBias", &UParticleModuleEventGeneratorDecal::DecalDepthBias)
        .def_readwrite("DecalBlendRange", &UParticleModuleEventGeneratorDecal::DecalBlendRange)
        .def("StaticClass", &UParticleModuleEventGeneratorDecal::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventSpawnDecal", &UParticleModuleEventGeneratorDecal::eventSpawnDecal)
        .staticmethod("StaticClass")
  ;
}