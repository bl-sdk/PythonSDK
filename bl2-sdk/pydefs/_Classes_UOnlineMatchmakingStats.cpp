#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineMatchmakingStats(py::module &m)
{
    py::class_< UOnlineMatchmakingStats,  UObject   >(m, "UOnlineMatchmakingStats")
        .def("StopTimer", &UOnlineMatchmakingStats::StopTimer)
        .def("StartTimer", &UOnlineMatchmakingStats::StartTimer)
          ;
}