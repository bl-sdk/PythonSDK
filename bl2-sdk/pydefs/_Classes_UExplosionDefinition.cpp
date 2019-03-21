#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UExplosionDefinition()
{
    py::class_< UExplosionDefinition,  UGBXDefinition   >("UExplosionDefinition")
        .def_readwrite("ExplosionAkEvent", &UExplosionDefinition::ExplosionAkEvent)
        .def_readwrite("MultipleExplosionsAkEvent", &UExplosionDefinition::MultipleExplosionsAkEvent)
        .def_readwrite("ExplosionPSTemplate", &UExplosionDefinition::ExplosionPSTemplate)
        .def_readwrite("DrawScale", &UExplosionDefinition::DrawScale)
        .def_readwrite("ExplosionScale", &UExplosionDefinition::ExplosionScale)
        .def_readwrite("CameraAnim", &UExplosionDefinition::CameraAnim)
        .def_readwrite("MinCameraEffectDistance", &UExplosionDefinition::MinCameraEffectDistance)
        .def_readwrite("MaxCameraEffectDistance", &UExplosionDefinition::MaxCameraEffectDistance)
        .def_readwrite("FFWaveform", &UExplosionDefinition::FFWaveform)
        .def_readwrite("DamageTypeDef", &UExplosionDefinition::DamageTypeDef)
        .def_readwrite("ImpactEffect", &UExplosionDefinition::ImpactEffect)
        .def_readwrite("ImpactTraceLength", &UExplosionDefinition::ImpactTraceLength)
        .def_readwrite("RecentExplosionTracker", &UExplosionDefinition::RecentExplosionTracker)
        .def_readwrite("ExplosionSoundStackingPreventionDelay", &UExplosionDefinition::ExplosionSoundStackingPreventionDelay)
        .def_readwrite("ExplosionSoundStackingMaxDistanceSquared", &UExplosionDefinition::ExplosionSoundStackingMaxDistanceSquared)
        .def("StaticClass", &UExplosionDefinition::StaticClass, py::return_value_policy::reference)
        .def("DidAnExplosionForThisInstigatorJustGoOff", &UExplosionDefinition::DidAnExplosionForThisInstigatorJustGoOff)
        .def("MakeExplodyShakes", &UExplosionDefinition::MakeExplodyShakes)
        .def("PlayExplosionCameraAnim", &UExplosionDefinition::PlayExplosionCameraAnim)
        .def("PlayImpactEffects", &UExplosionDefinition::PlayImpactEffects)
        .def("PlayMultipleExplosionsSound", &UExplosionDefinition::PlayMultipleExplosionsSound)
        .def("eventPlayExplosion", &UExplosionDefinition::eventPlayExplosion)
        .def("IsExplosionDebugEnabled", &UExplosionDefinition::IsExplosionDebugEnabled)
        .def("ToggleExplosionDebug", &UExplosionDefinition::ToggleExplosionDebug)
        .staticmethod("StaticClass")
  ;
}