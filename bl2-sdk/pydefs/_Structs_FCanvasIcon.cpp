#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCanvasIcon()
{
    py::class_< FCanvasIcon >("FCanvasIcon")
        .def_readwrite("Texture", &FCanvasIcon::Texture)
        .def_readwrite("U", &FCanvasIcon::U)
        .def_readwrite("V", &FCanvasIcon::V)
        .def_readwrite("UL", &FCanvasIcon::UL)
        .def_readwrite("VL", &FCanvasIcon::VL)
  ;
}