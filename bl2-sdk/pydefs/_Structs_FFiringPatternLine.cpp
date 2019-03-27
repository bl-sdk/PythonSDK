#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFiringPatternLine(py::module &m)
{
    py::class_< FFiringPatternLine >(m, "FFiringPatternLine")
        .def_readwrite("StartPoint", &FFiringPatternLine::StartPoint)
        .def_readwrite("EndPoint", &FFiringPatternLine::EndPoint)
        .def_readwrite("CustomWaveMotion", &FFiringPatternLine::CustomWaveMotion)
  ;
}