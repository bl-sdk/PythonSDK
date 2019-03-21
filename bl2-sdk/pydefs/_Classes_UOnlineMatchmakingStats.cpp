#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UOnlineMatchmakingStats()
{
    class_< UOnlineMatchmakingStats, bases< UObject >  , boost::noncopyable>("UOnlineMatchmakingStats", no_init)
        .def("StaticClass", &UOnlineMatchmakingStats::StaticClass, return_value_policy< reference_existing_object >())
        .def("StopTimer", &UOnlineMatchmakingStats::StopTimer)
        .def("StartTimer", &UOnlineMatchmakingStats::StartTimer)
        .staticmethod("StaticClass")
  ;
}