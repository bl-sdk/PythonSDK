#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPlayerLineInfo()
{
    class_< FPlayerLineInfo >("FPlayerLineInfo", no_init)
        .def_readwrite("Avatar", &FPlayerLineInfo::Avatar)
        .def_readwrite("PRI", &FPlayerLineInfo::PRI)
        .def_readwrite("PlayerID", &FPlayerLineInfo::PlayerID)
        .def_readwrite("RoundKills", &FPlayerLineInfo::RoundKills)
        .def_readwrite("TotalKills", &FPlayerLineInfo::TotalKills)
  ;
}