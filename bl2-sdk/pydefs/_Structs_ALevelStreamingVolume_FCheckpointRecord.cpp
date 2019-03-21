#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ALevelStreamingVolume_FCheckpointRecord()
{
    class_< ALevelStreamingVolume_FCheckpointRecord >("ALevelStreamingVolume_FCheckpointRecord", no_init)
  ;
}