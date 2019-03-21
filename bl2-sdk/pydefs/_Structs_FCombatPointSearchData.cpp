#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCombatPointSearchData()
{
    class_< FCombatPointSearchData >("FCombatPointSearchData", no_init)
        .def_readwrite("PointRadius", &FCombatPointSearchData::PointRadius)
        .def_readwrite("ZoneMoveDist", &FCombatZoneSearchData::ZoneMoveDist)
        .def_readwrite("ZoneTimeLimit", &FCombatZoneSearchData::ZoneTimeLimit)
        .def_readwrite("TargetRange", &FCombatZoneSearchData::TargetRange)
        .def_readwrite("MinHeight", &FCombatZoneSearchData::MinHeight)
        .def_readwrite("LineOfSight", &FCombatZoneSearchData::LineOfSight)
        .def_readwrite("LineOfSightTimeLimit", &FCombatZoneSearchData::LineOfSightTimeLimit)
  ;
}