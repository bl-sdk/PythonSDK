#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_BunkerBoss_Flight(py::module &m)
{
    py::class_< UAction_BunkerBoss_Flight,  UAction_FollowPath   >(m, "UAction_BunkerBoss_Flight")
		.def_static("StaticClass", &UAction_BunkerBoss_Flight::StaticClass, py::return_value_policy::reference)
        .def_readwrite("OffsetDistance", &UAction_BunkerBoss_Flight::OffsetDistance)
        .def_readwrite("TimeBetweenAttacks", &UAction_BunkerBoss_Flight::TimeBetweenAttacks)
        .def_readwrite("CircleFlightDistance", &UAction_BunkerBoss_Flight::CircleFlightDistance)
        .def_readwrite("CircleFlightHeight", &UAction_BunkerBoss_Flight::CircleFlightHeight)
        .def_readwrite("NonTargetOrigin", &UAction_BunkerBoss_Flight::NonTargetOrigin)
        .def_readwrite("NearDeathExpression", &UAction_BunkerBoss_Flight::NearDeathExpression)
        .def_readwrite("MoveToPointNearDeath", &UAction_BunkerBoss_Flight::MoveToPointNearDeath)
        .def_readwrite("PerchLoopExpression", &UAction_BunkerBoss_Flight::PerchLoopExpression)
        .def_readwrite("Turn360Anim", &UAction_BunkerBoss_Flight::Turn360Anim)
        .def_readwrite("BackupPerchFlag", &UAction_BunkerBoss_Flight::BackupPerchFlag)
        .def_readwrite("DeathPerchName", &UAction_BunkerBoss_Flight::DeathPerchName)
        .def_readwrite("RotationOffsetName", &UAction_BunkerBoss_Flight::RotationOffsetName)
        .def_readwrite("LastLocation", &UAction_BunkerBoss_Flight::LastLocation)
        .def_readwrite("BackupOffset", &UAction_BunkerBoss_Flight::BackupOffset)
        .def_readwrite("TimeOfNextAttack", &UAction_BunkerBoss_Flight::TimeOfNextAttack)
        .def_readwrite("NextValidationTime", &UAction_BunkerBoss_Flight::NextValidationTime)
        .def_readwrite("BackupDist", &UAction_BunkerBoss_Flight::BackupDist)
        .def_readwrite("PerchFailCount", &UAction_BunkerBoss_Flight::PerchFailCount)
        .def_readwrite("PerchOffset", &UAction_BunkerBoss_Flight::PerchOffset)
        .def_readwrite("DeathPerch", &UAction_BunkerBoss_Flight::DeathPerch)
        .def_readwrite("RotOffsetBone", &UAction_BunkerBoss_Flight::RotOffsetBone)
        .def("PerchStart", &UAction_BunkerBoss_Flight::PerchStart)
        .def("GetFlightPathToPerch", &UAction_BunkerBoss_Flight::GetFlightPathToPerch)
        .def("PerchDone", &UAction_BunkerBoss_Flight::PerchDone)
        .def("ReadyToDie", &UAction_BunkerBoss_Flight::ReadyToDie)
        .def("eventStop", &UAction_BunkerBoss_Flight::eventStop)
        .def("eventStart", &UAction_BunkerBoss_Flight::eventStart)
        .def("eventCanRun", &UAction_BunkerBoss_Flight::eventCanRun)
          ;
}