#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLocalizedSubtitle()
{
    py::class_< FLocalizedSubtitle >("FLocalizedSubtitle")
        .def_readwrite("LanguageExt", &FLocalizedSubtitle::LanguageExt)
        .def_readwrite("Subtitles", &FLocalizedSubtitle::Subtitles)
  ;
}