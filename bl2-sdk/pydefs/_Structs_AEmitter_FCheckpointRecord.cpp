#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AEmitter_FCheckpointRecord()
{
    class_< AEmitter_FCheckpointRecord >("AEmitter_FCheckpointRecord", no_init)
  ;
}