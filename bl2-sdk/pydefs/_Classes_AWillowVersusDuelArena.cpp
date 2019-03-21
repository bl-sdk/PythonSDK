#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowVersusDuelArena(py::object m)
{
    py::class_< AWillowVersusDuelArena,  AActor   >(m, "AWillowVersusDuelArena")
        .def_readwrite("DuelInfo", &AWillowVersusDuelArena::DuelInfo)
        .def_readwrite("ArenaIndex", &AWillowVersusDuelArena::ArenaIndex)
        .def_readwrite("Challenger", &AWillowVersusDuelArena::Challenger)
        .def_readwrite("Competitor", &AWillowVersusDuelArena::Competitor)
        .def_readwrite("DuelGlobals", &AWillowVersusDuelArena::DuelGlobals)
        .def_readwrite("ArenaMeshComponent", &AWillowVersusDuelArena::ArenaMeshComponent)
        .def_readwrite("ArenaMaterialInstance", &AWillowVersusDuelArena::ArenaMaterialInstance)
        .def_readwrite("ArenaStatus", &AWillowVersusDuelArena::ArenaStatus)
        .def_readwrite("CurrentChallengerTeamColorPrimary", &AWillowVersusDuelArena::CurrentChallengerTeamColorPrimary)
        .def_readwrite("CurrentChallengerTeamColorSecondary", &AWillowVersusDuelArena::CurrentChallengerTeamColorSecondary)
        .def_readwrite("CurrentChallengerTeamColorTertiary", &AWillowVersusDuelArena::CurrentChallengerTeamColorTertiary)
        .def_readwrite("CurrentCompetitorTeamColorPrimary", &AWillowVersusDuelArena::CurrentCompetitorTeamColorPrimary)
        .def_readwrite("CurrentCompetitorTeamColorSecondary", &AWillowVersusDuelArena::CurrentCompetitorTeamColorSecondary)
        .def_readwrite("CurrentCompetitorTeamColorTertiary", &AWillowVersusDuelArena::CurrentCompetitorTeamColorTertiary)
        .def("StaticClass", &AWillowVersusDuelArena::StaticClass, py::return_value_policy::reference)
        .def("eventDestroyDuelArena", &AWillowVersusDuelArena::eventDestroyDuelArena)
        .def("OnDuelEnd", &AWillowVersusDuelArena::OnDuelEnd)
        .def("eventCreateDuelArena", &AWillowVersusDuelArena::eventCreateDuelArena)
        .def("InitializeDuelArena", &AWillowVersusDuelArena::InitializeDuelArena)
        .def("ReplicatedEvent", &AWillowVersusDuelArena::ReplicatedEvent)
          ;
}