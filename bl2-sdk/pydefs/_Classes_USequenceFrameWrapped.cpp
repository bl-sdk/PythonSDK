#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USequenceFrameWrapped()
{
    py::class_< USequenceFrameWrapped,  USequenceObject   >("USequenceFrameWrapped")
        .def_readwrite("SizeX", &USequenceFrame::SizeX)
        .def_readwrite("SizeY", &USequenceFrame::SizeY)
        .def_readwrite("BorderWidth", &USequenceFrame::BorderWidth)
        .def_readwrite("BorderColor", &USequenceFrame::BorderColor)
        .def_readwrite("FillColor", &USequenceFrame::FillColor)
        .def("StaticClass", &USequenceFrameWrapped::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}