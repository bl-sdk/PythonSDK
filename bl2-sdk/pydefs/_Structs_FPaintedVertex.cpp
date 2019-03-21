#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPaintedVertex()
{
    class_< FPaintedVertex >("FPaintedVertex", no_init)
        .def_readwrite("Position", &FPaintedVertex::Position)
        .def_readwrite("Normal", &FPaintedVertex::Normal)
        .def_readwrite("Color", &FPaintedVertex::Color)
  ;
}