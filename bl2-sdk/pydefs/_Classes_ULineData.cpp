#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULineData()
{
    class_< ULineData, bases< UObject >  , boost::noncopyable>("ULineData", no_init)
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
        .def("StaticClass", &ULineData::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}