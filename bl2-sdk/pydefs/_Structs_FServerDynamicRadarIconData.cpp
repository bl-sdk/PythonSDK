#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FServerDynamicRadarIconData()
{
    py::class_< FServerDynamicRadarIconData >("FServerDynamicRadarIconData")
        .def_readwrite("SourceObject", &FServerDynamicRadarIconData::SourceObject)
        .def_readwrite("Duration", &FServerDynamicRadarIconData::Duration)
        .def_readwrite("StartTime", &FServerDynamicRadarIconData::StartTime)
  ;
}