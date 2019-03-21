#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AGameReplicationInfo()
{
    py::class_< AGameReplicationInfo,  AReplicationInfo   >("AGameReplicationInfo")
        .def_readwrite("VfTable_IIResourcePoolProvider", &AGameReplicationInfo::VfTable_IIResourcePoolProvider)
        .def_readwrite("GameClass", &AGameReplicationInfo::GameClass)
        .def_readwrite("RemainingTime", &AGameReplicationInfo::RemainingTime)
        .def_readwrite("ElapsedTime", &AGameReplicationInfo::ElapsedTime)
        .def_readwrite("RemainingMinute", &AGameReplicationInfo::RemainingMinute)
        .def_readwrite("GoalScore", &AGameReplicationInfo::GoalScore)
        .def_readwrite("TimeLimit", &AGameReplicationInfo::TimeLimit)
        .def_readwrite("Teams", &AGameReplicationInfo::Teams)
        .def_readwrite("ServerName", &AGameReplicationInfo::ServerName)
        .def_readwrite("Winner", &AGameReplicationInfo::Winner)
        .def_readwrite("PRIArray", &AGameReplicationInfo::PRIArray)
        .def_readwrite("InactivePRIArray", &AGameReplicationInfo::InactivePRIArray)
        .def_readwrite("ResourcePoolManager", &AGameReplicationInfo::ResourcePoolManager)
        .def_readwrite("MusicInfo", &AGameReplicationInfo::MusicInfo)
        .def("StaticClass", &AGameReplicationInfo::StaticClass, py::return_value_policy::reference)
        .def("GetResourcePoolForResourceDefinition", &AGameReplicationInfo::GetResourcePoolForResourceDefinition)
        .def("eventShouldShowGore", &AGameReplicationInfo::eventShouldShowGore)
        .def("IsCoopMultiplayerGame", &AGameReplicationInfo::IsCoopMultiplayerGame)
        .def("IsMultiplayerGame", &AGameReplicationInfo::IsMultiplayerGame)
        .def("EndGame", &AGameReplicationInfo::EndGame)
        .def("StartMatch", &AGameReplicationInfo::StartMatch)
        .def("SetTeam", &AGameReplicationInfo::SetTeam)
        .def("RemovePRI", &AGameReplicationInfo::RemovePRI)
        .def("AddPRI", &AGameReplicationInfo::AddPRI)
        .def("OnSameTeam", &AGameReplicationInfo::OnSameTeam)
        .def("eventTimer", &AGameReplicationInfo::eventTimer)
        .def("eventDestroyed", &AGameReplicationInfo::eventDestroyed)
        .def("Reset", &AGameReplicationInfo::Reset)
        .def("ReceivedGameClass", &AGameReplicationInfo::ReceivedGameClass)
        .def("eventReplicatedEvent", &AGameReplicationInfo::eventReplicatedEvent)
        .def("eventPostBeginPlay", &AGameReplicationInfo::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}