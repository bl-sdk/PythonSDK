#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGameMessage(py::module &m)
{
    py::class_< UGameMessage,  ULocalMessage   >(m, "UGameMessage")
        .def_readwrite("SwitchLevelMessage", &UGameMessage::SwitchLevelMessage)
        .def_readwrite("LeftMessage", &UGameMessage::LeftMessage)
        .def_readwrite("FailedTeamMessage", &UGameMessage::FailedTeamMessage)
        .def_readwrite("FailedPlaceMessage", &UGameMessage::FailedPlaceMessage)
        .def_readwrite("FailedSpawnMessage", &UGameMessage::FailedSpawnMessage)
        .def_readwrite("EnteredMessage", &UGameMessage::EnteredMessage)
        .def_readwrite("MaxedOutMessage", &UGameMessage::MaxedOutMessage)
        .def_readwrite("ArbitrationMessage", &UGameMessage::ArbitrationMessage)
        .def_readwrite("OvertimeMessage", &UGameMessage::OvertimeMessage)
        .def_readwrite("GlobalNameChange", &UGameMessage::GlobalNameChange)
        .def_readwrite("NewTeamMessage", &UGameMessage::NewTeamMessage)
        .def_readwrite("NewTeamMessageTrailer", &UGameMessage::NewTeamMessageTrailer)
        .def_readwrite("NoNameChange", &UGameMessage::NoNameChange)
        .def_readwrite("VoteStarted", &UGameMessage::VoteStarted)
        .def_readwrite("VotePassed", &UGameMessage::VotePassed)
        .def_readwrite("MustHaveStats", &UGameMessage::MustHaveStats)
        .def_readwrite("CantBeSpectator", &UGameMessage::CantBeSpectator)
        .def_readwrite("CantBePlayer", &UGameMessage::CantBePlayer)
        .def_readwrite("BecameSpectator", &UGameMessage::BecameSpectator)
        .def_readwrite("NewPlayerMessage", &UGameMessage::NewPlayerMessage)
        .def_readwrite("KickWarning", &UGameMessage::KickWarning)
        .def_readwrite("NewSpecMessage", &UGameMessage::NewSpecMessage)
        .def_readwrite("SpecEnteredMessage", &UGameMessage::SpecEnteredMessage)
        .def("StaticClass", &UGameMessage::StaticClass, py::return_value_policy::reference)
        .def("GetString", &UGameMessage::GetString)
          ;
}