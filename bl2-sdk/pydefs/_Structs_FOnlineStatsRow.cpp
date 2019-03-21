#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOnlineStatsRow(py::object m)
{
    py::class_< FOnlineStatsRow >(m, "FOnlineStatsRow")
        .def_readwrite("PlayerID", &FOnlineStatsRow::PlayerID)
        .def_readwrite("Rank", &FOnlineStatsRow::Rank)
        .def_readwrite("NickName", &FOnlineStatsRow::NickName)
        .def_readwrite("Columns", &FOnlineStatsRow::Columns)
  ;
}