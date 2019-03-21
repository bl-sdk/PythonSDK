#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FServerResponseLine()
{
    py::class_< FServerResponseLine >("FServerResponseLine")
        .def_readwrite("ServerID", &FServerResponseLine::ServerID)
        .def_readwrite("IP", &FServerResponseLine::IP)
        .def_readwrite("Port", &FServerResponseLine::Port)
        .def_readwrite("QueryPort", &FServerResponseLine::QueryPort)
        .def_readwrite("ServerName", &FServerResponseLine::ServerName)
        .def_readwrite("MapName", &FServerResponseLine::MapName)
        .def_readwrite("GameType", &FServerResponseLine::GameType)
        .def_readwrite("CurrentPlayers", &FServerResponseLine::CurrentPlayers)
        .def_readwrite("MaxPlayers", &FServerResponseLine::MaxPlayers)
        .def_readwrite("Ping", &FServerResponseLine::Ping)
        .def_readwrite("ServerInfo", &FServerResponseLine::ServerInfo)
        .def_readwrite("PlayerInfo", &FServerResponseLine::PlayerInfo)
  ;
}