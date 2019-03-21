#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPolySegmentSpan()
{
    class_< FPolySegmentSpan >("FPolySegmentSpan", no_init)
        .def_readwrite("Poly", &FPolySegmentSpan::Poly)
        .def_readwrite("P1", &FPolySegmentSpan::P1)
        .def_readwrite("P2", &FPolySegmentSpan::P2)
  ;
}