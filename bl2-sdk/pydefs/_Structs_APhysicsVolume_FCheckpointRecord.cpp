#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APhysicsVolume_FCheckpointRecord()
{
    class_< APhysicsVolume_FCheckpointRecord >("APhysicsVolume_FCheckpointRecord", no_init)
  ;
}