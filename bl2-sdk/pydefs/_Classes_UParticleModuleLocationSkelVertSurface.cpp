#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleLocationSkelVertSurface()
{
    class_< UParticleModuleLocationSkelVertSurface, bases< UParticleModuleLocationBase >  , boost::noncopyable>("UParticleModuleLocationSkelVertSurface", no_init)
        .def_readwrite("SourceType", &UParticleModuleLocationSkelVertSurface::SourceType)
        .def_readwrite("UniversalOffset", &UParticleModuleLocationSkelVertSurface::UniversalOffset)
        .def_readwrite("SkelMeshActorParamName", &UParticleModuleLocationSkelVertSurface::SkelMeshActorParamName)
        .def_readwrite("ValidAssociatedBones", &UParticleModuleLocationSkelVertSurface::ValidAssociatedBones)
        .def_readwrite("NormalToCompare", &UParticleModuleLocationSkelVertSurface::NormalToCompare)
        .def_readwrite("NormalCheckToleranceDegrees", &UParticleModuleLocationSkelVertSurface::NormalCheckToleranceDegrees)
        .def_readwrite("NormalCheckTolerance", &UParticleModuleLocationSkelVertSurface::NormalCheckTolerance)
        .def_readwrite("ValidMaterialIndices", &UParticleModuleLocationSkelVertSurface::ValidMaterialIndices)
        .def("StaticClass", &UParticleModuleLocationSkelVertSurface::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}