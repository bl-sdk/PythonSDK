#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineStatsInterface(py::module &m)
{
    py::class_< UOnlineStatsInterface,  UInterface   >(m, "UOnlineStatsInterface")
        .def("StaticClass", &UOnlineStatsInterface::StaticClass, py::return_value_policy::reference)
        .def("CalcAggregateSkill", &UOnlineStatsInterface::CalcAggregateSkill)
        .def("RegisterStatGuid", &UOnlineStatsInterface::RegisterStatGuid)
        .def("GetClientStatGuid", &UOnlineStatsInterface::GetClientStatGuid)
        .def("ClearRegisterHostStatGuidCompleteDelegateDelegate", &UOnlineStatsInterface::ClearRegisterHostStatGuidCompleteDelegateDelegate)
        .def("AddRegisterHostStatGuidCompleteDelegate", &UOnlineStatsInterface::AddRegisterHostStatGuidCompleteDelegate)
        .def("OnRegisterHostStatGuidComplete", &UOnlineStatsInterface::OnRegisterHostStatGuidComplete)
        .def("RegisterHostStatGuid", &UOnlineStatsInterface::RegisterHostStatGuid)
        .def("GetHostStatGuid", &UOnlineStatsInterface::GetHostStatGuid)
        .def("WriteOnlinePlayerScores", &UOnlineStatsInterface::WriteOnlinePlayerScores)
        .def("ClearFlushOnlineStatsCompleteDelegate", &UOnlineStatsInterface::ClearFlushOnlineStatsCompleteDelegate)
        .def("AddFlushOnlineStatsCompleteDelegate", &UOnlineStatsInterface::AddFlushOnlineStatsCompleteDelegate)
        .def("OnFlushOnlineStatsComplete", &UOnlineStatsInterface::OnFlushOnlineStatsComplete)
        .def("FlushOnlineStats", &UOnlineStatsInterface::FlushOnlineStats)
        .def("WriteOnlineStats", &UOnlineStatsInterface::WriteOnlineStats)
        .def("FreeStats", &UOnlineStatsInterface::FreeStats)
        .def("ClearReadOnlineStatsCompleteDelegate", &UOnlineStatsInterface::ClearReadOnlineStatsCompleteDelegate)
        .def("AddReadOnlineStatsCompleteDelegate", &UOnlineStatsInterface::AddReadOnlineStatsCompleteDelegate)
        .def("OnReadOnlineStatsComplete", &UOnlineStatsInterface::OnReadOnlineStatsComplete)
        .def("ReadOnlineStatsByRankAroundPlayer", &UOnlineStatsInterface::ReadOnlineStatsByRankAroundPlayer)
        .def("ReadOnlineStatsByRank", &UOnlineStatsInterface::ReadOnlineStatsByRank)
        .def("ReadOnlineStatsForFriends", &UOnlineStatsInterface::ReadOnlineStatsForFriends)
        .def("ReadOnlineStats", &UOnlineStatsInterface::ReadOnlineStats)
          ;
}