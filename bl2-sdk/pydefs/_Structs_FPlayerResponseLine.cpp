#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPlayerResponseLine()
{
    class_< FPlayerResponseLine >("FPlayerResponseLine", no_init)
        .def_readwrite("PlayerNum", &FPlayerResponseLine::PlayerNum)
        .def_readwrite("PlayerID", &FPlayerResponseLine::PlayerID)
        .def_readwrite("PlayerName", &FPlayerResponseLine::PlayerName)
        .def_readwrite("Ping", &FPlayerResponseLine::Ping)
        .def_readwrite("Score", &FPlayerResponseLine::Score)
        .def_readwrite("StatsID", &FPlayerResponseLine::StatsID)
        .def_readwrite("PlayerInfo", &FPlayerResponseLine::PlayerInfo)
  ;
}