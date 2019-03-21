#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOnlineStatsRow()
{
    class_< FOnlineStatsRow >("FOnlineStatsRow", no_init)
        .def_readwrite("PlayerID", &FOnlineStatsRow::PlayerID)
        .def_readwrite("Rank", &FOnlineStatsRow::Rank)
        .def_readwrite("NickName", &FOnlineStatsRow::NickName)
        .def_readwrite("Columns", &FOnlineStatsRow::Columns)
  ;
}