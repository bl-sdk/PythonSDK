#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSubtitleCue()
{
    class_< FSubtitleCue >("FSubtitleCue", no_init)
        .def_readwrite("Text", &FSubtitleCue::Text)
        .def_readwrite("Time", &FSubtitleCue::Time)
  ;
}