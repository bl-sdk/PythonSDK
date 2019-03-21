#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FServerDynamicRadarIconData(py::object m)
{
    py::class_< FServerDynamicRadarIconData >(m, "FServerDynamicRadarIconData")
        .def_readwrite("SourceObject", &FServerDynamicRadarIconData::SourceObject)
        .def_readwrite("Duration", &FServerDynamicRadarIconData::Duration)
        .def_readwrite("StartTime", &FServerDynamicRadarIconData::StartTime)
  ;
}