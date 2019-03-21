#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ATeamInfo()
{
    class_< ATeamInfo, bases< AReplicationInfo >  , boost::noncopyable>("ATeamInfo", no_init)
        .def_readwrite("TeamName", &ATeamInfo::TeamName)
        .def_readwrite("Size", &ATeamInfo::Size)
        .def_readwrite("Score", &ATeamInfo::Score)
        .def_readwrite("TeamIndex", &ATeamInfo::TeamIndex)
        .def_readwrite("TeamColor", &ATeamInfo::TeamColor)
        .def("StaticClass", &ATeamInfo::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetTeamNum", &ATeamInfo::GetTeamNum)
        .def("GetHumanReadableName", &ATeamInfo::GetHumanReadableName)
        .def("RemoveFromTeam", &ATeamInfo::RemoveFromTeam)
        .def("AddToTeam", &ATeamInfo::AddToTeam)
        .def("eventDestroyed", &ATeamInfo::eventDestroyed)
        .def("eventReplicatedEvent", &ATeamInfo::eventReplicatedEvent)
        .staticmethod("StaticClass")
  ;
}