#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FServerResponseLine()
{
    class_< FServerResponseLine >("FServerResponseLine", no_init)
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