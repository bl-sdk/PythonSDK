#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FExplosionScaleData(py::module &m)
{
    py::class_< FExplosionScaleData >(m, "FExplosionScaleData")
        .def_readwrite("ExplosionPSTemplate", &FExplosionScaleData::ExplosionPSTemplate)
        .def_readwrite("MinRadius", &FExplosionScaleData::MinRadius)
        .def_readwrite("MaxRadius", &FExplosionScaleData::MaxRadius)
        .def_readwrite("MinParticleScale", &FExplosionScaleData::MinParticleScale)
        .def_readwrite("MaxParticleScale", &FExplosionScaleData::MaxParticleScale)
        .def_readwrite("ExplosionAkEvent", &FExplosionScaleData::ExplosionAkEvent)
        .def_readwrite("CameraAnim", &FExplosionScaleData::CameraAnim)
        .def_readwrite("MinCameraEffectDistance", &FExplosionScaleData::MinCameraEffectDistance)
        .def_readwrite("MaxCameraEffectDistance", &FExplosionScaleData::MaxCameraEffectDistance)
        .def_readwrite("FFWaveform", &FExplosionScaleData::FFWaveform)
        .def_readwrite("ImpactEffect", &FExplosionScaleData::ImpactEffect)
        .def_readwrite("MaxDamageDuration", &FExplosionScaleData::MaxDamageDuration)
        .def_readwrite("DamageInterval", &FExplosionScaleData::DamageInterval)
  ;
}