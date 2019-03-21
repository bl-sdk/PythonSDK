#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAwarenessInfo(py::object m)
{
    py::class_< FAwarenessInfo >(m, "FAwarenessInfo")
        .def_readwrite("Location", &FAwarenessInfo::Location)
        .def_readwrite("Radius", &FAwarenessInfo::Radius)
        .def_readwrite("AwarenessZoneName", &FAwarenessInfo::AwarenessZoneName)
        .def_readwrite("ZoneColor", &FAwarenessInfo::ZoneColor)
  ;
}