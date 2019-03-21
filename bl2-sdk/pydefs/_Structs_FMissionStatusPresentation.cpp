#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMissionStatusPresentation()
{
    py::class_< FMissionStatusPresentation >("FMissionStatusPresentation")
        .def_readwrite("TextColor", &FMissionStatusPresentation::TextColor)
        .def_readwrite("IconFrame", &FMissionStatusPresentation::IconFrame)
  ;
}