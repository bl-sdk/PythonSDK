#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCombatZoneSearchData(py::module &m)
{
    py::class_< FCombatZoneSearchData >(m, "FCombatZoneSearchData")
        .def_readwrite("ZoneMoveDist", &FCombatZoneSearchData::ZoneMoveDist)
        .def_readwrite("ZoneTimeLimit", &FCombatZoneSearchData::ZoneTimeLimit)
        .def_readwrite("TargetRange", &FCombatZoneSearchData::TargetRange)
        .def_readwrite("MinHeight", &FCombatZoneSearchData::MinHeight)
        .def_readwrite("LineOfSight", &FCombatZoneSearchData::LineOfSight)
        .def_readwrite("LineOfSightTimeLimit", &FCombatZoneSearchData::LineOfSightTimeLimit)
  ;
}