#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInterpCurveTwoVectors(py::module &m)
{
    py::class_< FInterpCurveTwoVectors >(m, "FInterpCurveTwoVectors")
        .def_readwrite("Points", &FInterpCurveTwoVectors::Points)
        .def_readwrite("InterpMethod", &FInterpCurveTwoVectors::InterpMethod)
  ;
}