#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ATeamInfo(py::module &m)
{
    py::class_< ATeamInfo,  AReplicationInfo   >(m, "ATeamInfo")
        .def_readwrite("TeamName", &ATeamInfo::TeamName)
        .def_readwrite("Size", &ATeamInfo::Size)
        .def_readwrite("Score", &ATeamInfo::Score)
        .def_readwrite("TeamIndex", &ATeamInfo::TeamIndex)
        .def_readwrite("TeamColor", &ATeamInfo::TeamColor)
        .def("StaticClass", &ATeamInfo::StaticClass, py::return_value_policy::reference)
        .def("GetTeamNum", &ATeamInfo::GetTeamNum)
        .def("GetHumanReadableName", &ATeamInfo::GetHumanReadableName)
        .def("RemoveFromTeam", &ATeamInfo::RemoveFromTeam)
        .def("AddToTeam", &ATeamInfo::AddToTeam)
        .def("eventDestroyed", &ATeamInfo::eventDestroyed)
        .def("eventReplicatedEvent", &ATeamInfo::eventReplicatedEvent)
          ;
}