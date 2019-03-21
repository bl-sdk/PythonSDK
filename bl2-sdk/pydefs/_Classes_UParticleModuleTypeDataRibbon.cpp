#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleTypeDataRibbon()
{
    class_< UParticleModuleTypeDataRibbon, bases< UParticleModuleTypeDataBase >  , boost::noncopyable>("UParticleModuleTypeDataRibbon", no_init)
        .def_readwrite("MaxTessellationBetweenParticles", &UParticleModuleTypeDataRibbon::MaxTessellationBetweenParticles)
        .def_readwrite("SheetsPerTrail", &UParticleModuleTypeDataRibbon::SheetsPerTrail)
        .def_readwrite("MaxTrailCount", &UParticleModuleTypeDataRibbon::MaxTrailCount)
        .def_readwrite("MaxParticleInTrailCount", &UParticleModuleTypeDataRibbon::MaxParticleInTrailCount)
        .def_readwrite("RenderAxis", &UParticleModuleTypeDataRibbon::RenderAxis)
        .def_readwrite("TangentSpawningScalar", &UParticleModuleTypeDataRibbon::TangentSpawningScalar)
        .def_readwrite("TilingDistance", &UParticleModuleTypeDataRibbon::TilingDistance)
        .def_readwrite("DistanceTessellationStepSize", &UParticleModuleTypeDataRibbon::DistanceTessellationStepSize)
        .def_readwrite("TangentTessellationScalar", &UParticleModuleTypeDataRibbon::TangentTessellationScalar)
        .def("StaticClass", &UParticleModuleTypeDataRibbon::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}