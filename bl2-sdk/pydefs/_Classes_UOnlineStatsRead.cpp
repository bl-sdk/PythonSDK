#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineStatsRead()
{
    py::class_< UOnlineStatsRead,  UOnlineStats   >("UOnlineStatsRead")
        .def_readwrite("ViewId", &UOnlineStatsRead::ViewId)
        .def_readwrite("SortColumnId", &UOnlineStatsRead::SortColumnId)
        .def_readwrite("ColumnIds", &UOnlineStatsRead::ColumnIds)
        .def_readwrite("TotalRowsInView", &UOnlineStatsRead::TotalRowsInView)
        .def_readwrite("Rows", &UOnlineStatsRead::Rows)
        .def_readwrite("ColumnMappings", &UOnlineStatsRead::ColumnMappings)
        .def_readwrite("ViewName", &UOnlineStatsRead::ViewName)
        .def_readwrite("TitleId", &UOnlineStatsRead::TitleId)
        .def("StaticClass", &UOnlineStatsRead::StaticClass, py::return_value_policy::reference)
        .def("GetRankForPlayer", &UOnlineStatsRead::GetRankForPlayer)
        .def("AddPlayer", &UOnlineStatsRead::AddPlayer)
        .def("IsStatZero", &UOnlineStatsRead::IsStatZero)
        .def("GetStatValueForPlayerAsString", &UOnlineStatsRead::GetStatValueForPlayerAsString)
        .def("SetFloatStatValueForPlayer", &UOnlineStatsRead::SetFloatStatValueForPlayer)
        .def("GetFloatStatValueForPlayer", &UOnlineStatsRead::GetFloatStatValueForPlayer)
        .def("SetIntStatValueForPlayer", &UOnlineStatsRead::SetIntStatValueForPlayer)
        .def("GetIntStatValueForPlayer", &UOnlineStatsRead::GetIntStatValueForPlayer)
        .def("eventOnReadComplete", &UOnlineStatsRead::eventOnReadComplete)
        .staticmethod("StaticClass")
  ;
}