#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USequenceFrameWrapped()
{
    class_< USequenceFrameWrapped, bases< USequenceObject >  , boost::noncopyable>("USequenceFrameWrapped", no_init)
        .def_readwrite("SizeX", &USequenceFrame::SizeX)
        .def_readwrite("SizeY", &USequenceFrame::SizeY)
        .def_readwrite("BorderWidth", &USequenceFrame::BorderWidth)
        .def_readwrite("BorderColor", &USequenceFrame::BorderColor)
        .def_readwrite("FillColor", &USequenceFrame::FillColor)
        .def("StaticClass", &USequenceFrameWrapped::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}