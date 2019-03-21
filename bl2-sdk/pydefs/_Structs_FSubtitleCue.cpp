#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSubtitleCue()
{
    py::class_< FSubtitleCue >("FSubtitleCue")
        .def_readwrite("Text", &FSubtitleCue::Text)
        .def_readwrite("Time", &FSubtitleCue::Time)
  ;
}