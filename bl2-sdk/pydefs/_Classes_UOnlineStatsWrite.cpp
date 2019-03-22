#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineStatsWrite(py::module &m)
{
    py::class_< UOnlineStatsWrite,  UObject   >(m, "UOnlineStatsWrite")
        .def_readwrite("StatMappings", &UOnlineStatsWrite::StatMappings)
        .def_readwrite("Properties", &UOnlineStatsWrite::Properties)
        .def_readwrite("ViewIds", &UOnlineStatsWrite::ViewIds)
        .def_readwrite("ArbitratedViewIds", &UOnlineStatsWrite::ArbitratedViewIds)
        .def_readwrite("RatingId", &UOnlineStatsWrite::RatingId)
        .def_readwrite("ViewIdMappings", &UOnlineStats::ViewIdMappings)
        .def("StaticClass", &UOnlineStatsWrite::StaticClass, py::return_value_policy::reference)
        .def("DecrementIntStat", &UOnlineStatsWrite::DecrementIntStat)
        .def("DecrementFloatStat", &UOnlineStatsWrite::DecrementFloatStat)
        .def("IncrementIntStat", &UOnlineStatsWrite::IncrementIntStat)
        .def("IncrementFloatStat", &UOnlineStatsWrite::IncrementFloatStat)
        .def("SetIntStat", &UOnlineStatsWrite::SetIntStat)
        .def("SetFloatStat", &UOnlineStatsWrite::SetFloatStat)
        .def("GetStatName", &UOnlineStatsWrite::GetStatName)
        .def("GetStatId", &UOnlineStatsWrite::GetStatId)
        .def("OnStatsWriteComplete", &UOnlineStatsWrite::OnStatsWriteComplete)
        .def("GetViewName", &UOnlineStats::GetViewName)
        .def("GetViewId", &UOnlineStats::GetViewId)
          ;
}