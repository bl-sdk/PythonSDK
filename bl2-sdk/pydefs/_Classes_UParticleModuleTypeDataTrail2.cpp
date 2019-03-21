#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleTypeDataTrail2()
{
    class_< UParticleModuleTypeDataTrail2, bases< UParticleModuleTypeDataBase >  , boost::noncopyable>("UParticleModuleTypeDataTrail2", no_init)
        .def_readwrite("TessellationFactor", &UParticleModuleTypeDataTrail2::TessellationFactor)
        .def_readwrite("TessellationFactorDistance", &UParticleModuleTypeDataTrail2::TessellationFactorDistance)
        .def_readwrite("TessellationStrength", &UParticleModuleTypeDataTrail2::TessellationStrength)
        .def_readwrite("TextureTile", &UParticleModuleTypeDataTrail2::TextureTile)
        .def_readwrite("Sheets", &UParticleModuleTypeDataTrail2::Sheets)
        .def_readwrite("MaxTrailCount", &UParticleModuleTypeDataTrail2::MaxTrailCount)
        .def_readwrite("MaxParticleInTrailCount", &UParticleModuleTypeDataTrail2::MaxParticleInTrailCount)
        .def("StaticClass", &UParticleModuleTypeDataTrail2::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}