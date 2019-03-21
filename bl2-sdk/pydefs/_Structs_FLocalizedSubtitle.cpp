#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLocalizedSubtitle()
{
    class_< FLocalizedSubtitle >("FLocalizedSubtitle", no_init)
        .def_readwrite("LanguageExt", &FLocalizedSubtitle::LanguageExt)
        .def_readwrite("Subtitles", &FLocalizedSubtitle::Subtitles)
  ;
}