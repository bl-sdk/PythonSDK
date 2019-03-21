#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ANavigationPoint_FCheckpointRecord()
{
    class_< ANavigationPoint_FCheckpointRecord >("ANavigationPoint_FCheckpointRecord", no_init)
  ;
}