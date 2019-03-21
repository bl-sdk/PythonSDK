#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AFogVolumeDensityInfo_FCheckpointRecord()
{
    class_< AFogVolumeDensityInfo_FCheckpointRecord >("AFogVolumeDensityInfo_FCheckpointRecord", no_init)
  ;
}