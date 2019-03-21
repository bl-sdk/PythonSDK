#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ATrigger_FCheckpointRecord()
{
    class_< ATrigger_FCheckpointRecord >("ATrigger_FCheckpointRecord", no_init)
  ;
}