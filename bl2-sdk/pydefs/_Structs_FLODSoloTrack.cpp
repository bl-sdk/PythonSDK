#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLODSoloTrack()
{
    class_< FLODSoloTrack >("FLODSoloTrack", no_init)
        .def_readwrite("SoloEnableSetting", &FLODSoloTrack::SoloEnableSetting)
  ;
}