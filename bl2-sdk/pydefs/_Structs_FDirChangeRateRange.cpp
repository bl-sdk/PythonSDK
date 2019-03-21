#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDirChangeRateRange()
{
    class_< FDirChangeRateRange >("FDirChangeRateRange", no_init)
        .def_readwrite("DirDegreesPerSecond", &FDirChangeRateRange::DirDegreesPerSecond)
        .def_readwrite("SpeedRange", &FDirChangeRateRange::SpeedRange)
  ;
}