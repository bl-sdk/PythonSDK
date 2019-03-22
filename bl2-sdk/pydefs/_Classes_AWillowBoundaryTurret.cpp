#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowBoundaryTurret(py::module &m)
{
    py::class_< AWillowBoundaryTurret,  AActor   >(m, "AWillowBoundaryTurret")
        .def_readwrite("ShotTime", &AWillowBoundaryTurret::ShotTime)
        .def_readwrite("SeekTime", &AWillowBoundaryTurret::SeekTime)
        .def_readwrite("FiringModeDef", &AWillowBoundaryTurret::FiringModeDef)
        .def_readwrite("ViewWidth", &AWillowBoundaryTurret::ViewWidth)
        .def_readwrite("KillDistance", &AWillowBoundaryTurret::KillDistance)
        .def_readwrite("WarnDistance", &AWillowBoundaryTurret::WarnDistance)
        .def_readwrite("ShootAkEvent", &AWillowBoundaryTurret::ShootAkEvent)
        .def_readwrite("MuzzleSocket1", &AWillowBoundaryTurret::MuzzleSocket1)
        .def_readwrite("MuzzleSocket2", &AWillowBoundaryTurret::MuzzleSocket2)
        .def_readwrite("PlayWarningSoundsAkEvent", &AWillowBoundaryTurret::PlayWarningSoundsAkEvent)
        .def_readwrite("StopWarningSoundsAkEvent", &AWillowBoundaryTurret::StopWarningSoundsAkEvent)
        .def_readwrite("BaseMesh", &AWillowBoundaryTurret::BaseMesh)
        .def_readwrite("TurretMesh", &AWillowBoundaryTurret::TurretMesh)
        .def_readwrite("LaserEffects1", &AWillowBoundaryTurret::LaserEffects1)
        .def_readwrite("LaserEffects2", &AWillowBoundaryTurret::LaserEffects2)
        .def_readwrite("WarningEffects", &AWillowBoundaryTurret::WarningEffects)
        .def_readwrite("CurrentTarget", &AWillowBoundaryTurret::CurrentTarget)
        .def_readwrite("PlayersInWarnZone", &AWillowBoundaryTurret::PlayersInWarnZone)
        .def("StaticClass", &AWillowBoundaryTurret::StaticClass, py::return_value_policy::reference)
        .def("IsLethalLocation", &AWillowBoundaryTurret::IsLethalLocation)
        .def("Shoot", &AWillowBoundaryTurret::Shoot)
        .def("eventSetInitialState", &AWillowBoundaryTurret::eventSetInitialState)
        .def("eventSetWarningEffects", &AWillowBoundaryTurret::eventSetWarningEffects)
        .def("eventUnwarnPlayer", &AWillowBoundaryTurret::eventUnwarnPlayer)
        .def("eventWarnPlayer", &AWillowBoundaryTurret::eventWarnPlayer)
        .def("eventKillPlayer", &AWillowBoundaryTurret::eventKillPlayer)
          ;
}