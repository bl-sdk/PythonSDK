#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCanvasIcon()
{
    class_< FCanvasIcon >("FCanvasIcon", no_init)
        .def_readwrite("Texture", &FCanvasIcon::Texture)
        .def_readwrite("U", &FCanvasIcon::U)
        .def_readwrite("V", &FCanvasIcon::V)
        .def_readwrite("UL", &FCanvasIcon::UL)
        .def_readwrite("VL", &FCanvasIcon::VL)
  ;
}