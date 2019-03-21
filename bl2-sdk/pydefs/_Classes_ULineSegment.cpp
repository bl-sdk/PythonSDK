#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULineSegment()
{
    class_< ULineSegment, bases< UObject >  , boost::noncopyable>("ULineSegment", no_init)
        .def_readwrite("ParentLine", &ULineSegment::ParentLine)
        .def_readonly("Verts", &ULineSegment::Verts)
        .def_readwrite("Direction", &ULineSegment::Direction)
        .def_readonly("NormalLine", &ULineSegment::NormalLine)
        .def_readwrite("Size", &ULineSegment::Size)
        .def_readwrite("SegmentType", &ULineSegment::SegmentType)
        .def_readwrite("SegmentMaterial", &ULineSegment::SegmentMaterial)
        .def_readwrite("SegmentID", &ULineSegment::SegmentID)
        .def_readwrite("LineColor", &ULineSegment::LineColor)
        .def_readwrite("NormalColor", &ULineSegment::NormalColor)
        .def_readwrite("SelectedColor", &ULineSegment::SelectedColor)
        .def_readwrite("VulnerableColor", &ULineSegment::VulnerableColor)
        .def_readwrite("VantageColor", &ULineSegment::VantageColor)
        .def_readwrite("SIColor", &ULineSegment::SIColor)
        .def_readwrite("RetreatColor", &ULineSegment::RetreatColor)
        .def_readwrite("StealthColor", &ULineSegment::StealthColor)
        .def("StaticClass", &ULineSegment::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}