#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSourceObjectData(py::module &m)
{
    py::class_< FSourceObjectData >(m, "FSourceObjectData")
        .def_readwrite("UniqueId", &FSourceObjectData::UniqueId)
        .def_readwrite("SourceObject", &FSourceObjectData::SourceObject)
        .def_readwrite("SourceLocation", &FSourceObjectData::SourceLocation)
        .def_readwrite("InstigatedByController", &FSourceObjectData::InstigatedByController)
        .def_readwrite("DamageContext", &FSourceObjectData::DamageContext)
        .def_readwrite("StartDamageTime", &FSourceObjectData::StartDamageTime)
        .def_readwrite("TimeElapsedSinceLastDamage", &FSourceObjectData::TimeElapsedSinceLastDamage)
        .def_readwrite("ExplosionDef", &FSourceObjectData::ExplosionDef)
        .def_readwrite("ExplosionScaleIndex", &FSourceObjectData::ExplosionScaleIndex)
        .def_readwrite("InitialDamageRadius", &FSourceObjectData::InitialDamageRadius)
        .def_readwrite("Damage", &FSourceObjectData::Damage)
        .def_readwrite("Momentum", &FSourceObjectData::Momentum)
        .def_readwrite("DamageSource", &FSourceObjectData::DamageSource)
        .def_readwrite("DamageTypeDef", &FSourceObjectData::DamageTypeDef)
        .def_readwrite("ImpactDefinition", &FSourceObjectData::ImpactDefinition)
        .def_readwrite("DamageCauser", &FSourceObjectData::DamageCauser)
        .def_readwrite("HitObject", &FSourceObjectData::HitObject)
        .def_readwrite("BarrelSourceTime", &FSourceObjectData::BarrelSourceTime)
        .def_readwrite("PlantSourceTime", &FSourceObjectData::PlantSourceTime)
  ;
}