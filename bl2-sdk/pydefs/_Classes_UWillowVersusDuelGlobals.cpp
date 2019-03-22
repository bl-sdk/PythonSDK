#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowVersusDuelGlobals(py::module &m)
{
    py::class_< UWillowVersusDuelGlobals,  UGBXDefinition   >(m, "UWillowVersusDuelGlobals")
        .def_readwrite("ArenaMaterialIndex", &UWillowVersusDuelGlobals::ArenaMaterialIndex)
        .def_readwrite("ArenaMaterialParamName", &UWillowVersusDuelGlobals::ArenaMaterialParamName)
        .def_readwrite("ArenaMesh", &UWillowVersusDuelGlobals::ArenaMesh)
        .def_readwrite("ArenaMeshRadiusActual", &UWillowVersusDuelGlobals::ArenaMeshRadiusActual)
        .def_readwrite("ArenaMeshRadiusDesired", &UWillowVersusDuelGlobals::ArenaMeshRadiusDesired)
        .def_readwrite("ArenaSetupTime", &UWillowVersusDuelGlobals::ArenaSetupTime)
        .def_readwrite("ArenaTakeDownTime", &UWillowVersusDuelGlobals::ArenaTakeDownTime)
        .def_readwrite("OnChallengeIssued", &UWillowVersusDuelGlobals::OnChallengeIssued)
        .def_readwrite("OnDuelStarted", &UWillowVersusDuelGlobals::OnDuelStarted)
        .def_readwrite("OnLeftDuelArena", &UWillowVersusDuelGlobals::OnLeftDuelArena)
        .def_readwrite("OnDuelWinLoss", &UWillowVersusDuelGlobals::OnDuelWinLoss)
        .def_readwrite("OnDuelDraw", &UWillowVersusDuelGlobals::OnDuelDraw)
        .def_readwrite("DuelArenaTimeout", &UWillowVersusDuelGlobals::DuelArenaTimeout)
        .def_readwrite("DuelChallengeCoolDown", &UWillowVersusDuelGlobals::DuelChallengeCoolDown)
        .def_readwrite("DuelChallengeTimeout", &UWillowVersusDuelGlobals::DuelChallengeTimeout)
        .def_readwrite("DuelLength", &UWillowVersusDuelGlobals::DuelLength)
        .def_readwrite("DuelTeams", &UWillowVersusDuelGlobals::DuelTeams)
          ;
}