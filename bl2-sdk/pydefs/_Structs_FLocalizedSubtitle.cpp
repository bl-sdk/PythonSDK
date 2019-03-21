#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLocalizedSubtitle(py::object m)
{
    py::class_< FLocalizedSubtitle >(m, "FLocalizedSubtitle")
        .def_readwrite("LanguageExt", &FLocalizedSubtitle::LanguageExt)
        .def_readwrite("Subtitles", &FLocalizedSubtitle::Subtitles)
  ;
}