#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFiringPatternLine()
{
    class_< FFiringPatternLine >("FFiringPatternLine", no_init)
        .def_readwrite("StartPoint", &FFiringPatternLine::StartPoint)
        .def_readwrite("EndPoint", &FFiringPatternLine::EndPoint)
        .def_readwrite("CustomWaveMotion", &FFiringPatternLine::CustomWaveMotion)
  ;
}