#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCreditsLine()
{
    py::class_< FCreditsLine >("FCreditsLine")
        .def_readwrite("LineType", &FCreditsLine::LineType)
        .def_readwrite("Text", &FCreditsLine::Text)
  ;
}