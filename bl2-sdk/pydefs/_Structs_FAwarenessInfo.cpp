#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAwarenessInfo()
{
    class_< FAwarenessInfo >("FAwarenessInfo", no_init)
        .def_readwrite("Location", &FAwarenessInfo::Location)
        .def_readwrite("Radius", &FAwarenessInfo::Radius)
        .def_readwrite("AwarenessZoneName", &FAwarenessInfo::AwarenessZoneName)
        .def_readwrite("ZoneColor", &FAwarenessInfo::ZoneColor)
  ;
}