#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInterpCurveTwoVectors()
{
    py::class_< FInterpCurveTwoVectors >("FInterpCurveTwoVectors")
        .def_readwrite("Points", &FInterpCurveTwoVectors::Points)
        .def_readwrite("InterpMethod", &FInterpCurveTwoVectors::InterpMethod)
  ;
}