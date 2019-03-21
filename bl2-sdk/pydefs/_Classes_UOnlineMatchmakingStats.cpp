#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineMatchmakingStats()
{
    py::class_< UOnlineMatchmakingStats,  UObject   >("UOnlineMatchmakingStats")
        .def("StaticClass", &UOnlineMatchmakingStats::StaticClass, py::return_value_policy::reference)
        .def("StopTimer", &UOnlineMatchmakingStats::StopTimer)
        .def("StartTimer", &UOnlineMatchmakingStats::StartTimer)
        .staticmethod("StaticClass")
  ;
}