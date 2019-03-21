#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTCameraCache()
{
    class_< FTCameraCache >("FTCameraCache", no_init)
        .def_readwrite("TimeStamp", &FTCameraCache::TimeStamp)
        .def_readwrite("POV", &FTCameraCache::POV)
  ;
}