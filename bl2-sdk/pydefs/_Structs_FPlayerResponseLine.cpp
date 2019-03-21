#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPlayerResponseLine()
{
    py::class_< FPlayerResponseLine >("FPlayerResponseLine")
        .def_readwrite("PlayerNum", &FPlayerResponseLine::PlayerNum)
        .def_readwrite("PlayerID", &FPlayerResponseLine::PlayerID)
        .def_readwrite("PlayerName", &FPlayerResponseLine::PlayerName)
        .def_readwrite("Ping", &FPlayerResponseLine::Ping)
        .def_readwrite("Score", &FPlayerResponseLine::Score)
        .def_readwrite("StatsID", &FPlayerResponseLine::StatsID)
        .def_readwrite("PlayerInfo", &FPlayerResponseLine::PlayerInfo)
  ;
}