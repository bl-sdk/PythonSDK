#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowVersusDuelMessage(py::object m)
{
    py::class_< UWillowVersusDuelMessage,  ULocalMessage   >(m, "UWillowVersusDuelMessage")
        .def_readwrite("DuelingDisabled", &UWillowVersusDuelMessage::DuelingDisabled)
        .def_readwrite("AlreadyDueling", &UWillowVersusDuelMessage::AlreadyDueling)
        .def_readwrite("AlreadyChallenged", &UWillowVersusDuelMessage::AlreadyChallenged)
        .def_readwrite("DuelTimeout", &UWillowVersusDuelMessage::DuelTimeout)
        .def_readwrite("IssuedChallenge", &UWillowVersusDuelMessage::IssuedChallenge)
        .def_readwrite("ReceivedChallenge", &UWillowVersusDuelMessage::ReceivedChallenge)
        .def_readwrite("AcceptedChallenge", &UWillowVersusDuelMessage::AcceptedChallenge)
        .def_readwrite("DuelStart", &UWillowVersusDuelMessage::DuelStart)
        .def_readwrite("ArenaWarning", &UWillowVersusDuelMessage::ArenaWarning)
        .def_readwrite("DuelDraw", &UWillowVersusDuelMessage::DuelDraw)
        .def_readwrite("DuelWin", &UWillowVersusDuelMessage::DuelWin)
        .def_readwrite("DuelNotRightNow", &UWillowVersusDuelMessage::DuelNotRightNow)
        .def("StaticClass", &UWillowVersusDuelMessage::StaticClass, py::return_value_policy::reference)
        .def("GetLifeTime", &UWillowVersusDuelMessage::GetLifeTime)
        .def("GetMsgType", &UWillowVersusDuelMessage::GetMsgType)
        .def("GetString", &UWillowVersusDuelMessage::GetString)
          ;
}