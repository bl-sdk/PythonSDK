#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULineData(py::object m)
{
    py::class_< ULineData,  UObject   >(m, "ULineData")
        .def_readonly("RubberBand", &ULineData::RubberBand)
        .def_readwrite("ParentID", &ULineData::ParentID)
        .def_readwrite("SegmentID", &ULineData::SegmentID)
        .def_readwrite("CurrentCombatZoneID", &ULineData::CurrentCombatZoneID)
        .def_readwrite("CurrentCombatZoneName", &ULineData::CurrentCombatZoneName)
        .def_readwrite("VertexScale", &ULineData::VertexScale)
        .def_readwrite("VertexScaleFactor", &ULineData::VertexScaleFactor)
        .def_readwrite("LineSegmentScale", &ULineData::LineSegmentScale)
        .def_readwrite("LineSegmentScaleFactor", &ULineData::LineSegmentScaleFactor)
        .def_readwrite("EditorMode", &ULineData::EditorMode)
        .def_readwrite("Lines", &ULineData::Lines)
        .def("StaticClass", &ULineData::StaticClass, py::return_value_policy::reference)
          ;
}