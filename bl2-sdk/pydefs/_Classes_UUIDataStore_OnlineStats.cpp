#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataStore_OnlineStats(py::module &m)
{
    py::class_< UUIDataStore_OnlineStats,  UUIDataStore_Remote   >(m, "UUIDataStore_OnlineStats")
        .def_readwrite("VfTable_IUIListElementProvider", &UUIDataStore_OnlineStats::VfTable_IUIListElementProvider)
        .def_readwrite("VfTable_IUIListElementCellProvider", &UUIDataStore_OnlineStats::VfTable_IUIListElementCellProvider)
        .def_readwrite("StatsReadClasses", &UUIDataStore_OnlineStats::StatsReadClasses)
        .def_readwrite("StatsReadName", &UUIDataStore_OnlineStats::StatsReadName)
        .def_readwrite("PlayerNickData", &UUIDataStore_OnlineStats::PlayerNickData)
        .def_readwrite("RankNameMetaData", &UUIDataStore_OnlineStats::RankNameMetaData)
        .def_readwrite("TotalRowsName", &UUIDataStore_OnlineStats::TotalRowsName)
        .def_readwrite("StatsReadObjects", &UUIDataStore_OnlineStats::StatsReadObjects)
        .def_readwrite("StatsRead", &UUIDataStore_OnlineStats::StatsRead)
        .def_readwrite("CurrentReadType", &UUIDataStore_OnlineStats::CurrentReadType)
        .def_readwrite("StatsInterface", &UUIDataStore_OnlineStats::StatsInterface)
        .def_readwrite("PlayerInterface", &UUIDataStore_OnlineStats::PlayerInterface)
        .def("SortResultsByRank", &UUIDataStore_OnlineStats::SortResultsByRank)
        .def("OnReadComplete", &UUIDataStore_OnlineStats::OnReadComplete)
        .def("eventShowGamercard", &UUIDataStore_OnlineStats::eventShowGamercard)
        .def("eventRefreshStats", &UUIDataStore_OnlineStats::eventRefreshStats)
        .def("SetStatsReadInfo", &UUIDataStore_OnlineStats::SetStatsReadInfo)
        .def("eventInit", &UUIDataStore_OnlineStats::eventInit)
          ;
}