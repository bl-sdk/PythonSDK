#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGBXLineCheckResult()
{
    class_< FGBXLineCheckResult >("FGBXLineCheckResult", no_init)
        .def_readwrite("Location", &FGBXLineCheckResult::Location)
        .def_readwrite("Normal", &FGBXLineCheckResult::Normal)
        .def_readwrite("Time", &FGBXLineCheckResult::Time)
  ;
}