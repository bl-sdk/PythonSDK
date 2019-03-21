#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPlayerLineInfo()
{
    py::class_< FPlayerLineInfo >("FPlayerLineInfo")
        .def_readwrite("Avatar", &FPlayerLineInfo::Avatar)
        .def_readwrite("PRI", &FPlayerLineInfo::PRI)
        .def_readwrite("PlayerID", &FPlayerLineInfo::PlayerID)
        .def_readwrite("RoundKills", &FPlayerLineInfo::RoundKills)
        .def_readwrite("TotalKills", &FPlayerLineInfo::TotalKills)
  ;
}