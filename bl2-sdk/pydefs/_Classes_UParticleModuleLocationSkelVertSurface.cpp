#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleLocationSkelVertSurface()
{
    py::class_< UParticleModuleLocationSkelVertSurface,  UParticleModuleLocationBase   >("UParticleModuleLocationSkelVertSurface")
        .def_readwrite("SourceType", &UParticleModuleLocationSkelVertSurface::SourceType)
        .def_readwrite("UniversalOffset", &UParticleModuleLocationSkelVertSurface::UniversalOffset)
        .def_readwrite("SkelMeshActorParamName", &UParticleModuleLocationSkelVertSurface::SkelMeshActorParamName)
        .def_readwrite("ValidAssociatedBones", &UParticleModuleLocationSkelVertSurface::ValidAssociatedBones)
        .def_readwrite("NormalToCompare", &UParticleModuleLocationSkelVertSurface::NormalToCompare)
        .def_readwrite("NormalCheckToleranceDegrees", &UParticleModuleLocationSkelVertSurface::NormalCheckToleranceDegrees)
        .def_readwrite("NormalCheckTolerance", &UParticleModuleLocationSkelVertSurface::NormalCheckTolerance)
        .def_readwrite("ValidMaterialIndices", &UParticleModuleLocationSkelVertSurface::ValidMaterialIndices)
        .def("StaticClass", &UParticleModuleLocationSkelVertSurface::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}