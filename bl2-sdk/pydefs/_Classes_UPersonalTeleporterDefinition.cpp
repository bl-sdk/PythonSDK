#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPersonalTeleporterDefinition()
{
    py::class_< UPersonalTeleporterDefinition,  UGBXDefinition   >("UPersonalTeleporterDefinition")
        .def_readwrite("ParticleEffect", &UPersonalTeleporterDefinition::ParticleEffect)
        .def_readwrite("PlayerTeleportedEffect", &UPersonalTeleporterDefinition::PlayerTeleportedEffect)
        .def_readwrite("PlayerTeleportedEffectLifespan", &UPersonalTeleporterDefinition::PlayerTeleportedEffectLifespan)
        .def_readwrite("SpawnDistance", &UPersonalTeleporterDefinition::SpawnDistance)
        .def_readwrite("ReturnTeleporterLocationOffset", &UPersonalTeleporterDefinition::ReturnTeleporterLocationOffset)
        .def_readwrite("PlaceTeleporterSound", &UPersonalTeleporterDefinition::PlaceTeleporterSound)
        .def_readwrite("EnterTeleporterSound", &UPersonalTeleporterDefinition::EnterTeleporterSound)
        .def_readwrite("AmbientTeleporterSound", &UPersonalTeleporterDefinition::AmbientTeleporterSound)
        .def_readwrite("CollisionRadius", &UPersonalTeleporterDefinition::CollisionRadius)
        .def_readwrite("CollisionHeight", &UPersonalTeleporterDefinition::CollisionHeight)
        .def_readwrite("ExitPointDistance", &UPersonalTeleporterDefinition::ExitPointDistance)
        .def("StaticClass", &UPersonalTeleporterDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}