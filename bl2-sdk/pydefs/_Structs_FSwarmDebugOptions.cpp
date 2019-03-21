#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSwarmDebugOptions()
{
    class_< FSwarmDebugOptions >("FSwarmDebugOptions", no_init)
  ;
}