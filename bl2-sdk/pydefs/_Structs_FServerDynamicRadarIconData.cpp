#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FServerDynamicRadarIconData()
{
    class_< FServerDynamicRadarIconData >("FServerDynamicRadarIconData", no_init)
        .def_readwrite("SourceObject", &FServerDynamicRadarIconData::SourceObject)
        .def_readwrite("Duration", &FServerDynamicRadarIconData::Duration)
        .def_readwrite("StartTime", &FServerDynamicRadarIconData::StartTime)
  ;
}