#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIDataStore_OnlineStats()
{
    class_< UUIDataStore_OnlineStats, bases< UUIDataStore_Remote >  , boost::noncopyable>("UUIDataStore_OnlineStats", no_init)
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
        .def_readonly("UnknownData00", &UUIDataStore_OnlineStats::UnknownData00)
        .def_readwrite("PlayerInterface", &UUIDataStore_OnlineStats::PlayerInterface)
        .def_readonly("UnknownData01", &UUIDataStore_OnlineStats::UnknownData01)
        .def("StaticClass", &UUIDataStore_OnlineStats::StaticClass, return_value_policy< reference_existing_object >())
        .def("SortResultsByRank", &UUIDataStore_OnlineStats::SortResultsByRank)
        .def("OnReadComplete", &UUIDataStore_OnlineStats::OnReadComplete)
        .def("eventShowGamercard", &UUIDataStore_OnlineStats::eventShowGamercard)
        .def("eventRefreshStats", &UUIDataStore_OnlineStats::eventRefreshStats)
        .def("SetStatsReadInfo", &UUIDataStore_OnlineStats::SetStatsReadInfo)
        .def("eventInit", &UUIDataStore_OnlineStats::eventInit)
        .staticmethod("StaticClass")
  ;
}