#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCreditsLine(py::module &m)
{
    py::class_< FCreditsLine >(m, "FCreditsLine")
        .def_readwrite("LineType", &FCreditsLine::LineType)
        .def_readwrite("Text", &FCreditsLine::Text)
  ;
}