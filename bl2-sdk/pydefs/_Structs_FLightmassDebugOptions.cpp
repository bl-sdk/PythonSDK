#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLightmassDebugOptions()
{
    class_< FLightmassDebugOptions >("FLightmassDebugOptions", no_init)
        .def_readwrite("CoplanarTolerance", &FLightmassDebugOptions::CoplanarTolerance)
        .def_readwrite("ExecutionTimeDivisor", &FLightmassDebugOptions::ExecutionTimeDivisor)
  ;
}