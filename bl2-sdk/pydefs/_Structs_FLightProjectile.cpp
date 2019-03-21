#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLightProjectile(py::object m)
{
    py::class_< FLightProjectile >(m, "FLightProjectile")
        .def_readwrite("Location", &FLightProjectile::Location)
        .def_readwrite("PartLocation", &FLightProjectile::PartLocation)
        .def_readwrite("Velocity", &FLightProjectile::Velocity)
        .def_readwrite("PartRef", &FLightProjectile::PartRef)
        .def_readwrite("AudioRef", &FLightProjectile::AudioRef)
        .def_readwrite("FireDef", &FLightProjectile::FireDef)
        .def_readwrite("StartTime", &FLightProjectile::StartTime)
        .def_readwrite("NumRicochets", &FLightProjectile::NumRicochets)
        .def_readwrite("LastTraceTime", &FLightProjectile::LastTraceTime)
        .def_readwrite("LastSafeTraceStartLocation", &FLightProjectile::LastSafeTraceStartLocation)
        .def_readwrite("LastHitActor", &FLightProjectile::LastHitActor)
        .def_readwrite("Instigator", &FLightProjectile::Instigator)
        .def_readwrite("Damage", &FLightProjectile::Damage)
        .def_readwrite("FiringPatternIdx", &FLightProjectile::FiringPatternIdx)
        .def_readwrite("BulletFromClipType", &FLightProjectile::BulletFromClipType)
        .def_readwrite("bHitWater", &FLightProjectile::bHitWater)
        .def_readwrite("PenetrationCount", &FLightProjectile::PenetrationCount)
        .def_readwrite("Id", &FLightProjectile::Id)
        .def_readwrite("StartTrace", &FLightProjectile::StartTrace)
        .def_readwrite("EndTrace", &FLightProjectile::EndTrace)
        .def_readwrite("OriginalStartTrace", &FLightProjectile::OriginalStartTrace)
  ;
}