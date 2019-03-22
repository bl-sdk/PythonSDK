#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULineSegment(py::module &m)
{
    py::class_< ULineSegment,  UObject   >(m, "ULineSegment")
        .def_readwrite("ParentLine", &ULineSegment::ParentLine)
        .def_readwrite("Direction", &ULineSegment::Direction)
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
        .def("StaticClass", &ULineSegment::StaticClass, py::return_value_policy::reference)
          ;
}