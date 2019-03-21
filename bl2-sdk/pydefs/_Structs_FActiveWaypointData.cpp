#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FActiveWaypointData()
{
    class_< FActiveWaypointData >("FActiveWaypointData", no_init)
        .def_readwrite("WaypointLocation", &FActiveWaypointData::WaypointLocation)
        .def_readwrite("WaypointActor", &FActiveWaypointData::WaypointActor)
        .def_readwrite("WaypointObjective", &FActiveWaypointData::WaypointObjective)
  ;
}