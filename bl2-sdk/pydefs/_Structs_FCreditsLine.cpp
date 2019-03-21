#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCreditsLine()
{
    class_< FCreditsLine >("FCreditsLine", no_init)
        .def_readwrite("LineType", &FCreditsLine::LineType)
        .def_readwrite("Text", &FCreditsLine::Text)
  ;
}