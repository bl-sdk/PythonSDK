#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleRequired()
{
    py::class_< UParticleModuleRequired,  UObject   >("UParticleModuleRequired")
        .def_readwrite("Material", &UParticleModuleRequired::Material)
        .def_readwrite("ScreenAlignment", &UParticleModuleRequired::ScreenAlignment)
        .def_readwrite("SortMode", &UParticleModuleRequired::SortMode)
        .def_readwrite("ParticleBurstMethod", &UParticleModuleRequired::ParticleBurstMethod)
        .def_readwrite("InterpolationMethod", &UParticleModuleRequired::InterpolationMethod)
        .def_readwrite("EmitterNormalsMode", &UParticleModuleRequired::EmitterNormalsMode)
        .def_readwrite("EmitterDuration", &UParticleModuleRequired::EmitterDuration)
        .def_readwrite("EmitterDurationLow", &UParticleModuleRequired::EmitterDurationLow)
        .def_readwrite("EmitterLoops", &UParticleModuleRequired::EmitterLoops)
        .def_readwrite("SpawnRate", &UParticleModuleRequired::SpawnRate)
        .def_readwrite("BurstList", &UParticleModuleRequired::BurstList)
        .def_readwrite("EmitterDelay", &UParticleModuleRequired::EmitterDelay)
        .def_readwrite("EmitterDelayLow", &UParticleModuleRequired::EmitterDelayLow)
        .def_readwrite("SubImages_Horizontal", &UParticleModuleRequired::SubImages_Horizontal)
        .def_readwrite("SubImages_Vertical", &UParticleModuleRequired::SubImages_Vertical)
        .def_readwrite("RandomImageTime", &UParticleModuleRequired::RandomImageTime)
        .def_readwrite("RandomImageChanges", &UParticleModuleRequired::RandomImageChanges)
        .def_readwrite("MaxDrawCount", &UParticleModuleRequired::MaxDrawCount)
        .def_readwrite("DownsampleThresholdScreenFraction", &UParticleModuleRequired::DownsampleThresholdScreenFraction)
        .def_readwrite("NormalsSphereCenter", &UParticleModuleRequired::NormalsSphereCenter)
        .def_readwrite("NormalsCylinderDirection", &UParticleModuleRequired::NormalsCylinderDirection)
        .def_readwrite("LODValidity", &UParticleModule::LODValidity)
        .def("StaticClass", &UParticleModuleRequired::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}