#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInterpLookupTrack()
{
    class_< FInterpLookupTrack >("FInterpLookupTrack", no_init)
        .def_readwrite("Points", &FInterpLookupTrack::Points)
  ;
}